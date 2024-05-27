#ifndef NODE_LIST_H
#define NODE_LIST_H
#include <iostream>
#include <string>
using std::cout;
using std::string;

template<typename T>
class NodeList{

    private:
        struct Node
        {
            /* data */
            T elem;
            Node* prev;
            Node* next;
        };

    public:

        class Iterator{
            public:
                T& operator*();
                bool operator==(const Iterator& p) const;
                bool operator!=(const Iterator& p) const;
                Iterator& operator++();
                Iterator& operator--();

                friend class NodeList;

            private:
                Node* v;
                Iterator(Node* u);        
        };

    public:

        NodeList();

        ~NodeList();

        int size() const;
        bool empty() const;
        
        Iterator begin() const;
        Iterator end() const;

        void insert(const Iterator& p, const T& e);
        void erase(const Iterator& p);

        void insert_front(const T& e);
        void insert_back(const T& e);
        void erase_front();
        void erase_back();

    private:

        int n;
        Node* header;
        Node* trailer;

};


#endif