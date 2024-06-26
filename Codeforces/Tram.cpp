#include<bits/stdc++.h>
using namespace std;
main()
{
   int n;
   cin>>n;
   int capacity=0;
   int curr=0;
   while(n--)
   {
    int a,b;
    cin>>a>>b;
    curr=curr+b-a;
    if(curr>capacity)
    capacity=curr;
   }
   cout<<capacity;

}