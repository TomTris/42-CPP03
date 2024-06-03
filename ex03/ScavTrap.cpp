/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:28:30 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 16:55:42 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default was born" << std::endl;
	this->setName("Default");
	this->setHP(100);
	this->setMana(50);
	this->setDamage(20);
	this->_guarding_gate = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " was born" << std::endl;
	this->setName(name);
	this->setHP(100);
	this->setMana(50);
	this->setDamage(20);
	this->_guarding_gate = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " now left" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setMana(src.getMana());
		this->setDamage(src.getDamage());
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (this->_guarding_gate == false)
	{
		std::cout << this->getName() << " now becomes GuardGate" << std::endl;
		this->_guarding_gate = true;
	}
	else
		std::cout << this->getName() << " is already Guardgate" << std::endl;
}

void ScavTrap::attack(const std::string & name)
{
	if (this->getHP() == 0)
		std::cout << "ScavTrap " << getName() << ": \033[33mcan't attack anymore because he's dead already\033[0m" << std::endl;
	else if (this->getMana() == 0)
		std::cout << "ScavTrap " << getName() << ": \033[33mcan't attack anymore because he doesn't have enough Energy Points left\033[0m" << std::endl;
	else
	{
		this->setMana(this->getMana() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << name << ", causing " << getDamage() << " points of damage!" << std::endl;
	}
}