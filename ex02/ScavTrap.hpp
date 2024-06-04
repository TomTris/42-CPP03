/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:40:23 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 16:27:41 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	bool _guard;

public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	ScavTrap & operator=(ScavTrap & src);

	void guardGate(void);
	void attack(const std::string& target);
};


#endif
