#pragma once 
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <exception>
#include <cstdlib>
#include <iomanip>
class BitcoinExchange {
	private :
		std::map<std::string, double> btcPriceAndDate;
		std::string date;
		double value;
		bool checkValueFormat(std::string value);
		bool checkDateFormat(std::string date);
		bool checkInputFormat(std::string inputFileLine);
		double findFirstKeyLessThan(std::string key);
		double calculatePrice(double ExchangeRate);
		void displayResult(double result);
		void parseDatabaseFile();
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();
		void btcCalculator(std::string inputFileName);
}; 