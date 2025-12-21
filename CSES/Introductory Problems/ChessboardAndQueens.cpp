#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve(vector<vector<char>> &board,ll row,vector<bool>&col,vector<bool>&pridiag,vector<bool>&secdiag,ll &ans)
{
    if(row==8)
    {
        ans++;
        return;
    }
    for(int i=0;i<8;i++)
    {
        if(board[row][i]=='*'||col[i]||pridiag[i+row]||secdiag[row-i+7])
        {
            continue;
        }
        col[i]=pridiag[i+row]=secdiag[row-i+7]=true;
        solve(board,row+1,col,pridiag,secdiag,ans);
        col[i]=pridiag[i+row]=secdiag[row-i+7]=false;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cin >> board[i][j];
    }
    vector<bool>col(8,false);
    vector<bool>pridiag(15,false);
    vector<bool>secdiag(15,false);
    ll ans=0;
    solve(board,0,col,pridiag,secdiag,ans);
    cout<<ans<<endl;
}