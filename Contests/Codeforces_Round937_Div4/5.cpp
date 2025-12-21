// #include<bits/stdc++.h>
// using namespace std;
// bool checker (string s,string made)
// {
//     int i,c=0;
//     for(i=0;i<s.length();i++)
//     {
//         if(s[i]!=made[i])
//         c++;
//     }
//     if(c==0 || c==1)
//     return true;
//     else
//     return false;
// }
// int substring(string s, int i, int l)
// {
//     int j;
    
//     for(j=0;j<l-i+1;j++)
//     {
//         string made="";
//         string temp=s.substr(j,i);
//         int k=l/1;
//         while(k--)
//         {
//             made+=temp;
//         }
//         if(checker(s,made))
//         return i;
//         j++;
        
//     }
//     return 0;
// }
// main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         int l;cin>>l;
//         string s;cin>>s;
//         int i;
//         for(i=1;i<=l;i++)
//         {
//             if(l%i==0)
//             {
//                 if(substring(s,i,l)!=0)
//                 {
//                     cout<<i<<endl;
//                     break;
//                 }
//             }
//         }
//         if(i==l+1)
//         cout<<l<<'\n';
//     }
// }
#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int i;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                int j,k;
                int count=1;
                for(j=0;j<i;j++)
                {
                    for(k=j+i;k<n;k+=i)
                    {
                        if(s[k]!=s[j])
                        count--;
                    }
                }
                if(count>=0)
                {
                    cout<<i<<endl;
                    break;
                }
                 count=1;
                for(j=n-i;j<n;j++)
                {
                    for(k=j-i;k>=0;k-=i)
                    {
                        if(s[k]!=s[j])
                        count--;
                    }
                }
                if(count>=0)
                {
                    cout<<i<<endl;;
                    break;
                }
            }
        }
        if(i>n)
        cout<<n<<endl;

    }
}