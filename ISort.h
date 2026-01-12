#pragma once

class ISort
{
public:
    virtual void SortAsc() = 0;
    virtual void SortDesc() = 0;
    virtual void SortByParam(bool isAsc) = 0;

    virtual ~ISort() {}
};