#include <vector>
#include "BubbleSort.h"
#include <iostream>
using namespace std;

BubbleSort::BubbleSort(vector<int> array)
{
   storage=array;
};

void BubbleSort::sort()
{
    int i, j;
    int temp = 0;
    for (i = 0; i < storage.size()-1; i++)
    {
        for (j = 0; j < storage.size()-i-1; j++)
        {
            if (storage[j] > storage[j+1])
            int temp = storage[j];
            storage[j] = storage[j+1];
            storage[j+1] = temp;
            }
            }
            }

void BubbleSort::print()
{
    for(int i = 0; i < storage.size(); i++)
    cout<<storage[i]<<" ";
    cout<<endl;
    };

vector<int> BubbleSort::getList()
{
return storage;
};
void BubbleSort::setList(vector<int> list)
{
storage = list;
}

