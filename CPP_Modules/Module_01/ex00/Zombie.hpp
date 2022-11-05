/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:10:43 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 18:47:47 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
	
public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
	void	randomChump( std::string name );
	Zombie*	newZombie( std::string name );
	
	void setName(const std::string &name_);
	
};

#endif
