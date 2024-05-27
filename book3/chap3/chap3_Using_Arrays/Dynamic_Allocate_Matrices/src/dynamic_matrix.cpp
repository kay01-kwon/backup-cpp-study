#include <iostream>

int main()
{
    int n,m;
    std::cout<<"Input the number of rows: ";
    std::cin>>n;
    std::cout<<"Input the number of columns: ";
    std::cin>>m;

    int** M = new int*[n];
    for(int i = 0; i < n; i++)
        M[i] = new int[m];

    std::cout<<"Input the matrix components: \n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin>>M[i][j];
    
    for(int i = 0; i < n;i++)
    {    
        for(int j = 0; j < m; j++)
        {
            std::cout<<*(*(M+i)+j)<<" ";
        }
        std::cout<<"\n";
    }


    for(int i = 0; i < n; i++)
        delete[] M[i];
    delete[] M;

    return EXIT_SUCCESS;
}