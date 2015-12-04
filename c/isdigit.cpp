#include<bits/stdc++.h>
using namespace std;

int main()
{
   // char str[] = "1776ad";
    char str[1010];
    int year;
    gets(str);

    for(int i = 0; i<str[i]; i++){
        if(isdigit(str[i]))
        {
           year = atoi(str);
           printf("%d %d %d\n",  year, year+1, year+year);
         }
    }
    return 0;
}


==
Input = 456dipu

Output = 456 467 912

