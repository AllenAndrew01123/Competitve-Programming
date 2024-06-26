#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s="codeforces";
    long long k;
    cin >> k;
    int i=1;
    if(k==1)
    {
        cout<<s;
        return 0;
    }
    while(pow(i,10)<=k)
    {
        i++;
    }
    int max=i;
    int min=i-1;
    int maxcnt=0;
    while(pow(max,maxcnt)*pow(min,10-maxcnt)<k)
    {
        maxcnt++;
    }
    int mincnt=10-maxcnt;
    // cout<<min<<" "<<max<<" "<<mincnt<<" "<<maxcnt<<endl;
    for(int j=0;j<mincnt;j++)
    {
        for(int m=1;m<=min;m++)
        cout<<s[j];
    }
    for(int j=mincnt;j<maxcnt+mincnt;j++)
    {
        for(int m=1;m<=max;m++)
        cout<<s[j];
    }
    
    
}