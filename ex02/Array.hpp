/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:41:08 by samuele           #+#    #+#             */
/*   Updated: 2024/12/24 18:03:33 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _n;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array();
        Array &operator=(const Array &copy);

        unsigned int size() const;

        T &operator[](unsigned int index);
        
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };     
};

# include "Array.tpp"

#endif
