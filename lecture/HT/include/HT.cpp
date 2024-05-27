#include "HT.h"

template <typename T>
Node<T>::Node(string key, T value){
    this->key = key;
    this->value = value;
    this->next = nullptr;
}

template <typename T>
void HashTable<T>::printTable(){
    for(int i = 0; i < SIZE; i++){
        cout<< i << " : "<<endl;
        if(dataMap[i]){
            Node<T>* temp = dataMap[i];
            while (temp)
            {
                cout<<"     {"<<temp->key<<", "<<temp->value<<"}"<<endl;
                temp = temp->next;
            }
            
        }
    }
}

template <typename T>
int HashTable<T>::hash(string key){
    int hash = 0;
    for(int i = 0; i < key.length(); i++){
        int asciiValue = int(key[i]);
        hash = (hash + asciiValue*23)%SIZE;
    }
    return hash;
}

template <typename T>
void HashTable<T>::set(string key, T value){
    int index = hash(key);
    Node<T>* newNode = new Node<T>(key, value);
    if(dataMap[index] == nullptr){
        dataMap[index] = newNode;
    }else{
        Node<T>* temp = dataMap[index];
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <typename T>
int HashTable<T>::get(string key){
    int index = hash(key);
    Node<T>* temp = dataMap[index];
    while (temp!=nullptr)
    {
        if(temp->key == key)
            return temp->value;
        temp = temp->next;
    }
    return 0;
    
}

template <typename T>
vector<string> HashTable<T>::keys(){
    vector<string> allKeys;
    for(int i = 0 ; i < SIZE; i++)
    {
        Node<T>* temp = dataMap[i];
        while (temp != nullptr)
        {
            allKeys.push_back(temp->key);
            temp = temp->next;
        }
    }
    return allKeys;
}