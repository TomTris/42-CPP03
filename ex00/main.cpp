/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:52:58 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 15:38:31 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		std::cout<< 0<< std::endl;
		a.takeDamage(10);
		std::cout<< 1<< std::endl;
		a.takeDamage(10);
		std::cout<< 2<< std::endl;
		a.beRepaired(5);
		std::cout<< 3<< std::endl;
		a.attack("some other other robot");
		std::cout<< 4<< std::endl;
		b.beRepaired(3);
		std::cout<< 5<< std::endl;
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		
		std::cout<< 6<< std::endl;
		b.beRepaired(3);
		
		std::cout<< 7<< std::endl;
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}
