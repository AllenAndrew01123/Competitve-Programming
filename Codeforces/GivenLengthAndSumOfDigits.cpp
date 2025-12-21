#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    string s1 = "";
    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
        }
        else
        {
            cout << "-1 -1" << endl;
        }
        return 0;
    }
    string mx="",mn="";
    for(int i=0;i<m;i++)
    {
        int p=min(9,s);
        mx.push_back(char(p+48));
        s-=p;
    }
    if(s>0)
    {
        cout<<"-1 -1";
        return 0;
    }
    for(int i=m-1;i>=0;i--)
    {
        mn.push_back(mx[i]);
    }
    int j=0;
    while(mn[j]=='0')
    j++;
    mn[0]++;
    mn[j]--;
    cout<<mn<<" "<<mx<<endl;

}