/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:11:53 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/24 02:57:40 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <ctime>

class Span {
    
    private:
        unsigned int maxInt;
        std::vector<int> numbers;
    
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        ~Span();
        
        Span& operator=(const Span& other);
        
        void addNumber(unsigned int n);
        int shortestSpan();
        int longestSpan();
};

#endif