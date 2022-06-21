/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:26:15 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:48:09 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class Warlock
{
private:
	std::string				_name;
	std::string				_title;
	std::vector<ASpell*>	_known;

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
		for(size_t i = 0; i < _known.size(); ++i)
		{
			delete (_known[i]);
		}
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
		if (spell == NULL)
			return ;
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getName() == spell->getName())
			{
				delete spell;
				return ;
			}
		}
		_known.push_back(spell);
	}

	void	forgetSpell(std::string spell)
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getName() == spell)
			{
				delete (_known[i]);
				_known[i] = NULL;
			}
		}
	}

	void	launchSpell(std::string spell, ATarget const & target) const
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getName() == spell)
			{
				_known[i]->launch(target);
				return ;
			}
		}
	}
};
