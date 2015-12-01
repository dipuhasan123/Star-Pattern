#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    do{
        cout<<s<<" "<<endl;
    }while(prev_permutation(s.begin(), s.end()));


    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1001];
    gets(s);
    strrev(s);
    int sz = strlen(s);

    do{
        for(int  i = 0; i<sz; i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }while(prev_permutation(s, sz+s));

    return 0;
}

Output:
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
