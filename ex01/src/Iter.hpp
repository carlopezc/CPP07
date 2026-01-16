/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:44:15 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/16 12:05:58 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename F>

void iter(T* array, const size_t len, F func)
{
    size_t i;

    i = 0;
    if (!array)
        return ;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
    return ;
}

#endif