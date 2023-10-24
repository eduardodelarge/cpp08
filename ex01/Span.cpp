/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:11:51 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/24 03:27:49 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n) {
    maxInt = n;
    std::cout << "Max int: " << maxInt << std::endl;
}

Span::Span(const Span& other) {
    *this = other;
}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        this->maxInt = other.maxInt;
        this->numbers = other.numbers;
    }
    return *this;
}

void Span::addNumber(unsigned int n) {
    if (n > maxInt) {
        throw std::runtime_error("AddNumber value is bigger than max size of vector");
    }
    std::srand(std::time(NULL));
    for (unsigned int i = 0; i < n; ++i) {
    int num = std::rand() % 10000;
    numbers.push_back(num);
    }
    std::cout << "Numbers added: ";
    for (unsigned int i = 0; i < n; ++i) {
        std::cout << "[" << numbers[i] << "]" << "";
    }
    std::cout << std::endl;
}

int Span::shortestSpan() {
    if (numbers.size() < 2) {
        throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    std::sort(numbers.begin(), numbers.end());
    int minSpan = numbers[1] - numbers[0];
    for (size_t i = 2; i < numbers.size(); ++i) {
        int span = numbers[i] - numbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() < 2) {
        throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    std::sort(numbers.begin(), numbers.end());
    return numbers.back() - numbers.front();
}