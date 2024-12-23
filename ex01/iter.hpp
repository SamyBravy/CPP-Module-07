/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:25:33 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 23:39:08 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>
void add42(T &x)
{
    x += 42;
}

#endif
