//Binary to Decimal

#include<bits/stdc++.h>
using namespace std;

int b2d(int n)
{
    int decimal = 0, i = 0, rem;
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        decimal+=rem*pow(2,i);
        i++;
    }
    return decimal;
}

int main()
{
    int n;
    cin>>n;

    cout<<b2d(n);

    return 0;
}

Input = 1110
output = 14



