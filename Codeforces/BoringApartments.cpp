#include <bits/stdc++.h>
using namespace std;
int main (){
int a;cin>>a;
while(a--){
string b;cin>>b;
cout<<(b.size()*(b.size()+1)/2)+(b[0]-49)*10<<endl;
}
}