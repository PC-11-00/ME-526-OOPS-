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
    int a, b;
    cin >> a >> b;
    cout << "select the operation by giving a number corresponding to it:" << endl;
    cout << " 1- Add" << endl;
    cout << " 2- Subtract" << endl;
    cout << " 3- Divide " << endl;
    cout << " 4 - Reminder" << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << a + b << endl;
    }
    else if (x == 2)
    {
        cout << a - b << endl;
    }
    else if (x == 3)
    {
        cout << a / b << endl;
    }
    else if (x == 4)
    {
        cout << a % b << endl;
    }
    else
    {
        cout << "Not a valid input" << endl;
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