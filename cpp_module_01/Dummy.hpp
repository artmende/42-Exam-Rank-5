/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:30:14 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:51:08 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy() : ATarget("Target Practice Dummy") {}
	Dummy(Dummy const & x) : ATarget(x._type) {}
	~Dummy() {}

	Dummy &	operator=(Dummy const & x)
	{
		this->_type = x._type;
		return (*this);
	}

	ATarget*	clone() const
	{
		return (new Dummy());
	}
};
