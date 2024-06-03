/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:44:53 by qdo               #+#    #+#             */
/*   Updated: 2024/06/03 19:31:39 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap & operator=(FragTrap const &src);
	void highFiveGuys( void );
};



#endif
