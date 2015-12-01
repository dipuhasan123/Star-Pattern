#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
    cin>>s;
    sort(s.begin(), s.end());
    do{
        cout<<s<<"  "<<'\n';
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}

Output::
aab
aba
baa

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n[1010], t;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n[i];
    }

    sort(n, n+3);
    do{
      for(int i = 0; i<t; i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
    }while(next_permutation(n, n+3));

    return 0;
}

Output::
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
