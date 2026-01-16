/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:02:43 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/16 13:40:48 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private :
        
        T* _data;
        unsigned int _size;

    public :
        Array() : _data(NULL), _size(0) {}
        Array(unsigned int n) : _size(n)
        {
            if (n > 0)
                this->_data = new T[n]();
            else
                this->_data = NULL;
        }
        ~Array()
        {
            if (this->_data)
                delete[] this->_data;
        }
        Array(const Array& other) : _size(other._size)
        {
            if (this->_size > 0)
                this->_data = new T[this->_size]();
            else
                this->_data = NULL;
            unsigned int i = 0;
            while (i < this->_size)
            {
               this->_data[i] = other._data[i];
               i++;
            }
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->_data)
                    delete [] this->_data;
           
                this->_size = other._size;
                if (this->_size > 0)
                    this->_data = new T[this->_size]();
                else
                    this->_data = NULL;
                int i = 0;
                while (i < this->_size)
                {
                    this->_data[i] = other._data[i];
                    i++;
                }
           
            }
            return (*this);
        }
        unsigned int size() const
        {
            return (this->_size);
        }
        T& operator[](unsigned int i)
        {
            if (i >= this->_size)
                throw std::exception();
            return (this->_data[i]);
        }
        const T& operator[](unsigned int i) const
        {
            if (i >= this->_size)
                throw std::exception();
            return (this->_data[i]);
        }   
};

#endif