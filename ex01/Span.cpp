/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:11:51 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/25 05:26:03 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n)
{
    maxInt = n;
    std::srand(static_cast<unsigned int>(std::time(0)));
}

Span::Span(const Span &other)
{
    *this = other;
}

Span::~Span() {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->maxInt = other.maxInt;
        this->numbers = other.numbers;
    }
    return *this;
}

void Span::addNumber(unsigned int n)
{
    if (n > maxInt)
    {
        throw std::runtime_error("Cannot add more numbers");
    }
    numbers.push_back(n);
}

void Span::addManyNumber(unsigned int n)
{
    if (n > maxInt)
        throw std::runtime_error("Number of numbers to add is greater than max size");
    else
    {
        std::vector<int> newNumbers(n);
        for (unsigned int i = 0; i < n; ++i)
        {
            newNumbers[i] = std::rand() % 10000;
        }
        numbers.insert(numbers.end(), newNumbers.begin(), newNumbers.end());
        std::cout << "Numbers added: ";
        for (unsigned int i = 0; i < n; ++i)
        {
            std::cout << "[" << numbers[i] << "]"
                      << "";
        }
        std::cout << std::endl;
    }
}

int Span::shortestSpan()
{
    if (numbers.size() < 2)
    {
        throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    std::sort(numbers.begin(), numbers.end());
    int minSpan = numbers[1] - numbers[0];
    for (size_t i = 2; i < numbers.size(); ++i)
    {
        int span = numbers[i] - numbers[i - 1];
        if (span < minSpan)
        {
            minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
    {
        throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    std::sort(numbers.begin(), numbers.end());
    return numbers.back() - numbers.front();
}