#include <bits/stdc++.h>
using namespace std;
void case1(string s)
{
    vector<char> col;
    int row = 0;
    int i = 0;
    while (!(s[i] >= '0' && s[i] <= '9'))
    {
        col.push_back(s[i]);
        i++;
    }
    while (i < s.length())
    {
        // cout<<i<<endl;
        row = row * 10 + (s[i] - 48);
        i++;
    }
    // cout<<row<<endl;
    int size = col.size();
    int column = 0;
    int j = 0;
    while (size > 0)
    {
        double y = pow(26, size - 1);
        column += (s[j] - 64) * y;
        j++;
        size--;
    }
    cout << "R" << row << "C" << column << endl;
}
void case2(string s)
{
    int row = 0;
    int column = 0;
    int i = 1;
    vector<char> col;
    while (s[i] != 'C')
    {
        row = row * 10 + (s[i] - 48);
        i++;
    }
    i++;
    while (i < s.length())
    {
        column = column * 10 + (s[i] - 48);
        i++;
    }
    while (column > 0)
    {
        char c;
        if (column % 26 != 0)
        {
            c = column % 26 + 64;
            col.push_back(c);
            column /= 26;
        }
        else
        {
            c = 'Z';
            col.push_back(c);
            column=column/26-1;
        }
    }
    for (int i = col.size() - 1; i >= 0; i--)
    {
        cout << col[i];
    }
    cout << row << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'R' && (s.find("C") != string::npos && s.find("C")>1)&&(s[1]>='0'&&s[1]<='9'))
        {
            case2(s);
        }
        else
        {
            case1(s);
        }
    }
}