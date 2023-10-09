/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include "Employee.h"
#include "Finder.h"
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
    // Employee
    Employee e1 = Employee();
    e1.printEmployee();
    Employee e2 = Employee("Pushpendra", 1, 10000);
    e2.printEmployee();
    // Area
    Finder a;
    a.findArea(4);
    Finder b ;
    b.findArea(32,"square");
    // cout << a << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
    {
        sol();
    }
    return 0;
}