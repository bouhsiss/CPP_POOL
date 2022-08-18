/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:52:40 by hbouhsis          #+#    #+#             */
/*   Updated: 2022/08/17 19:52:44 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc > 1)
	{
		while(argv[++i])
		{
			std::string arg(argv[i]);
			for(int j = 0; j < arg.length(); j++)
				arg[j] = toupper(arg[j]);
			std::cout << arg;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}  
