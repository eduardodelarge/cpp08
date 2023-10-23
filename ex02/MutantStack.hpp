/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 05:22:41 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/21 23:11:50 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    // Define an iterator type for MutantStack
    typedef typename std::stack<T>::container_type::iterator iterator;

    // Constructors and destructor
    MutantStack(void);  // Default constructor
    MutantStack(const MutantStack &to_copy);  // Copy constructor
    MutantStack &operator=(const MutantStack &to_copy);  // Assignment operator
    ~MutantStack(void);  // Destructor

    // Functions to get iterators
    iterator begin(void);  // Returns an iterator pointing to the beginning
    iterator end(void);    // Returns an iterator pointing to the end
};

template <typename T>
MutantStack<T>::MutantStack(void) {
   return;  // Default constructor
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &to_copy) {
    *this = to_copy;  // Copy constructor (deep copy)
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &to_copy) {
    std::stack<int>::operator=(to_copy);  // Invoke the base class's assignment operator
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {
    return;  // Destructor
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();  // Return an iterator to the beginning of the underlying container
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();  // Return an iterator to the end of the underlying container
}

#endif 
