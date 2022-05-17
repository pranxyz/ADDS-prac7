#ifndef SORT_H
#define SORT_H
#include <vector>

class Sort {
public:
virtual void sort() = 0; // pure vartual function
virtual void print() = 0;
virtual std::vector<int> getList() = 0;
virtual void setList(std::vector<int> array) = 0;

};

#endif