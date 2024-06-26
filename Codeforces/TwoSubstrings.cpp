#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int cntab = 0, cntba = 0, cntaba = 0, cntbab = 0;
    int pos1 = s.find("AB");
    int pos2 = s.find("BA", pos1 + 2);
    int pos3=s.find("BA");
    int pos4=s.find("AB",pos3+2);
    // cout<<pos1<<" "<<pos2<<" "<<pos3<<" "<<pos4<<endl;
    if ((pos2>pos1 || pos4>pos3)&& (pos1>=0 && pos3>=0))
    cout<<"YES";
    else
    cout<<"NO";
}