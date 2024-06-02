/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:35:35 by qdo               #+#    #+#             */
/*   Updated: 2024/06/02 10:12:11 by qdo              ###   ########.fr       */
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
	~ClapTrap();
	
	std::string getName(void);
	int			getHP(void);
	int			getMana(void);
	int			getDamage(void);

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
