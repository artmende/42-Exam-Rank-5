/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:54:11 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:54:39 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	Fireball() : ASpell("Fireball", "burnt to a crisp") {}
	Fireball(Fireball const & x) : ASpell(x._name, x._effects) {}
	~Fireball() {}

	Fireball &	operator=(Fireball const & x)
	{
		this->_name = x._name;
		this->_effects = x._effects;
		return (*this);
	}

	ASpell*	clone() const
	{
		return (new Fireball());
	}
};
