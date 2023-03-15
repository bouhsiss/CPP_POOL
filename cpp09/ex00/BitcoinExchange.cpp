#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	parseDatabaseFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	return(*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseDatabaseFile() {
	std::ifstream DBfile("./data.csv");

	if(DBfile.is_open()) {
		std::string line;
		std::getline(DBfile, line);
		while(getline(DBfile, line)){
			std::stringstream sstr(line);
			std::string key;
			std::string value;
			getline(sstr, key, ',');
			getline(sstr, value, ',');
			btcPriceAndDate.insert(std::pair<std::string, float>(key, stof(value)));
		}
	}
	else
		std::cout << "Error: could not open file" << std::endl;
}

bool strisdigit(std::string str) {
	int i = 0;
	while(isspace(str[i]))
		i++;
	while(str[i]) {
		if(std::isdigit(str[i]) == 0)
			return(false);
	}
	return(true);
}

bool ErrorMessage(std::string message, std::string Error) {
	std::cout << message << " => " << Error << std::endl;
	return(false);
}

bool BitcoinExchange::checkDateFormat(std::string date) {
	std::string year;
	std::string month;
	std::string day;
	std::stringstream sstr(date);
	if(std::count(date.begin(), date.end(), '-') != 2)
		return(ErrorMessage("Error : bad input", date));
	getline(sstr, year, '-');
	getline(sstr, month, '-');
	getline(sstr, day, ' ');
	if(!(strisdigit(year) && strisdigit(month) && strisdigit(day)))
		return(ErrorMessage("Invalid date :", date));
	if(!(stoi(year) >= 2009 && stoi(year) <= 2022 ))
		return(ErrorMessage("year out of range :", year));
	if(!(stoi(month) >= 1 && stoi(month) <= 12))
		return(ErrorMessage("Invalid date :", month));
	if(!(stoi(day) >= 0 && stoi(day) <= 31))
		return(ErrorMessage("Invalid date:", day));
	
	return(true);
}

bool BitcoinExchange::checkValueFormat(std::string value) {
	if(stoi(value) < 0)
		return(ErrorMessage("Error : not a positive number", value));
	if(stoi(value) > 1000)
		return(ErrorMessage("Error : number too large", value));
	if(!strisdigit(value))
		return(ErrorMessage("Error : bad input", value));
	return(true);
}

bool BitcoinExchange::checkInputFormat(std::string inputFileLine) {
	std::string date;
	std::string value;
	std::string temp;
	std::stringstream sstr(inputFileLine);
	if(std::count(inputFileLine.begin(), inputFileLine.end(), '|') != 1)
		return(ErrorMessage("Error : bad input ", inputFileLine));
	getline(sstr, date, '|');
	getline(sstr, value, '|');
	return(checkDateFormat(date) && checkValueFormat(value));
}

int BitcoinExchange::btcCalculator(std::string inputFileName) {
	std::ifstream inputFile(inputFileName);

	if(inputFile.is_open()) {
		std::string line;
		std::getline(inputFile, line);
		while(getline(inputFile, line)) {
			if(checkInputFormat(line)) {
				std::map<std::string, float>::iterator It;
				It = btcPriceAndDate.find()
			}
		}
	}
	else
		std::cout << "Error : could not open file : " << inputFileName << std::endl;
}