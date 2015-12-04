#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0, c;
    char str[] = "cap3d....";

    while ( isalnum(str[i] ) )
     i++;
    printf("The first %d chars are alphanumeric.\n", i);

    return 0;
}

Output : The first 4 characters are alphanumeric.
