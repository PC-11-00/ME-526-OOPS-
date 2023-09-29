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

// allows you to indirectly access and modify the value of a pointer
#define ll long long

void modify(int **a)
{
    cout << a << endl;
    cout << *a << endl;
    cout << **a << endl;
    int new_val = 62;
    *a = &new_val;
    cout<<"after "<<endl;
    cout << a << endl;
    cout << *a << endl;
    cout << **a << endl;
}
void sol()
{
    int val = 10;
    int *ptr = &val;
    int **double_ptr = &ptr;
    cout << **double_ptr << endl;
    cout << "after modify" << endl;
    modify(double_ptr);
    cout << **double_ptr << endl;
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