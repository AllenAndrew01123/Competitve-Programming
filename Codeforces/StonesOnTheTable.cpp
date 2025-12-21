// #include<bits/stdc++.h>
// using namespace std;
// main()
// {
//    int n;
//    string s;
//    cin>>n;
//    cin>>s;
//    int i=0,c=0;
//    while(i<s.length()-1) 
//    {
//     if(s[i]==s[i+1])
//      c++;
//      i++;
//    }
//    cout<<c;
// } 
#include <bits/stdc++.h>
using namespace std;
 
int main () {
	int a; cin>>a;
	string s; cin>>s;
	auto x = unique(s.begin(), s.end())-s.begin();
	cout<<x;
	
}