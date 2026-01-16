/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:38:52 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/16 13:38:54 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <string>

int main()
{
    std::cout << "--- TEST 1: Simple Int Array ---" << std::endl;
    try
    {
        Array<int> numbers(5);
        // Rellenar
        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i * 10;
        
        // Imprimir
        std::cout << "Size: " << numbers.size() << std::endl;
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n--- TEST 2: Deep Copy Check ---" << std::endl;
    try
    {
        Array<int> original(3);
        original[0] = 1; 
        original[1] = 2; 
        original[2] = 3;

        Array<int> copy = original; // Constructor de copia

        std::cout << "Original[0] antes: " << original[0] << std::endl;
        std::cout << "Copy[0] antes    : " << copy[0] << std::endl;

        copy[0] = 999; // Modificamos SOLO la copia

        std::cout << "-> Modificando copia..." << std::endl;
        std::cout << "Original[0] despues: " << original[0] << " (Debe ser 1)" << std::endl;
        std::cout << "Copy[0] despues    : " << copy[0] << " (Debe ser 999)" << std::endl;
        
        if (original[0] != copy[0])
            std::cout << "✅ SUCCESS: Deep Copy working!" << std::endl;
        else
            std::cout << "❌ FAILURE: Shallow Copy detected!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n--- TEST 3: Out of Bounds Exception ---" << std::endl;
    try
    {
        Array<int> arr(5);
        std::cout << "Intentando acceder a indice 10..." << std::endl;
        arr[10] = 42; // Esto debe fallar
        std::cout << "❌ FAILURE: Excepcion no lanzada." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "✅ SUCCESS: Excepcion atrapada correctamente." << std::endl;
    }

    std::cout << "\n--- TEST 4: Empty Array ---" << std::endl;
    try {
        Array<int> empty;
        std::cout << "Size of empty: " << empty.size() << std::endl;
        std::cout << "Intentando acceder a empty[0]..." << std::endl;
        empty[0] = 1;
    }
    catch(const std::exception& e) {
        std::cout << "✅ SUCCESS: Excepcion en array vacio correcta." << std::endl;
    }

    return 0;
}