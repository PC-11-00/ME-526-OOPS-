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

void sol()
{
    int marks;
    cin >> marks;
    float ip = (marks * 1.0 / 100) * 100;
    cout << ip << endl;
    if (ip >= 0 && ip <= 39)
    {
        cout << "F" << endl;
    }
    else if (ip >= 40 && ip <= 59)
    {
        cout << "C" << endl;
    }
    else if (ip >= 60 && ip <= 74)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        sol();
    }
    return 0;
}