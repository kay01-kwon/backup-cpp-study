#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    int n, m;
    cout<<"Input the number of rows: ";
    cin>>n;
    cout<<"Input the number of columns: ";
    cin>>m;

    vector< vector<int> > M(n,vector<int>(m));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin>>M[i][j];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }




    return EXIT_SUCCESS;
}