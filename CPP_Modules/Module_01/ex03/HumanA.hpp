/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:27:06 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 20:22:35 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack( void );

	Weapon *getWeapon() const;
	void setWeapon(Weapon &weapon);
};

#endif
