#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"
#include <vector>

class BubbleSort : public Sort{

private:
std::vector<int> storage;
public:
~BubbleSort(){};
BubbleSort(std::vector<int> array);
void sort();
void print();
std::vector<int> getList();
void setList(std::vector<int> list);
};

#endif