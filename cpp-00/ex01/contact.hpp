/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:46 by hbouhsis          #+#    #+#             */
/*   Updated: 2022/08/17 19:53:48 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define  CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <limits>
 

class Contact {
	public :
		Contact();
		Contact(std::string info[]);
		~Contact();
		std::string GetFirstName(void) const;
		std::string GetLastNAme(void) const;
		std::string GetNickname(void) const;
		std::string GetPhoneNumber(void) const;
		std::string GetDarkestSecret(void) const;
		
	private :
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

#endif
