#pragma once 
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <exception>

class BitcoinExchange {
	private :
		std::map<std::string, float> btcPriceAndDate;
		std::string date;
		int value;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();
		int btcCalculator(std::string inputFileName);
		bool checkValueFormat(std::string value);
		bool checkDateFormat(std::string date);
		bool checkInputFormat(std::string inputFileLine);
		std::string findFirstKeyLessThan(std::string key);
		void parseDatabaseFile();
};