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
    cout << "select the operation by giving a number corresponding to it:" << endl;
    cout << " 1- Square" << endl;
    cout << " 2- Rectage" << endl;
    cout << " 3- Circle " << endl;

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "enter the side of a square" << endl;
        int a;
        cin >> a;
        cout << a * a << endl;
        break;
    case 2:
        cout << "enter the radius of a circe" << endl;
        double a;
        cin >> a;
        cout << 22 / 7 * 1.0 * a * a << endl;
        break;
    case 3:
        cout << "enter the two sides of a ractangle" << endl;
        int a, b;
        cin >> a >> b;
        cout << a * b << endl;
        break;
    default:
        cout << "enter a valid input" << endl;
        break;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    // cin >> t;

    while (t--)
    {
        sol();
    }
    return 0;
}