#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_even_place(string str)
{
    string res = "";
    int a = itc_len(str);
    for (int i = 1; i < a; i+=2)
    {
        res += str[i];
    }
    if (res == "")
    {
        return "-1";
    }
    return res;

}

