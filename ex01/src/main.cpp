/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:18:13 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 18:11:33 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(void) {
	std::cout << YELLOW << "** Players joining the arena **" << RESET << std::endl;
	ClapTrap ct1("CT");
	ScavTrap tr1("TR");
	std::cout << std::endl;

	std::cout << YELLOW << "** Getting players info **" << RESET << std::endl;
	ct1.getStatus();
	tr1.getStatus();
	std::cout << std::endl;

	std::cout << YELLOW << "** CT attacks TR **" << RESET << std::endl;
	ct1.attack(tr1.getName());
	tr1.takeDamage(ct1.getAttackDamage());
	std::cout << std::endl;

	std::cout << YELLOW << "** TR got angry and attack CT **" << RESET << std::endl;
	tr1.attack(ct1.getName());
	ct1.takeDamage(tr1.getAttackDamage());
	std::cout << std::endl;

	std::cout << YELLOW << "** Gate Keeper mode activation **" << RESET << std::endl;
	tr1.guardGate();
	std::cout << std::endl;

	std::cout << YELLOW << "** Players final status **" << RESET << std::endl;
	ct1.getStatus();
	tr1.getStatus();
	std::cout << std::endl;

	std::cout << YELLOW << "** Game Over **" << RESET << std::endl;
	
	return (0);
}