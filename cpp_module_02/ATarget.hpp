/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:20:58 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:28:19 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
	std::string	_type;
public:
	ATarget() {}
	ATarget(std::string type) : _type(type) {}
	ATarget(ATarget const & x) : _type(x._type) {}
	virtual ~ATarget() {}

	ATarget &	operator=(ATarget const & x)
	{
		this->_type = x._type;
		return (*this);
	}

	std::string const &	getType() const { return (this->_type); }

	virtual ATarget*	clone() const = 0;

	void	getHitBySpell(ASpell const & spell) const;
};
