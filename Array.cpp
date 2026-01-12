#include "Array.h"

Array::Array(int size)
{
    this->size = size;
    data = new int[size];
}

Array::~Array()
{
    delete[] data;
}

void Array::Fill()
{
    for (int i = 0; i < size; i++)
    {
        data[i] = rand() % 100;
    }
}

//.
void Array::Show()
{
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";
    cout << endl;
}

void Array::Show(string info)
{
    cout << info << endl;
    Show();
}

//.
int Array::Max()
{
    int max = data[0];
    for (int i = 1; i < size; i++)
        if (data[i] > max)
            max = data[i];
    return max;
}

int Array::Min()
{
    int min = data[0];
    for (int i = 1; i < size; i++)
        if (data[i] < min)
            min = data[i];
    return min;
}

float Array::Avg()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += data[i];
    return (float)sum / size;
}

bool Array::Search(int valueToSearch)
{
    for (int i = 0; i < size; i++)
        if (data[i] == valueToSearch)
            return true;
    return false;
}

// .
void Array::SortAsc()
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
}

void Array::SortDesc()
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (data[j] < data[j + 1])
                swap(data[j], data[j + 1]);
}

void Array::SortByParam(bool isAsc)
{
    if (isAsc)
        SortAsc();
    else
        SortDesc();
}
