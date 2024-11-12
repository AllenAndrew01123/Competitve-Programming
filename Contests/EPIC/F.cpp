#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll n;
vector<pair<int, int>> points;
bool isConnected(int d) {
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int dist = abs(points[i].first - points[j].first) + abs(points[i].second - points[j].second);
            if (dist <= d) {
                adj[i].emplace_back(j);
                adj[j].emplace_back(i);
            }
        }
    }
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    int visitedCount = 1;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                visitedCount++;
                q.push(u);
            }
        }
    }
    
    return visitedCount == n;
}

int calculateShortestPathSum(int d) {
    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < n; ++i) {
        dist[i][i] = 0;
        for (int j = i + 1; j < n; ++j) {
            int manhattanDistance = abs(points[i].first - points[j].first) + abs(points[i].second - points[j].second);
            if (manhattanDistance <= d) {
                dist[i][j] = dist[j][i] = 1;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum += dist[i][j];
        }
    }
    
    return sum;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    points.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    int low = 0, high = 200000, minD = high;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isConnected(mid)) {
            minD = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    int shortestPathSum = calculateShortestPathSum(minD);
    
    cout << minD << " " << shortestPathSum << endl;
    
    return 0;
}