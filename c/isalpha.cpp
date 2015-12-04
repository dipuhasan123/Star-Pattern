#include<bits/stdc++.h>

using namespace std;
int main()
{
    char c;
    //char c[100]= {'a', 'e','i', 'o', 'u'};
   //char str[] = {'a', 'e','i', 'o', 'u'};
    string str;
    int cnt = 1, cnt1 = 0, v = 0;
    getline(cin, str);
 //int len = str.size();
    for(int i = 0; i<str[i]; i++){
        c = str[i];

      if(isspace(c))
            c = '\n';
        putchar(c);
        if(isspace(c))
            cnt++;

        if(isalpha(str[i]))
            cnt1++;

    }
    cout<<endl;
    cout<<cnt<<endl;
    cout<<cnt1<<endl;

    return 0;
}

Input: Root Root
Output:
Root
Root
Total word = 2
Alpabetic letter = 8


