/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:11:49 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/24 03:14:31 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    
    std::cout << "---------- Test 1 numbers ----------" << std::endl;
     try {
        Span span;
        span.addNumber(1);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "---------- Test 2 numbers ----------" << std::endl;
     try {
        Span span;
        span.addNumber(2);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "---------- Test 10 numbers ----------" << std::endl;
    try {
        Span span;
        span.addNumber(10);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "---------- Test 100 numbers ----------" << std::endl;
    try {
        Span span;
        span.addNumber(100);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "---------- Error test ----------" << std::endl;
    try {
        Span(5);
        Span span;
        span.addNumber(10);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}