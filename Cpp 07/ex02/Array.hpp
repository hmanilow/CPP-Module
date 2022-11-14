#ifndef CPP_MODULE_ARRAY_HPP
#define CPP_MODULE_ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
class Array
{
    private:
        T *array;
        unsigned int len;
    public:
        Array();
        ~Array()
        {
            if(array)
                delete [] array;
        };

        Array(Array &src) : array(new T[src.len]),len(src.len)
        {
	        for(unsigned int i = 0; i < src.len; i++)
		        array[i] = src.array[i];
        }

        Array(unsigned int n)
        {
            len = n;
            array = new T[n]();
        };

        Array &operator=(Array const &src)
        {
            array = src.array;
            len = src.len;
            return (*this);
        }; 

        T &operator[](unsigned int index)
        {
            if(index < 0 || index > len)
                throw OutOfRange();
            return(array[index]);
        };

        unsigned int size()
        {
            return(len);
        }
        
        class OutOfRange : public std::exception
        {
            public :
				virtual const char* what() const throw()
				{
					return ("Index out of range");
                }
        };
};


#endif
