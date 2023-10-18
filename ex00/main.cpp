/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:01:13 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/18 00:23:19 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {

    std::vector<int> v;
    std::list<int> l;
    
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
        l.push_back(i);
    }
    
    try {
        std::cout << easyfind(v, 5) << std::endl;
        std::cout << easyfind(l, 5) << std::endl;
        std::cout << easyfind(v, 42) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}