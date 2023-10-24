/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:26:01 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/24 03:57:01 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
    
    MutantStack<int> mstack;

    // Filling the stack with data
    std::cout << "Pushing elements 5,4,3,2 and 1 to the stack.." << std::endl;
    mstack.push(5);
    mstack.push(4);
    mstack.push(3);
    mstack.push(2);
    mstack.push(1);

    // Printing the stack
    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Popping the top element.." << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "Iterating through the stack.." << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "Comparing mutant stack with list output: " << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    
    std::list<int> list(mstack.begin(), mstack.end());
    std::cout << "Top element: " << list.back() << std::endl;
    std::cout << "Size: " << list.size() << std::endl;
    
    return 0;
}