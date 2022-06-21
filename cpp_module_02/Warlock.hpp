/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:26:15 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 17:09:18 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "SpellBook.hpp"


class Warlock
{
private:
	std::string				_name;
	std::string				_title;
	SpellBook				_spellbook;

	Warlock() {}
	Warlock(Warlock const & x);
	Warlock &	operator=(Warlock const & x);// { (void)x; return (*this); }

public:
	Warlock(std::string name, std::string title) : _name(name), _title(title)
	{
		std::cout << this->_name << " : This looks like another boring day." << std::endl;
	}
	~Warlock()
	{
		std::cout << this->_name << ": My job here is done!" << std::endl;
	}

	std::string const &	getName() const { return (this->_name); }
	std::string const &	getTitle() const { return (this->_title); }

	void	setTitle(std::string const & title) { this->_title = title; }

	void	introduce() const
	{
		std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
	}

	void	learnSpell(ASpell* spell)
	{
		_spellbook.learnSpell(spell);
	}

	void	forgetSpell(std::string spell)
	{
		_spellbook.forgetSpell(spell);
	}

	void	launchSpell(std::string spell, ATarget const & target) const
	{
		ASpell*	temp = _spellbook.createSpell(spell);
		if (temp)
			temp->launch(target);
	}
};
