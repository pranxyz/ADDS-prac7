#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include "Sort.cpp"
#include "BubbleSort.cpp"
#include "QuickSort.cpp"
#include "RecursiveBinarySearch.cpp"
using namespace std;

int main()
{
   vector<int> inputs;
   string entries;
   getline(cin, entries);
   istringstream iss(entries);
   int val;
   while (iss >> val)
   {
       inputs.push_back(val);
   }

   //BubbleSort myb; Bubble sort ready to use, but not called
   //myb.sort(inputs);
   QuickSort myq;
   myq.sort(inputs, 0, inputs.size() - 1);

   RecursiveBinarySearch mybin;
   int found = mybin.search(inputs, 0, 0, inputs.size() - 1);
   if (found >= 0)
   {
       cout << "false";
   }
   else
   {
       cout << "true";
   }

   for(unsigned int i = 0; i < inputs.size(); i++)
   {
       cout << " " << inputs.at(i);
   }
}
