#ifndef C_ARRAY_H
#define C_ARRAY_H
#include <iostream>
#include <string>
using std::cout;
using std::string;

template <class T>
class CArray{

    public:

        CArray();
        CArray(int M);
        
        int size() const;
        bool empty() const;
        T front() const;
        void display() const;

        void dequeue();
        void enqueue(const T& e);

        ~CArray();

    private:
        int f;
        int r;
        int n;
        int N;
        T* A;

};


#endif