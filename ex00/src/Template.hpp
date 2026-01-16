/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:04:03 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/16 11:11:33 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T>

void swap(T& a, T& b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
    return ;
}
template <typename T>

const T &min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    return (b);
}
template <typename T>

const T &max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif