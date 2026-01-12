#pragma once
#include <iostream>
#include "IOutput.h"
#include "IMath.h"
#include "ISort.h"
using namespace std;

class Array : public IOutput, public IMath, public ISort
{
    int* data;
    int size;

public:
    Array(int size);
    ~Array();

    void Fill();

    void Show() override;
    void Show(string info) override;

    int Max() override;
    int Min() override;
    float Avg() override;
    bool Search(int valueToSearch) override;

    void SortAsc() override;
    void SortDesc() override;
    void SortByParam(bool isAsc) override;
};
