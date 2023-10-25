/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:11:49 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/25 05:26:58 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    
    Span span(1);
    Span span1(3);
    Span span2(5);
    Span span3(10); 
    Span span4(100); 
    
    std::cout << "---------- Test 1 numbers ----------" << std::endl;
     try {
        span.addNumber(1);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "---------- Test 3 numbers ----------" << std::endl;
     try {
        span1.addManyNumber(3);
        int shortest = span1.shortestSpan();
        int longest = span1.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "---------- Test 5 numbers ----------" << std::endl;
     try {
        span2.addManyNumber(5);
        int shortest = span2.shortestSpan();
        int longest = span2.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "---------- Test 10 numbers ----------" << std::endl;
    try {
        span3.addManyNumber(10);
        int shortest = span3.shortestSpan();
        int longest = span3.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "---------- Test 100 numbers ----------" << std::endl;
    try {
        span4.addManyNumber(100);
        int shortest = span4.shortestSpan();
        int longest = span4.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "---------- Test 101 numbers (error test) ----------" << std::endl;
    try {
        span.addManyNumber(101);
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest sp: " << shortest << std::endl;
        std::cout << "Longest sp: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}