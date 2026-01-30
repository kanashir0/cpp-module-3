/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:49:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 18:53:55 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap " << other.getName() << " has been cloned." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " has been destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap " << _name << " has been assigned values from FragTrap " << other.getName() << std::endl;
	if (this != &other) {
		_name = other.getName();
		_hit_points = other.getHitPoints();
		_energy_points = other.getEnergyPoints();
		_attack_damage = other.getAttackDamage();
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) const {
	if (_hit_points == 0) {
		std::cout << "FragTrap " << _name << " is already dead and cannot high five." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " is giving a high five!" << std::endl;
}