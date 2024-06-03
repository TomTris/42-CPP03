/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:28:40 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 19:31:53 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:
	bool _guarding_gate;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	~ScavTrap();

	void	guardGate();
	ScavTrap & operator=(ScavTrap const & Scavtrap);
	void	attack(const std::string & name);
};

#endif
