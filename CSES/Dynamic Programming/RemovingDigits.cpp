// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     vector <int> dp(n+1,1e9);
//     dp[0]=0;
//     for(int i=1;i<=n;i++)
//     {
//         string a=to_string(i);
//         for(char c:a)
//         {
//             int digit=c-48;
//             if(digit!=0)
//             dp[i]=min(dp[i],dp[i-digit]+1);
//         }
//     }
//     cout<<dp[n];
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0;
    while(n>0)
    {
        string temp=to_string(n);
        sort(temp.begin(),temp.end());
        n=n-(temp[temp.length()-1]-48);
        cnt++;

    }
    cout<<cnt;
}