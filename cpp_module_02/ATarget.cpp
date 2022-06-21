/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:20:46 by artmende          #+#    #+#             */
/*   Updated: 2022/06/21 16:19:51 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

	void	ATarget::getHitBySpell(ASpell const & spell) const
	{
		//<TYPE> has been <EFFECTS>!
		std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
	}
