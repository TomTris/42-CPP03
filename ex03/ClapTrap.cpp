/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:35:31 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 17:43:02 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default was born" << std::endl;
	_name = (std::string) "Default";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " was born" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << getName() << " now left" << std::endl;
}

std::string ClapTrap::getName(void) const {return _name;}
int	ClapTrap::getHP(void) const {return _hit_points;}
int	ClapTrap::getMana(void) const {return _energy_points;}
int	ClapTrap::getDamage(void) const {return _attack_damage;}

void ClapTrap::setName(std::string name) {_name = name;}
void ClapTrap::setHP(int nbr) {_hit_points = nbr;}
void ClapTrap::setMana(int nbr) {_energy_points = nbr;}
void ClapTrap::setDamage(int nbr) {_attack_damage = nbr;}

ClapTrap & ClapTrap::operator=(ClapTrap &src)
{
	this->setName(src.getName());
	this->setHP(src.getHP());
	this->setMana(src.getMana());
	this->setDamage(src.getDamage());
	return (*this);
}

void ClapTrap::attack(const std::string & target)
{
	if (this->getHP() == 0)
		std::cout << "Claptrap " << getName() << ": \033[33mcan't attack anymore because he's dead already\033[0m" << std::endl;
	else if (this->getMana() == 0)
		std::cout << "Claptrap " << getName() << ": \033[33mcan't attack anymore because he doesn't have enough Energy Points left\033[0m" << std::endl;
	else
	{
		this->setMana(this->getMana() - 1);
		std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getDamage() << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHP() == 0)
		std::cout << "\033[31mClaptrap " << getName() << " is dead already, stop attack\033[0m" << std::endl;
	else
	{
		if (getHP() <= (int) amount)
			setHP(0);
		else
			setHP(getHP() - amount);
		std::cout << "\033[31mClaptrap " << getName() << " was attacked and lost " << amount << " Hit Points, has " << getHP() << " Hit Points left\033[0m" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getHP() == 0)
		std::cout << "\033[32mClaptrap " << getName() << ": \033[33mdead already, can't be repaired\033[0m" << std::endl;
	else if (getHP() >= 10)
		std::cout << "\033[32mClaptrap " << getName() << ": \033[33mHit Poits >= 10, can't be repaired\033[0m" << std::endl;
	else if (getMana() == 0)
		std::cout << "\033[32mClaptrap " << getName() << ": \033[33m0 Energy Point left, can't be repaired\033[0m" << std::endl;
	else
	{
		setMana(getMana() - 1);
		if (getHP() + amount >= 10)
			setHP(10);
		else
			setHP(getHP() + amount);
		std::cout << "\033[32mClaptrap " << getName() << ": new Hit Points: " << getHP() << "\033[0m" << std::endl;
	}
}
