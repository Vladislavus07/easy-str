#include <iostream>
#include <string>
#include "easy str.h"
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
