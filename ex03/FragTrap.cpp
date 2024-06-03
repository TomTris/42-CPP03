/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:44:54 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 17:06:26 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FrapTrap" << getName() << std::endl;
	this->setHP(100);
	this->setMana(100);
	this->setDamage(30);
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FrapTrap" << getName() << std::endl;
	this->setName(name);
	this->setHP(100);
	this->setMana(100);
	this->setDamage(30);
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->setName(src.getName());
	this->setHP(100);
	this->setMana(100);
	this->setDamage(30);
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " now left" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setMana(src.getMana());
		this->setDamage(src.getDamage());
	}
	return (*this);
}

void FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap " << getName() << " said: Fight!!!" << std::endl;
}