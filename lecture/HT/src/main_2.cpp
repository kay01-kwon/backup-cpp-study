#include "HT.cpp"

int main(){
    HashTable<int>* myHashTable = new HashTable<int>();

    myHashTable->set("nails", 100);
    myHashTable->set("tile", 50);
    myHashTable->set("lumber", 80);

    myHashTable->set("bolts", 200);
    myHashTable->set("screws", 140);

    myHashTable->printTable();

    return EXIT_SUCCESS;
}