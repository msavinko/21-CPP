/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:38 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 17:58:18 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template < typename T >
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
	
	iterator	end(void)
	{
		return this->c.end();
	}

	iterator	begin(void)
	{
		return this->c.begin();
	}

	const_iterator	cbegin(void)
	{
		return this->c.cbegin();
	}

	const_iterator cend(void)
	{
		return this->c.cend();
	}

	reverse_iterator rbegin(void)
	{
		return this->c.rbegin();
	}

	reverse_iterator rend(void)
	{
		return this->c.rend();
	}

	const_reverse_iterator	crbegin(void)
	{
		return this->c.crbegin();
	}

	const_reverse_iterator	crend(void)
	{
		return this->c.crend();
	}

	// Constructors
	MutantStack() {}
	MutantStack(const MutantStack& copy)
	{
		*this = copy;
	}

	// Destructor
	~MutantStack() {}

	// Operators
	MutantStack& operator=(const MutantStack& assign)
	{
		if (this != &assign)
			std::stack<T>::operator=(assign);
		return (*this);
	}
};

#endif
