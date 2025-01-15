/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:52:17 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 14:09:05 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static bool openFiles(std::ifstream &ifs, std::ofstream &ofs, char const *ifn)
{
	std::string rfn(ifn);

	ifs.open(ifn);

	if (!ifs.is_open())
	{
		std::cerr << "Error: unable to open file '";
		std::cerr << ifn << "'" << std::endl;

		return false;
	}
	rfn += ".replace";
	ofs.open(rfn.c_str());
	
	if (!ofs.is_open())
	{
		std::cerr << "Error: unable to open file '";
		std::cerr << rfn << "'" << std::endl;
		ifs.close();

		return false;
	}
	return true;
}

static void replaceStrings(std::ifstream  &ifs, std::ofstream &ofs, char const *is, char const *os)
{
	std::string const s1(is);
	std::string const s2(os);
	std::string line;
	std::size_t n;

	while (std::getline(ifs, line))
	{
		if (!ifs.eof())
			line += '\n';
		n = line.find(s1);
		while (n != std::string::npos)
		{
			line = line.substr(0, n) + s2 + line.substr(n + s1.length());
			if (s1.empty())
				++n;
			n = line.find(s1, n + s2.length());
		}
		ofs << line << std::flush;
	}
	return;
}

int main(int argc, char **argv)
{
	std::ifstream ifs;
	std::ofstream ofs;
	
	if (argc < 4)
	{
		std::cerr << "Usage: [./sed_is_for_losers filename s1 s2]" << std::endl;
		return 2;
	}
	if (!openFiles(ifs, ofs, argv[1]))
		return 1;
	replaceStrings(ifs, ofs, argv[2], argv[3]);
	ifs.close();
	ofs.close();

	return 0;
}
