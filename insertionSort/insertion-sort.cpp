#include<iostream>
#include<random>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int n, j, temp;
    cout<<"\nEnter the length of array to be randomly generated :\n";
    srand(time(0));
    // cin>>n;
    n=5;
    int arr[5];
    for (int i = 0; i < n; i++)
    {   
        arr[i] = rand();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int m = 0; m < n; m++)
    {
        for (int i = 0; i < n; i++)
        {
            j=j+1;
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<"\nSorted: ";
}