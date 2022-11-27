#include<iostream>
#include<random>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int n, j, temp;
    cout<<"\nElements of randomly generated array :\n";
    srand(time(0));
    n=5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {   
        arr[i] = rand();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }

    for (int m = 0; m < n; m++)
    {
        for (int i = 0; i < n; i++)
        {
            j=i+1;
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nSorted: ";
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}