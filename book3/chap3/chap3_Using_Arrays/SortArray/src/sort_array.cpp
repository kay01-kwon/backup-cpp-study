#include <iostream>
#include <string>

void insertionSort(char* A, int n);

int main()
{
    char a[]={'B','C','D','A','E','H','G','F'};
    std::cout<<"Before insertion sort: ";
    std::cout<<a<<std::endl;
    insertionSort(a,8);
    std::cout<<"After insertion sort: ";
    std::cout<<a<<std::endl;

    return EXIT_SUCCESS;
}

void insertionSort(char* A, int n)
{
    for(int i = 1; i < n; i++)
    {
        char cur = A[i];
        int j = i - 1;
        while (j>=0 && A[j]>cur)
        {
            /* code */
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = cur;
    }
}