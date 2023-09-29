/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;
#define MOD 1000000007
/* BFS adj = adjaency list , v= number of vertices and s = source
void bfs(vector<int>adj[],int v, int s){
vector<int>vis(v+1,0);
queue<int>q;
q.push(s);
while(!q.empty()){
int u = q.top();
vis[u]=1;
q.pop();
for(int i=0;i<adj[u].size();i++){
if(vis[adj[u][i]]==0){
q.push(adj[u][i]);
}
}
}
}*/

#define ll long long
int check(vector<vector<int>> arr)
{
    int n = 3, m = 3;
    for (int i = 0; i < 3; i++)
    {
        int sum = accumulate(arr[i].begin(), arr[i].end(), -1);

    }
}
void sol()
{
    int n = 3, m = 3;

    vector<vector<int>> arr(n, vector<int>(m, -1));
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (flag == 0)
            {
                cout << "first player enter the indeices" << endl;
                int x, y;
                cin >> x >> y;
                arr[i][j] = 1;
                if (check(arr) == 1)
                {
                    cout << "first player won" << endl;
                }
                flag = 1;
            }
            else
            {
                cout << "second player enter the indeices" << endl;
                int x, y;
                cin >> x >> y;
                arr[x][y] = 0;
                if (check(arr) == 2)
                {
                    cout << "second player won" << endl;
                }

                flag = 0;
            }
        }
    }
    cout << "No one won match is won" << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        sol();
    }
    return 0;
}