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
class emplopyee
{
public:
    int id;
    string name;
    int basicSalary;
    int hra;
    int da;
    int ta;
    int salary;
};
void sol()
{
    emplopyee e1;
    e1.name = "Pushpendra";
    e1.basicSalary = 10000;
    e1.hra = 0.18 * e1.basicSalary;
    e1.da = 0.07 * e1.basicSalary;
    e1.ta = 0.03 * e1.basicSalary;
    e1.salary = e1.basicSalary + e1.hra + e1.da + e1.ta;
    cout<<"Employee basic Salary: "<<e1.basicSalary<<endl;
    cout<<"Employee Salary: "<<e1.salary<<endl;
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