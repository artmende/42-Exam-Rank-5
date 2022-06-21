/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:57:58 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 17:12:44 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
private:
	std::vector<ASpell*>	_known;

	SpellBook(SpellBook const & x);
	SpellBook &	operator=(SpellBook const & x);
public:
	SpellBook() {}
	~SpellBook()
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			delete (_known[i]);
		}
	}

	void	learnSpell(ASpell* spell)
	{
		if (spell == NULL)
			return ;
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getName() == spell->getName())
			{
				return ;
			}
		}
		_known.push_back(spell->clone());
	}

	void	forgetSpell(std::string const & spell)
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

	ASpell*	createSpell(std::string const & spell) const
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getName() == spell)
			{
				return (_known[i]->clone());
			}
		}
		return (NULL);
	}



/*
* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.
*/

};
