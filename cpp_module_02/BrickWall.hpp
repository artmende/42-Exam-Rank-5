/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:56:55 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:57:27 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
	BrickWall(BrickWall const & x) : ATarget(x._type) {}
	~BrickWall() {}

	BrickWall &	operator=(BrickWall const & x)
	{
		this->_type = x._type;
		return (*this);
	}

	ATarget*	clone() const
	{
		return (new BrickWall());
	}
};
