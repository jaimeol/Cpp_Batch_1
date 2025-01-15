/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:34:26 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:41:26 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "The memory address of the string variable: ";
	std::cout << &str << std::endl;
	std::cout << "The memory address held by ptr: ";
	std::cout << ptr << std::endl;
	std::cout << "The memory address held by ref: ";
	std::cout << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: ";
	std::cout << str << std::endl;
	std::cout << "The value pointed to by ptr: ";
	std::cout << *ptr << std::endl;
	std::cout << "The value pointed to by ref: ";
	std::cout << ref << std::endl;
    
}