/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:14:11 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:27:40 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string	_name;
	std::string	_effects;
public:
	ASpell() {}
	ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}
	ASpell(ASpell const & x) : _name(x._name), _effects(x._effects) {}
	virtual ~ASpell() {}

	ASpell &	operator=(ASpell const & x)
	{
		this->_name = x._name;
		this->_effects = x._effects;
		return (*this);
	}

	std::string	getName() const { return (this->_name); }
	std::string	getEffects() const { return (this->_effects); }

	virtual ASpell*	clone() const = 0;

	void	launch(ATarget const & target) const;
};
