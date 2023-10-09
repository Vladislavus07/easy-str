#include <iostream>
#include <string>
//#include "str_easy.h"
using namespace std;

long long itc_len(string str)
{
	int a = 0;
	for (int b = 0; str[b] != '\0'; b++)
	{
        	a++;
	}
	return a;
}
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

/*int main(){
    string str;
    cin >> str;
    cout << itc_even_place(str);
    return 0;
}
