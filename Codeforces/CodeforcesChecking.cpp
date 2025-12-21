#include<bits/stdc++.h>
using namespace std;
const string x="codeforces";
int t;
string s;
int main() {
cin>>t;
while(t--) {
cin>>s;
cout<<((x.find(s)==-1)?"NO":"YES")<<endl;
}
return 0;
}