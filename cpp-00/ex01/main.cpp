/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:52 by hbouhsis          #+#    #+#             */
/*   Updated: 2022/08/17 19:53:54 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(){
	PhoneBook book;
	std::string command;

	std::cout << "Enter one of the commands below :" << std::endl;
	std::cout << "    *  ADD   *   " << std::endl;
	std::cout << "    * SEARCH *   " << std::endl;
	std::cout << "    *  EXIT  *   " << std::endl;
	while(1)
	{
		getline(std::cin, command);
		if(std::cin.eof())
		{
			std::cout << "invalid input" << std::endl;
			break;
		}
		if (command == "ADD" || command == "add")
			  book.AddContact();
		else if(command == "SEARCH" || command == "search")
			book.SearchContact();
		else if(command == "EXIT" || command == "exit")
			return(EXIT_SUCCESS);
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
}
