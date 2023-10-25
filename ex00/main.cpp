/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:01:13 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/25 04:08:19 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    // Test with vector
    std::vector<int> intVector;
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);
    int valueToFind = 3;
    easyfind(intVector, valueToFind);

    // Test with list
    std::list<int> intList;
    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);
    intList.push_back(40);
    intList.push_back(50);
    valueToFind = 25;
    easyfind(intList, valueToFind);

    // Test with set (not supported by easyfind, should return false)
    std::set<int> intSet;
    intSet.insert(10);
    intSet.insert(20);
    intSet.insert(30);
    intSet.insert(40);
    intSet.insert(50);
    valueToFind = 30;
    easyfind(intSet, valueToFind);

    return 0;
}