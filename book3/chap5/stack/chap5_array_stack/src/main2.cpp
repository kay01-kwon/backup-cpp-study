#include "stack_class.cpp"
#include "stack_class.h"
#include <vector>

using std::vector;

/**
 * Reversing a Vector Using a Stack
 */

template <class E>
void reverse(vector<E>& V)
{
    ArrayStack<E> S(V.size());
    for(int i = 0; i < V.size(); i++)
        S.push(V[i]);
    for(int i = 0; i < V.size(); i++)
    {
        V[i] = S.top();
        S.pop();
    }
}

int main()
{
    vector<string> A;
    A.push_back("Jack");
    A.push_back("Kate");
    A.push_back("Hurley");
    A.push_back("Jin");
    A.push_back("Hurley");
    A.push_back("Micheal");

    for(int i = 0; i < A.size(); i++)
        cout<<A[i]<<" ";

    cout<<"\n";
    reverse(A);

    for(int i = 0; i < A.size(); i++)
        cout<<A[i]<<" ";
    
    cout<<"\n";

    return EXIT_SUCCESS;
    
}