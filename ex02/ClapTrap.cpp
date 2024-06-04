/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:52:54 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 16:11:52 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " << _name << " now left" << std::endl; }
ClapTrap::ClapTrap()
{
	_name = "Default";
	std::cout << "ClapTrap " << _name << " was born" << std::endl;
	_HP = 10;
	_EP = 10;
	_AD = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	std::cout << "ClapTrap " << _name << " was born" << std::endl;
	_HP = 10;
	_EP = 10;
	_AD = 0;
}

ClapTrap::ClapTrap(ClapTrap  & src)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap & src)
{
	std::cout << "ClapTrap Copy Assignation operator called" << std::endl;
	_name = src._name;
	_HP = src._HP;
	_EP = src._EP;
	_AD = src._AD;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (_HP == 0)
		std::cout << "ClapTrap " << _name << " is already dead, can't attack " << target << std::endl;
	else if (_EP == 0)
		std::cout << "ClapTrap " << _name << " runs out of Energy Points, can't attack " << target << std::endl;
	else
	{
		_EP -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead already. Stop attacking " << _name << std::endl;
		return ;
	}
	if (_HP <= amount)
		_HP = 0;
	else
		_HP -= amount;
	std::cout << "ClapTrap " << _name << " was attacked, lost " << amount << " Hit Points, has " << _HP << " Hit Points left.";
	if (_HP == 0)
		std::cout << " " << _name <<" die.";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP >= 10)
		std::cout << "ClapTrap " << _name << "'s Hit Points are full, doesn't need to be repaired!." << std::endl;
	else if (_HP <= 0)
		std::cout << "ClapTrap " << _name << " is already dead, can't be repaired." << std::endl;
	else if (_EP == 0)
		std::cout << "ClapTrap " << _name << " runs out of Energy Point, can't be repaired." << std::endl;
	else
	{
		if (amount > 10 || _HP + amount > 10)
			_HP = 10;
		else
			_HP += amount;
		_EP -= 1;
		std::cout << "ClapTrap " << _name << " was repaired, has " << _HP << " Hit Points now and has " << _EP << " left." << std::endl;
	}
}
