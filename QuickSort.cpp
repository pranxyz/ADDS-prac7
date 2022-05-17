#include <vector>
#include "QuickSort.h"
#include <iostream>
using namespace std;


QuickSort::QuickSort(vector<int> array)
{
   storage=array;
       }

int QuickSort::partition (int start, int end)
       {
       int pivot;
       if(start + 3 <= end)
           pivot = storage[start + 3];
       else
           pivot = storage[end];

       int i = (start - 1);

       for (int j = start; j <= end - 1; j++)
       {
       if (storage[j] < pivot)
       {
       i++;
       int temp = storage[i];
                   storage[i] = storage[j];
                   storage[j] = temp;
       }
       }
       int temp = storage[i+1];
           storage[i+1] = storage[end];
           storage[end] = temp;
       return (i + 1);
       }
void QuickSort::quickSort(int start, int end)
       {
       if (start < end)
       {
       int part = partition(start, end);
       quickSort(start, part - 1);
       quickSort(start + 1, end);
       }
       }
       void QuickSort::sort()
       {
           quickSort(0, storage.size() - 1);
       }
   void QuickSort::print()
{
for(int i = 0; i < storage.size(); i++)
cout<<storage[i]<<" ";
cout<<endl;
}
vector<int> QuickSort::getList()
{
return storage;
}
void QuickSort::setList(vector<int> list)
{
storage = list;
}