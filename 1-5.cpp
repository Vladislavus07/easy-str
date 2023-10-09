#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name)
 {
	return "Hello, " + name;
}

long long itc_len(string str)
{
	int a = 0;
	for (int b = 0; str[b] != '\0'; b++)
	{
        	a++;
	}
	return a;
}
void itc_print_copy_str(string str, int number)
{
    for (int i = 0; number>i; i++)
    {
    cout << str << endl;
    }
}
