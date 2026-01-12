#include <iostream>
#include <ctime>
#include "Array.h"
using namespace std;

int main()
{
    srand(time(nullptr));

    Array arr(10);
    arr.Fill();

    arr.Show("Source array:");

    cout << "Max: " << arr.Max() << endl;
    cout << "Min: " << arr.Min() << endl;
    cout << "Avg: " << arr.Avg() << endl;

    int value = 50;
    cout << "Search " << value << ": "
        << (arr.Search(value) ? "Found" : "Not found") << endl;

    arr.SortAsc();
    arr.Show("Sort by ascending order:");

    arr.SortDesc();
    arr.Show("Sort in descending order:");

    arr.SortByParam(true);
    arr.Show("SortByParam(true):");

    return 0;
}