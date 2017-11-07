#ifndef VECTORBYME
#define VECTORBYME

#include <iostream>

namespace stdS{

class vector
{
private:
    int *arr;
    int size;
    int max_size;
public:
    vector();
    void push_back(int);
    void pop_back();
    void clear();
    void insert(int, int);
    void clear_unused_memory();
    int  Size();
    int  capacity();
    bool empty();
    int  sum_all_items();
    void delete_value(int r);
    int  max_item();
    int  min_item();
    int  operator [](int);
    void out();
};

}
#endif
