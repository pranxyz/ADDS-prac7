#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>


class RecursiveBinarySearch
{
public:
   RecursiveBinarySearch();
   ~RecursiveBinarySearch() {};
   bool search(std::vector<int>, int);
   int bSearch(std::vector<int> &toSearch, int, int, int);

private:


};

#endif
