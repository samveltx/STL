#ifndef DEQUEBYME
#define DEQUEBYME

#include <iostream>
#include <cmath>

namespace stdS{
template <typename T>
class deque
{
private:
    T *arr;
    unsigned int first_elem_index;
    unsigned int last_elem_index;
    unsigned int max_size;
    unsigned int size;
public:
    deque();
    void push_back(T);
    void pop_back();
    void push_front(T);
    void pop_front();
    void insert(int, T);
    void delete_index_val(int);
    void clear();
    void clear_unused_memory();
    int  Size();
    int  capacity();
    bool empty();
    int  operator [](int);
    void out();
    int  sum_all_items();
    int  max_item();
    int  min_item();
};

}
#endif
