/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:30 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:34:14 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
	Fwoosh(Fwoosh const & x) : ASpell(x._name, x._effects) {}
	~Fwoosh() {}

	Fwoosh &	operator=(Fwoosh const & x)
	{
		this->_name = x._name;
		this->_effects = x._effects;
		return (*this);
	}

	ASpell*	clone() const
	{
		return (new Fwoosh());
	}
};
