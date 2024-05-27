#include "node_list.cpp"

int main()
{
    int sum = 0;
    NodeList<int> DLL;
    DLL.insert_front(8);
    DLL.insert_back(4);
    DLL.insert_back(6);
    DLL.insert_front(5);
    DLL.insert_front(1);
    DLL.erase_back();

    cout<<DLL.size()<<"\n";

    typedef NodeList<int>::Iterator iter;
    for(iter it = DLL.begin(); it != DLL.end();++it)
        cout<<*it<<" ";
    cout<<"\n";

    for(iter it = DLL.begin(); it != DLL.end();++it)
    {
        sum += *it;
    }
    cout<<sum;
    cout<<"\n";

    


    return EXIT_SUCCESS;
}