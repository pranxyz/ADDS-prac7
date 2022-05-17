#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <vector>

class QuickSort : public Sort {

private:
std::vector<int> storage;
public:
   ~QuickSort(){};

QuickSort(std::vector<int> array);

       int partition (int start, int end);

       void quickSort(int start, int end);

       void sort();
   void print();

std::vector<int> getList();

void setList(std::vector<int> list);
};

#endif