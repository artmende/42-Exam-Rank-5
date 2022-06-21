/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:55:46 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:56:20 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph() : ASpell("Polymorph", "turned into a critter") {}
	Polymorph(Polymorph const & x) : ASpell(x._name, x._effects) {}
	~Polymorph() {}

	Polymorph &	operator=(Polymorph const & x)
	{
		this->_name = x._name;
		this->_effects = x._effects;
		return (*this);
	}

	ASpell*	clone() const
	{
		return (new Polymorph());
	}
};
