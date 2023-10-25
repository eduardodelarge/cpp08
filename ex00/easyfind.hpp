/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:01:10 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/25 04:08:52 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>

template <typename T>
int easyfind(T& container, int value) {
    if (std::find(container.begin(), container.end(), value) != container.end())
            std::cout << "Value " << value << " found in container" <<      std::endl;
    else
        std::cout << "Value " << value << " not found in container" << std::endl;
    return 0;
}

#endif