#include <iostream>
#include <string>
#include "NotationConvertor.hpp"

int main()
{

    return 1;
}

int fg = 0;
int NotationConvertor::getPrecedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}