#include <Deque.h>
using namespace stdS;

template <typename T>
deque::deque()
{
    first_elem_index = last_elem_index = 0;
    size = 0;
    max_size = 1;
    arr = new T [max_size];
}
template <typename T>
void deque::push_back(T val)
{
    if(size == max_size)
    {
        T *brr = arr;
		max_size *= 2;
		arr = new T [max_size];
		for (int i = first_elem_index, j = 0; i != last_elem_index, j < size;
            i = std::fmod(i+1, size), ++j)
		{
            arr[j] = brr[i];
        }
        delete[] brr;
        first_elem_index = 0;
        last_elem_index = size;
		arr[size++] = val;
        return;
    }
    last_elem_index = std::fmod(last_elem_index+1,max_size);
    size++;
    arr[last_elem_index] = val;
}
void deque::pop_back()
{
    arr[last_elem_index] = 0;
    last_elem_index = std::fmod(last_elem_index - 1,max_size);
}
template <typename T>
void deque::push_front(T val)
{
    if(size == max_size)
    {
        T *brr = arr;
		max_size *= 2;
		arr = new T [max_size];
		for (int i = first_elem_index, j = 0; i != last_elem_index, j < size;
            i = std::fmod(i+1, size), ++j)
		{
            arr[j] = brr[i];
        }
        delete[] brr;
        first_elem_index = std::fmod(last_elem_index - 1,max_size)
        arr[]
    }
}
