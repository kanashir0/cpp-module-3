/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:18:13 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 17:26:45 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main(void) {
	std::cout << YELLOW << "** ClapTraps entering **" << RESET << std::endl;
	ClapTrap ct1("CT 1");
	ClapTrap ct2("CT 2");
	ClapTrap ct3;
	ct3 = ct1;
	ClapTrap ct_clone(ct2);
	std::cout << std::endl;

	std::cout << YELLOW << "** ClapTraps warm-up **" << RESET << std::endl;
	ct1.attack("Dummy Target");
	ct1.takeDamage(3);
	ct1.beRepaired(5);
	std::cout << std::endl;

	std::cout << YELLOW << "** ClapTraps training a lot! **" << RESET << std::endl;
	for (int i = 0; i < 12; i++) {
		ct2.attack("Dummy Target");
	}
	ct2.takeDamage(3);
	ct2.beRepaired(5);
	std::cout << std::endl;

	std::cout << YELLOW << "** ClapTraps in a tough fight! **" << RESET << std::endl;
	ct3.takeDamage(15);
	ct3.attack("Monster");
	ct3.beRepaired(10);
	std::cout << std::endl;

	std::cout << YELLOW << "** ClapTraps leaving **" << RESET << std::endl;
	return (0);
}