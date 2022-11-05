/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:48:02 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 15:35:47 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
private:
	std::vector<int>	_vec;
	// Constructor
	Span();

public:
	class OutOfRange : public std::exception {
	public:
		const char* what() const throw();
	};
	class TooSmall : public std::exception {
	public:
		const char* what() const throw();
	};
	// Constructors
	Span(const Span & copy);
	Span(const unsigned int & n);

	// Destructor
	~Span();

	// Getters
	const std::vector<int>&	getData(void) const;

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
	template <typename T>
	void	addManyNumbers(T begin, T end){
		if (static_cast<long long>(std::distance(begin, end)) > static_cast<long long>(_vec.capacity()))
			throw Span::OutOfRange();
		while (begin != end)
		{
			_vec.push_back(*begin);
			begin++;
		}
	}
	
	

	// Operator
	Span& operator=(const Span& assign);
};

#endif