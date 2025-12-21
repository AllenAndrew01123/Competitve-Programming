#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int c=0;
        F(i,0,n-2)
        {
            if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
            c++;
            else if (s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')
            c++;
        }
        F(i,0,n-4)
        {
            if (s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e')
            c--;
        }
        cout<<c<<endl;

    }
}