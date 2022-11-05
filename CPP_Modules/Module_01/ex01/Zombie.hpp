/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:37:19 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 19:09:50 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie*	zombieHorde( int N, std::string name );
	void	announce( void );
	Zombie();
	Zombie( std::string name );
	~Zombie();

	std::string name() const;
	void setName(const std::string &name);
};

#endif
