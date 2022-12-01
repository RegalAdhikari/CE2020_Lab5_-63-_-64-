// create a quicksort using partition in c++

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// partition
int partition(vector<int> &v, int low, int high)
{
  int pivot = v[low];
  int i = low + 1;
  int j = high;
  while (i <= j)
  {
    while (i <= j && v[i] <= pivot)
    {
      i++;
    }
    while (i <= j && v[j] > pivot)
    {
      j--;
    }
    if (i < j)
    {
      swap(v[i], v[j]);
    }
  }
  swap(v[low], v[j]);
  return j;
}

// quicksort
void quicksort(vector<int> &v, int low, int high)
{
  if (low < high)
  {
    int pivot = partition(v, low, high);
    quicksort(v, low, pivot - 1);
    quicksort(v, pivot + 1, high);
  }
}

// print array
void printArray(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v;
  // generate random numbers
  // log the time to run the algorithm for 10 times
  for (int c = 0; c < 10; c++)
  {
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
      v.push_back(rand() % 1000);
    }
    cout << "********************" << endl;
    cout << "Iteration " << c + 1 << endl;
    // printArray(v);
    double time1 = clock();
    quicksort(v, 0, v.size() - 1);
    double time2 = clock();
    // cout << "After sorting: ";
    // printArray(v);
    cout << "Length of array: " << v.size() << endl;
    cout << "Time taken: " << (double)((time2 - time1) / (CLOCKS_PER_SEC)) * 1000 << " ms" << endl;
  }
  return 0;
}
