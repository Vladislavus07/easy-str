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

double itc_percent_lower_uppercase(string str)
{
    double a = 0, b  = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            {
                b += 1;
            }
        else
            {
                a += 1;
            }
        }
        return a / b;
}

string itc_reverse_str(string str)
{
    string perev = "";
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        perev += str[i];
    }
    return perev;
}

string itc_slice_str(string str, int start, int end)
{
    string resultat = "";
    if (start >= end)
    {
        resultat = str;
    }
    else if (start >= itc_len(str))
    {
        resultat = str;
    }
    else {
        if (end >= itc_len(str))
        {
            end = itc_len(str) - 1;
        }
        for (int i = start; i <= end; i++) {
            resultat += str[i];
        }
    }
    return resultat;
}

bool itc_equal_reverse(string str)
{
    string str1 = itc_reverse_str(string str);
    if (str == str1)
        return true;
    else
        return false;
}
