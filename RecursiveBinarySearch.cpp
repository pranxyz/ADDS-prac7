#include <vector>
#include "RecursiveBinarySearch.h"
using namespace std;


       int RecursiveBinarySearch::binarySearch(vector<int> array, int start, int end, int target)
       {
           if(start > end)
               return -1;

           int mid = (start + end)>>1;
           if (target == array[mid])
               return mid;

           else if (target < array[mid])
               return binarySearch(array, start, mid - 1, target);

           else
               return binarySearch(array, start + 1, end, target);
           }

           int RecursiveBinarySearch::search(vector<int> array, int target)
           {
               return binarySearch(array, 0, array.size() - 1, target);
           }
