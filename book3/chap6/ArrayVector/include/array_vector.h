#ifndef ARRAY_VECTOR_H
#define ARRAY_VECTOR_H
#include <iostream>
#include <string>
using std::string;

template <typename T>
class ArrayVector{

    public:

        ArrayVector();

        // Copy constructor

        // Assignment operator

        // Destructor

        int size() const;
        bool empty() const;
        
        T& operator[](int i);
        T& at(int i);

        void erase(int i);
        void insert(int i, const T& e);
        void reserve(int N);

    private:

        int capacity;
        int n;
        T* A;


};

#endif