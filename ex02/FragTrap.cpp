/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:00:05 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 16:05:26 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " now left" << std::endl;
}
FragTrap::FragTrap() : ClapTrap()
{
	_name = "Default";
	std::cout << "FragTrap " << _name << " was born" << std::endl;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	std::cout << "FragTrap " << _name << " was born" << std::endl;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

FragTrap::FragTrap(FragTrap & src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

FragTrap& FragTrap::operator=(FragTrap &src)
{
	std::cout << "FragTrap Copy Assignation called" << std::endl;
	_name = src._name;
	_HP = src._HP;
	_EP = src._EP;
	_AD = src._AD;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "ClapTrap " << _name << "Everyoneeeeee      Fightttttt!!!!!!!" << std::endl;
}
