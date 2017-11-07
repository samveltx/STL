#include <QUEUE.h>
using namespace stdS;

queue::queue(int n = 10)
{
    size = 0;
    max_size = n;
    arr = new int [max_size];
    first = last = 0;
}

queue::~queue()
{
    delete arr;
}

void queue::push(int x)
{
    if(std::fmod(last+1, max_size) == first)
    {
        int* tmp = arr;
        max_size *= 2;
        arr = new int [max_size];
        for(int i = 0, n = max_size/2; i < n; ++i)
        {
            arr[i] = tmp[i];
        }
        delete tmp;
     }
     arr[last] = x;
     last = std::fmod(last+1, max_size);
     size++;
}
int queue::read()
{
    if(last == first)
        throw std::runtime_error("Can't read element because Queue is empty ");
    int tmp = arr[first];
    first =std::fmod(first+1, max_size);
    size--;
    return tmp;
}
int queue::max_Size()
{
    return this->max_size;
}
int queue::Size()
{
    return this->size;
}
bool queue::empty()
{
    if(this->max_size == 0)
        return true;
    return false;
}
