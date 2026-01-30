/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:47:52 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 18:48:02 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& other);

		void	highFivesGuys(void) const;
};

#endif