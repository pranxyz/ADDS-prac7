#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;


int main() {

   std::string input;
   vector<int> array;
   cout<<"Input: ";
   getline(cin, input);
   std::istringstream iss(input);
   int data;
   while(iss >> data)
   {

   array.push_back(data);
   }

   // For Quick Sort
   Sort *qs=new QuickSort(array);
   RecursiveBinarySearch rbcQ;
   qs->sort();
   cout<<"Expecting: ";
   if(rbcQ.search(qs->getList(),1)>=0)
       cout<<"true ";
   else
       cout<<"false ";
   qs->print();

   /*
   // For Bubble Sort
   Sort *bs=new BubbleSort(array);
   RecursiveBinarySearch rbcB;
   bs->sort();
   cout<<"Expecting: ";
   if(rbcB.search(bs->getList(),1)>=0)
       cout<<"true ";
   else
       cout<<"false ";
   bs->print();
   */

};