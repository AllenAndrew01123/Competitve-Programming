#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      string result ="";
      cin>>s;
      if(s.length()<=10)
      cout<<s;
      else 
      {
        int len = s.length()-2;
        string s1= to_string(len);
        cout<<s[0]+s1+s[s.length()-1]<<endl;
      }
    }
    return 0;
    
}