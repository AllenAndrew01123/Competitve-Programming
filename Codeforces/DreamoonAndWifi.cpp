#include<bits/stdc++.h>
using namespace std;
int factorial(int n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
int main()
{
    string s1,s2;cin>>s1>>s2;
    int i=0;
    int pluscnt=0,mincnt=0,qcnt=0;
    while(i<s1.length())
    {
        if(s1[i]=='+')
        pluscnt++;
        if(s1[i]=='-')
        mincnt++;
        if(s2[i]=='+')
        pluscnt--;
        if(s2[i]=='-')
        mincnt--;
        if(s2[i]=='?')
        qcnt++;
        i++;
    }
    int num;
    if(mincnt<0 || pluscnt<0)
    num=0;
    else
    num=factorial(pluscnt+mincnt)/(factorial(pluscnt)*factorial(mincnt));
    cout<<fixed<<setprecision(10)<<num*1.0/pow(2,qcnt);

}