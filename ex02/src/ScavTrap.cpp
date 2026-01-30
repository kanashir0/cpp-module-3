/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:43:07 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 17:50:40 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << getName() << " has entered the arena. " << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << getName() << " has entered the arena. " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap " << other.getName() << " has been cloned." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << getName() << " has left the arena. " << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap " << getName() << " has been assigned from " << other.getName() << "." << std::endl;
	if (this != &other) {
		_name = other.getName();
		_hit_points = other.getHitPoints();
		_energy_points = other.getEnergyPoints();
		_attack_damage = other.getAttackDamage();
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (_hit_points == 0) {
		std::cout << "ScavTrap " << _name << " is dead and cannot attack." << std::endl;
		return ;
	}
	if (_energy_points == 0) {
		std::cout << "ScavTrap " << _name << " has no energy points left to attack." << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attack_damage << " points of damage! "
			  << "Remaining EP: " << _energy_points << "." << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const {
	if (_hit_points == 0) {
		std::cout << "ScavTrap " << _name << " is dead and cannot enter Gate Keeper mode." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}