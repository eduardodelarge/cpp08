/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:01:10 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/18 00:21:41 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
int easyfind(const T& container, int value) {
    int index = 0;
    typename T::const_iterator it = container.begin();
    while (it != container.end()) {
        if (*it == value) {
            return index; // Found the value, return its index
        }
        ++it;
        ++index;
    }

    throw std::runtime_error("Value not found"); // Value not found, throw an exception
}

#endif