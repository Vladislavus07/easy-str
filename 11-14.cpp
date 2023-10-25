#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_cmp_str(string str1, string str2, int num)
{
    if (num > itc_len(str1)) {
        return str1;
    }
    int dlin = itc_len(str1) + itc_len(str2);
    if (dlin > itc_len(str1)) {
        dlin = itc_len(str1);
    }
    string res(dlin, ' ');
    for (int i = 0; i < num; i++) {
        res[i] = str1[i];
    }
    for (int i = 0; i < itc_len(str2); i++) {
        res[num + i] = str2[i];
    }
    for (int i = num; i < itc_len(str1); i++) {
        res[itc_len(str2) + i] = str1[i];
    }
    return res;
}
