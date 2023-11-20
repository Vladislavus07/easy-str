#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_cmp_str(string str1, string str2, int num)
{
    int dlina1 = itc_len(str1);
    int dlina2 = itc_len(str2);
    int dlina;
    if (str2 == "")
    {
        return str1;
    }
    dlina = dlina1 - num;
    if (dlina < dlina2)
    {
        int temp = 0;
        for (int i = num; i < dlina1; i++)
        {
            str1[i] = str2[temp];
            temp++;
        }
    }
    else if (dlina >= dlina2)
    {
        int temp = 0;
        for (int i = num; i < dlina1; i++)
        {
            str1[i] = str2[temp];
            temp++;

        }
    }
    return str1;
}



#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
ifstream file;
file.open("k7-84.txt")
string st;
st= "CCBCCCCCCCCCCCACCCBCABCCCAACCCCCCBCCCCCCCCCCCCCACBBCCCCCCCCCCCCCCBCCCCCCBCCCCCCCCCCCCCCACCCCCBCCABCACCCCCCACCCCBCACCCBCCCCCCBBCBCCCCCCCBCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCACCACACCCCBCAACCCCCCCCCBCBCCCCACCCCCCCCCACBCCCCBABCCACCCCCCCCCCCCCCACCBCCCCACCBCCACCCCCABCCBCCACBCBCCCCACBCCBCCCCCCCCBCCCCBCCACCCCCCCCCBCACCCAACCCCACACCCCCCACCCCCCCACCCCCCBCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCBCCACCCCCCCCCCCCCCCCBCCBCCCCBCACCCCCBCCCCBBCCCBCBACCCCBCCCCCCCCCACBCCCCCCCCACBCCCCCBCCCACBBCAACBCCCCCCCCBCACCCCCCCCCCCABCCCCCCCCCCCCCCCCCCCCCCCBCACCACCCCCBCCACCCCCCCCCCCCCCABCCCCCCAACCCCCCCBCCCCCCCCBCCCCCCCCBCCCCCCACBCCACCACCCACCCCCCCCCAAACACCCBBCCCCCACCCCCCCCCCCBCCACCCCCCCCCCBCCCCCCCCCCCCBCCCCCCCCCACCBCCCCCBCCCCCCCCCCCCBCCACCCCCBCACCCCCCACCBCCCCCCCCCBCCCCCCCCCCCCCCCCCBCBCCCCCBCCCCCCCCBCCCCCCCCCCACCCCCCCCCCCCCCCCCCCBCCACCCCCCCCACBCCCCCCACCCCCCCCCCCCCCACCCCBCCCACCBCACCCACCCCCCCCCCCCCBCCCCCCCCCCBCABCCBCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCACCCCCCCCCCCCCCCCCCCAACCCCCCCCCCBCCCCCCCCCABCACBCCCCCCCCCCCCCCC";
int temp = 0, maximum = 0  ;
for(int i = 0; i < file.size(); i++){
    if( file[i] == 'C'){
        temp ++;
    }
    else {
        if(temp > maximum)
                maximum = temp;
        temp= 0 ;
    }
}
if(temp > maximum)
                maximum = temp;
cout << maximum;
return 0;
}
