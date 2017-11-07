using namespace stdS

vector::vector()
{
    max_size = 1;
	size = 0;
	arr = new int[max_size];
}
int vector::Size()
{
    return size;
}
int vector::capacity()
{
    return max_size;
}
void vector::push_back(int val)
{
    if (size == max_size)
	  {
        int *brr = arr;
		max_size *= 2;
		arr = new int [max_size];
		for (int i = 0; i < size; ++i)
		{
            arr[i] = brr[i];
        }
        delete[] brr;
		arr[size++] = val;
        return;
	}
	arr[size++] = val;
}
void vector::pop_back()
{
     arr[size - 1] = 0;
     size--;
}

void vector::clear()
{
    for(int i = 0; i < size; ++i)
    {
        arr[i] = 0;
    }
    size = 0;
}
void vector::insert(int  pos, int val)
{
	if (size == max_size)
	{
        int *brr = arr;
		max_size *= 2;
		arr = new int [max_size];
		for (int i = 0; i < pos; ++i)
		{
            arr[i] = brr[i];
        }
        arr[pos] = val;
        for (int i = pos; i < size; ++i)
		{
            arr[i+1] = brr[i];
        }
        delete[] brr;
        size++;
        return;
    }
	for (int i = size; i > pos; --i)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos] = val;
	size++;
}
	void vector::clear_unused_memory()
	{
		max_size = size;
	}
	bool vector::empty()
	{
		if (size == 0)
			return true;
		return false;
	}
	int vector::sum_all_items()
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	void vector::delete_value(int index)
	{
		for (int i = index-1; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
	}


	int vector::max_item()
	{
		int max = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		return max;
	}
	int vector::min_item()
	{
		int min = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		return min;
	}

	int vector::operator [](int  n)
	{
		return this->arr[n];
	}

void  vector::out()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << this->arr[i] << " ";
	}
}
