#include<iostream>
#include<random>
#include<cstdlib>
#include<time.h>
#include<algorithm>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int n, j, temp;
    cout<<"\nElements of randomly generated array :\n";
    srand(time(0));
    n=100;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {   
        arr[i] = rand();
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    auto start = high_resolution_clock::now(); //Sorting starts here
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
    auto stop = high_resolution_clock::now();
    cout<<"\nSorted: ";
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
}