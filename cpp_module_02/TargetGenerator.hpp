/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:10:36 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 17:18:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::vector<ATarget*>	_known;

	TargetGenerator(TargetGenerator const & x);
	TargetGenerator &	operator=(TargetGenerator const & x);
public:
	TargetGenerator() {}

	~TargetGenerator() {}

	void	learnTargetType(ATarget* target)
	{
		if (target == NULL)
			return ;
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getType() == target->getType())
			{
				return ;
			}
		}
		_known.push_back(target->clone());
	}

	void	forgetTargetType(std::string const & target)
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getType() == target)
			{
				delete (_known[i]);
				_known[i] = NULL;
			}
		}
	}

	ATarget*	createTarget(std::string const & target)
	{
		for(size_t i = 0; i < _known.size(); ++i)
		{
			if (_known[i] && _known[i]->getType() == target)
			{
				return (_known[i]->clone());
			}
		}
		return (NULL);
	}

/*
* void	learnTargetType(ATarget* target), teaches a target to the generator

* void	forgetTargetType(std::string const & target), that makes the generator forget a
  target type if it's known

* ATarget*	createTarget(std::string const &), that creates a target of the
  specified type
*/


};
