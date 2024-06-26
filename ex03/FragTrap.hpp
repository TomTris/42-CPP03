/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:01:03 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 18:34:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		~FragTrap();
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap & src);
		FragTrap & operator=(FragTrap & src);

		void highFivesGuys(void);
};


#endif
