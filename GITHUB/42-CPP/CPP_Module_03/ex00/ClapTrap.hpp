#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

	private:
		std::string	const	_name;
		unsigned int		_HitPoints;
		unsigned int		_EnergyPoints;
		unsigned int		_AttackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(ClapTrap &copy); 
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
};

#endif