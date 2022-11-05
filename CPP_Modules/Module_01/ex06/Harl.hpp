/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:08:25 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/26 17:47:58 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	static const int funcs = 4;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Harl::*message[funcs])( void );
	static const std::string harl[funcs];
public:
	Harl();
	~Harl();
	void    complain( std::string level );
};

#endif
