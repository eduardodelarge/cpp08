/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:01:13 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/23 09:45:48 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {

    std::vector<int> v;
    std::list<int> l;
    
    for (int i = 0; i < 10; ++i) {
        v.push_back(i); // Create a vector with 0-9
        l.push_back(i); // Create a list with 0-9
    }
    
    try { // Try to find 5 and 21 in vector and list
        std::cout << easyfind(v, 5) << std::endl;
        std::cout << easyfind(v, 6) << std::endl;
        std::cout << easyfind(v, 21) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try { // Try to find 5 and 21 in vector and list
        std::cout << easyfind(l, 1) << std::endl;
        std::cout << easyfind(v, 9) << std::endl;
        std::cout << easyfind(l, 21) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}