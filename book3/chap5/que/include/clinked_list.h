#ifndef CLINKED_LIST_H
#define CLINKED_LIST_H

#include <iostream>
#include <string>
using std::cout;
using std::string;

template<typename T>
struct CNode
{
    T elem;
    CNode* next;
};



template <typename T>
class CList{

    public:

        CList();
        ~CList();

        bool empty() const;
        const T& front() const;
        const T& back() const;
        int size() const;
        void display() const;

        void advance();
        void add(const T& e);
        void remove();

    private:
        CNode<T> *cursor;
        int n;

};



#endif