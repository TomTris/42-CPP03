/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:40:23 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 15:54:13 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

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
};


#endif
