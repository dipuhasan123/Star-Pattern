gcd,lcm

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);

}

int lcm(int a, int b)
{
    return a/gcd(a,b) * b;

}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<'\n';
    cout<<lcm(a,b);
}

Input:  4 26
Output: 2 52


