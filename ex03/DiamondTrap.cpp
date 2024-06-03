/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:11:01 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 19:58:08 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_trap")
{
	std::cout << "DiamondTrap Default was born"<<std::endl;
	this->setName("Default");
	this->setHP(FragTrap::getHP());
	this->setMana(ScavTrap::getMana());
	this->setDamage(FragTrap::getDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap " << name << " was born" << std::endl;
	this->setName(name);
	this->setHP(FragTrap::getHP());
	this->setMana(ScavTrap::getMana());
	this->setDamage(FragTrap::getDamage());
}

DiamondTrap::DiamondTrap(DiamondTrap & const src)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond " << _name << " left" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I Am DiamonTrap " << _name << " derived from " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(std::string const & o_name)
{
	ScavTrap::attack(o_name);
}