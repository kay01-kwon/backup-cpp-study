#include "array_vector.cpp"
using std::cout;


int main()
{
    ArrayVector<string> A;

    cout<<"Size of the object A: ";
    cout<<A.size()<<"\n";

    A.reserve(10);

    A.insert(0,"A");
    A.insert(1,"C");
    A.insert(2,"D");
    A.insert(3,"E");
    A.insert(4,"F");
    A.insert(5,"G");

    A.insert(1,"B");

    for(int i = 0; i < A.size(); i++)
    {
        cout<<"comp ("<<i<<") : ";
        cout<<A.at(i)<<"\n";
    }    

}