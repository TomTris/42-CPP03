/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:52:56 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 15:51:12 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {


protected:
	std::string _name;
	unsigned int _HP;
	unsigned int _EP;
	unsigned int _AD;

public:
	~ClapTrap();
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & src);
	ClapTrap & operator=(ClapTrap & src);
	
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
