#ifndef CLL_QUEUE_H
#define CLL_QUEUE_H

#include <iostream>
#include <string>
#include "clinked_list.cpp"


template <typename T>
class CllQueue{

    public:

        // Constructor
        CllQueue();
        
        // Accessors
        int size() const;
        bool empty() const;
        const T& front() const;
        void display() const;
        
        void enqueue(const T& e);
        void dequeue();

    private:
        CList<T> C;
        int n;
};


#endif