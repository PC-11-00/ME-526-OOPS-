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
#include "Students.hpp"
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

// main code
void sol()
{
    Students s1;
    s1.setName("Pushpendra");
    string name = s1.getName();
    s1.setId(1);
    int id = s1.getId();
    s1.setPercentage(69.0);
    float percentage = s1.getPercentage();
    char grade = s1.getGrade();
    s1.setGrade(grade);
    s1.printStudent();
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