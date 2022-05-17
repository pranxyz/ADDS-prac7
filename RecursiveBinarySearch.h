#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{

   private:
       int binarySearch(std::vector<int> array, int start, int end, int target);

       public:
           ~RecursiveBinarySearch(){};
           int search(std::vector<int> array, int target);
};

#endif