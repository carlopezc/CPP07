/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:03:43 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/16 12:12:35 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template <typename P>

void printElement(P& p)
{
    std::cout << p << std::endl;
}

int main(void)
{
    std::cout << "Prueba con strings " << std::endl;
    std::string nombres[] = {"Aitor", "Ayoub", "Lucas", "Xenia", "Jon"};
    iter(nombres, 5, printElement<std::string>);

    std::cout << "Prueba con ints " << std::endl;
    int edades[] = {2, 5, 13, 98, 2};
    iter(edades, 5, printElement<int>);
}