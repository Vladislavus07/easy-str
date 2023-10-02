#include <iostream>
#include <string>
#include "easy str.h"
using namespace std;

string itc_hello_str(string name)
 {
	cin >> name;
	return "Hello, " + name;
}

int main() {
    string name;
    cout << itc_hello_str(name);
    return 0;
}
