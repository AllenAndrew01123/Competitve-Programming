#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numProjects=2;
    vector<int> projectid={1,1};
    int bids[2]={4,7};
    vector<int> ans(numProjects,INT_MAX);
    for (int i = 0; i < projectid.size(); i++)
    {
        ans[projectid[i]] = min(ans[projectid[i]], bids[i]);
        cout<<projectid[i]<<" "<<ans[projectid[i]]<<endl;
    }
    long long sum = 0;
    for (int i = 0; i < numProjects; i++)
    {
        cout<<ans[i]<<endl;
        if(ans[i]==INT_MAX)
        cout<<-1<<endl;
        sum += ans[i];
    }
    cout << sum;
}
