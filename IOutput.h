#pragma once
#include <string>
using namespace std;

class IOutput
{
public:
    virtual void Show() = 0;
    virtual void Show(string info) = 0;

    virtual ~IOutput() {}
};