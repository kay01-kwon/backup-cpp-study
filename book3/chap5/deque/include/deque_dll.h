#ifndef DEQUE_DLL_H
#define DEQUE_DLL_h

#include "doubly_linked_list.cpp"

template <typename T>
class DllDeque{

    public:

        // Constructor
        DllDeque();

        // Accessors
        int size() const;
        bool empty() const;
        const T& front() const;
        const T& back() const;
        void display() const;

        void insert_front(const T& e);
        void insert_back(const T& e);

        void remove_front();
        void remove_back();

        private:
            DLinkedList<T> D;
            int n;

};
#endif