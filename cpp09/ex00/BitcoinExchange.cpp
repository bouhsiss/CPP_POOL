#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	parseDatabaseFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	this->date = other.date;
	this->value = other.value;
	return(*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseDatabaseFile() {
	std::ifstream DBfile("./data.csv");
	char *endptr;

	if(DBfile.is_open()) {
		std::string line;
		getline(DBfile, line);
		while(getline(DBfile, line)){
			std::stringstream sstr(line);
			std::string key;
			std::string value;
			getline(sstr, key, ',');
			getline(sstr, value, ',');
			btcPriceAndDate.insert(std::pair<std::string, double>(key, strtod(value.c_str(), &endptr)));
		}
		DBfile.close();
	}
	else
		std::cout << "Error: could not open file" << std::endl;
}

bool strisdigit(std::string str) {
	int i = 0;

	while(isspace(str[i]))
		str.erase(0);
	int found = str.find_first_not_of("0123456789");
	if(found != str.npos)
		return(false);
	return(true);
}

bool ErrorMessage(std::string message, std::string Error) {
	std::cout << message << " => " << Error << std::endl;
	return(false);
}

bool BitcoinExchange::checkDateFormat(std::string date) {
	char *endptr;
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
	if(!(strtod(year.c_str(), &endptr) >= 2009 && strtod(year.c_str(), &endptr) <= 2022 ))
		return(ErrorMessage("year out of range :", year));
	if(!(strtod(month.c_str(), &endptr) >= 1 && strtod(month.c_str(), &endptr) <= 12))
		return(ErrorMessage("Invalid date :", month));
	if(!(strtod(day.c_str(), &endptr) >= 0 && strtod(day.c_str(), &endptr) <= 31))
		return(ErrorMessage("Invalid date:", day));
	this->date = date;
	return(true);
}

bool BitcoinExchange::checkValueFormat(std::string value) {
	char* endptr;
	if(strtod(value.c_str(), &endptr) < 0)
		return(ErrorMessage("Error : not a positive number", value));
	if(strtod(value.c_str(), &endptr) > 1000)
		return(ErrorMessage("Error : number too large", value));
	if(*endptr != '\0')
		return(ErrorMessage("Error : not a valid input", value));
	this->value = strtod(value.c_str(), &endptr);
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

double BitcoinExchange::calculatePrice(double price) {
	return(price * this->value);
}

double BitcoinExchange::findFirstKeyLessThan(std::string key) {
	std::map<std::string, double>::iterator upper_key = btcPriceAndDate.upper_bound(key);
	if(upper_key != btcPriceAndDate.begin())
		upper_key--;
	return(upper_key->second);
}

void BitcoinExchange::displayResult(double result) {
	std::cout << this->date << " => " << this->value << " = " << result << std::endl;
}

void BitcoinExchange::btcCalculator(std::string inputFileName) {
	std::ifstream inputFile(inputFileName);

	if(inputFile.is_open()) {
		std::string line;
		std::getline(inputFile, line);
		while(getline(inputFile, line)) {
			if(checkInputFormat(line)) {
				std::map<std::string, double>::iterator It;
				It = btcPriceAndDate.find(date);
				if(It != btcPriceAndDate.end())
					displayResult(calculatePrice(It->second));
				else
					displayResult(calculatePrice(findFirstKeyLessThan(this->date)));
			}
		}
		inputFile.close();
	}
	else
		std::cout << "Error : could not open file : " << inputFileName << std::endl;
}