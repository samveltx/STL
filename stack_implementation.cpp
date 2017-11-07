#include <stack.h>
using namespace stdS;

void stack::push(int val)
{
    vector.push_back(val);
}

int stack::read()
{
    return vector[vector.size() - 1];
}

int stack::read_pop()
{
    if(vector.size() == 0)
        throw std::runtime_error("Can't read element because Stack is empty ");
    int tmp = vector[vector.size() - 1];
    vector.pop_back();
    return tmp;
}

int stack::Size()
{
    return vector.size();
}

int stack::max_Size()
{
    return vector.max_size();
}
int stack::empty()
{
    if(vector.size() == 0)
        return true;
    return false;
}
void stack::out()
{
    for(int i = 0, n = vector.size(); i < n; ++i)
    {
        std::cout << i << ": " << vector[i] << std::endl;
    }

}
