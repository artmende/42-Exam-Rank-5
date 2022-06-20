/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:26:15 by artmende          #+#    #+#             */
/*   Updated: 2022/06/20 14:43:56 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
private:
	std::string	_name;
	std::string	_title;

	Warlock() {}
	Warlock(Warlock const & x) { (void)x; }
	Warlock &	operator=(Warlock const & x);// { (void)x; return (*this); }



public:
	Warlock(std::string name, std::string title) : _name(name), _title(title)
	{
		std::cout << this->_name << " : This looks like another boring day." << std::endl;
	}
	~Warlock()
	{
		std::cout << this->_name << ": My job here is done!" << std::endl;
	}

	std::string const &	getName() const {}
	std::string const &	getTitle() const {}

	void	setTitle(std::string const & title) {}
};

#endif
