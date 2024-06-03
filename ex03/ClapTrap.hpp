/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:35:35 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 19:28:26 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{

private:
	std::string	_name;
	int 		_hit_points;
	int 		_energy_points;
	int 		_attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & src);
	virtual ~ClapTrap();

	std::string getName(void) const;
	int			getHP(void) const;
	int			getMana(void) const;
	int			getDamage(void) const;

	void		setName(std::string name);
	void		setHP(int nbr);
	void		setMana(int nbr);
	void		setDamage(int nbr);
	
	ClapTrap & operator=(ClapTrap &src);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif
