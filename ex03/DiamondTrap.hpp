/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:33:41 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 18:34:34 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		~DiamondTrap();
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap & src);
		DiamondTrap & operator=(DiamondTrap & src);

		void attack(std::string const & target);
		void whoAmI(void);
};

#endif
