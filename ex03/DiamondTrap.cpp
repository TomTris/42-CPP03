/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:33:20 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 18:27:45 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " now left" << std::endl;
}
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_trap"), ScavTrap("Default_clap_trap"), FragTrap("Default_clap_trap")
{
	_name = "Default";
	std::cout << "DiamondTrap " << _name << " was born" << std::endl;
	_HP = FragTrap::_HP;
	_EP = ScavTrap::_EP;
	_AD = FragTrap::_AD;
}

DiamondTrap::DiamondTrap(DiamondTrap & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(name + "_clap_trap"), FragTrap(name + "_clap_trap")
{
	_name = name;
	std::cout << "DiamondTrap " << _name << " was born" << std::endl;
	_HP = FragTrap::_HP;
	_EP = ScavTrap::_EP;
	_AD = FragTrap::_AD;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &src)
{
	std::cout << "DiamondTrap Copy Assignation called" << std::endl;
	_name = src._name;
	_HP = src._HP;
	_EP = src._EP;
	_AD = src._AD;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	this->_name += "1";
	std::cout << "I'm DiamondTrap " << _name << " inherits from ClapTrap " << ClapTrap::_name << std::endl; 
}
