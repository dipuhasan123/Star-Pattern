#include<bits/stdc++.h>
using namespace std;

int CountDivisor(int n) {
    int Count = 2, k = (int)sqrt(n);
    for (int i=2; i<=k; i++)
        if (n%i==0)
            Count += 2;
    if (k*k==n) Count--;

    return Count;
}

int main() {
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);
    int T, a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        int ans, Max = 0;
        for(int i = a; i<=b; i++) {
            int k = CountDivisor(i);
            if (k>Max) {
                ans = i; 
                Max = k;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, ans, Max);
    }
    return 0;
}
