#ifndef HT_H
#define HT_H
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
class Node{
    public:
        string key;
        T value;
        Node<T>* next;
        Node<T>(string key, T value);
};

template <typename T>
class HashTable{
    private:
        static const int SIZE = 7;
        Node<T>* dataMap[SIZE];

    public:
        void printTable();

        int hash(string key);

        void set(string key, T value);

        int get(string key);

        vector<string> keys();
};


#endif