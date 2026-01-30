/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:18:13 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 18:58:47 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main(void) {
	std::cout << YELLOW << "*** This tale is about to start ***" << RESET << std::endl;
	ClapTrap	ct("Ronaldo");
	ScavTrap	st("Jorginho");
	FragTrap	ft("Maguila");
	FragTrap	twin(ft);
	std::cout << std::endl;

	std::cout << YELLOW << "*** The heroes assemble at dawn ***" << RESET << std::endl;
	ct.getStatus();
	st.getStatus();
	ft.getStatus();
	twin.getStatus();
	std::cout << std::endl;

	std::cout << YELLOW << "*** Ronaldo makes the first move and attack the others ***" << RESET << std::endl;
	ct.attack(st.getName());
	st.takeDamage(ct.getAttackDamage());
	ct.attack(ft.getName());
	ft.takeDamage(ct.getAttackDamage());
	std::cout << std::endl;

	std::cout << YELLOW << "*** Jorginho loses patience and counterattacks ***" << RESET << std::endl;
	st.attack(ct.getName());
	ct.takeDamage(st.getAttackDamage());
	st.attack(ft.getName());
	ft.takeDamage(st.getAttackDamage());
	std::cout << std::endl;

	std::cout << YELLOW << "*** Maguila (the twin) raises a hand in peace ***" << RESET << std::endl;
	twin.highFivesGuys();
	std::cout << std::endl;

	std::cout << YELLOW << "*** Jorginho shrugs and takes guard at the northern gate ***" << RESET << std::endl;
	st.guardGate();
	std::cout << std::endl;

	std::cout << YELLOW << "*** Final status after the conflict ***" << RESET << std::endl;
	ct.getStatus();
	st.getStatus();
	ft.getStatus();
	twin.getStatus();
	std::cout << std::endl;

	std::cout << YELLOW << "*** Night falls... until next time! ***" << RESET << std::endl;
	
	return (0);
}