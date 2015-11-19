#include<iostream>
using namespace std;

int main()
{
    int a[100], i=0, j, n;
    cin>>n;
    while(n>0)
    {
        a[i] = n%2;
        n/=2;
        i++;
    }
    cout<<"Binary Number Is: ";
    for(j = i-1; j>=0; j--)
        cout<<a[j];
    cout<<endl;

    return 0;
}

input : 14
output: Binary Number Is: 1110
