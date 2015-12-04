#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
   // char str[100];
    string str;

    getline(cin, str);
    //int len = str.size();
    for(int i = 0; i<str[i]; i++){
        c = str[i];
        if(isspace(c))
            c = '\n';
        putchar(c);
    }
    cout<<endl;

    return 0;
}


=========
Input
I am dipu

Output
I
am
dipu


