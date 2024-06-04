/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:54:20 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 16:11:13 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " now left" << std::endl;
}
ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "Default";
	std::cout << "ScavTrap " << _name << " was born" << std::endl;
	_guard = false;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	std::cout << "ScavTrap " << _name << " was born" << std::endl;
	_guard = false;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

ScavTrap::ScavTrap(ScavTrap & src) : ScavTrap(src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap &src)
{
	std::cout << "ScavTrap Copy Assignation called" << std::endl;
	_name = src._name;
	_HP = src._HP;
	_EP = src._EP;
	_AD = src._AD;
	_guard = src._guard;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	if (_guard == false)
	{
		_guard = true;
		std::cout << "ScavTrap " << _name << " is now GuardGate" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is already GuardGate" << std::endl;
}
