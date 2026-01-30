/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:55:56 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/30 17:18:08 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("no name"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << _name << " has entered the arena. " << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << _name << " has entered the arena. " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other.getName()), _hit_points(other.getHitPoints()),
	  _energy_points(other.getEnergyPoints()), _attack_damage(other.getAttackDamage()) {
	std::cout << "ClapTrap " << other.getName() << " has been cloned." << std::endl;
}

ClapTrap::~ClapTrap(void) {
		std::cout << "ClapTrap " << _name << " has left the arena. " << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap " << _name << " has been assigned to " << other.getName() << "." << std::endl;
	if (this != &other) {
		_name = other.getName();
		_hit_points = other.getHitPoints();
		_energy_points = other.getEnergyPoints();
		_attack_damage = other.getAttackDamage();
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (_attack_damage);
}

void	ClapTrap::attack(const std::string& target) {
	if (_hit_points == 0) {
		std::cout << "ClapTrap " << _name << " is dead and cannot attack." << std::endl;
		return ;
	} else if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points left to attack." << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attack_damage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points == 0) {
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (amount >= _hit_points) {
		_hit_points = 0;
		std::cout << "ClapTrap " << _name << " has taken " << amount
				  << " points of damage and is now dead." << std::endl;
	} else {
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount
				  << " points of damage. Remaining HP: " << _hit_points
				  << "." << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points == 0) {
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired." << std::endl;
		return ;
	} else if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points left to repair." << std::endl;
		return ;
	}
	_energy_points--;
	_hit_points += amount;
	std::cout << "ClapTrap " << _name << " has been repaired by " << amount
			  << " points. Total HP: " << _hit_points << "." << std::endl;
	return ;
}