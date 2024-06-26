#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int h=stoi(s.substr(0,2));
        int m=stoi(s.substr(3,2));
        string hf,mf;
        string am=" AM";
        string pm=" PM";
        if(h==0)
        hf="12";
        if(h>0 && h<=9)
        hf="0"+to_string(h);
        if(h>=10 && h<=12)
        hf=to_string(h);
        if(h>=13 && h<=21)
        hf="0"+to_string(h-12);
        if(h>=22&&h<=23)
        hf=to_string(h-12);
        if(m>=0 && m<=9)
        mf="0"+to_string(m);
        if(m>=10 && m<=59)
        mf=to_string(m);
        if(h>=0 && h<=11)
        cout<<hf<<":"<<mf<<am<<endl;
        if(h>=12 && h<=23)
        cout<<hf<<":"<<mf<<pm<<endl;


    }

}