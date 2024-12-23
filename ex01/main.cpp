/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:24:19 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 23:39:51 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, add42);
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;

    std::string array2[] = {"Ciao", "Effi", "Tiago"};
    iter(array2, 3, add42);
    for (int i = 0; i < 3; i++)
        std::cout << array2[i] << std::endl;
    
    return 0;
}
