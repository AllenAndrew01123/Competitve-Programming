#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    char arr[5000];
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int i=0;
    int j=0;
    while(i<s.length())
    {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
       {
        i++;
        continue;
       }
       else
       {
        arr[j]=s[i];
        j++;
       }
       i++;
    }
    arr[j]='\0';
    j=0;
    while(arr[j]!='\0')
    {
        cout<<"."<<arr[j];
        j++;
    }
}