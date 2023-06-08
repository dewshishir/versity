
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> bfs(int stNOde,int tnode,vector<int>adj[]){
    int vis[tnode+1]={0};
    vis[stNOde]=1;
    vector<int>ls;
    queue<int>q;
    q.push(stNOde);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ls.push_back(node);
        for(auto i:adj[node]){
            if(!vis[i]){
                vis[i]=1;
                q.push(i);
            }
        }
    }
    return ls;
}



int main()
{
    ios_base::sync_with_stdio(false);

    int n ;
    cout << "Enter the number of nodes :" ;
    cin >> n;
    int edge;
    cout << "enter the number of edges : ";
    cin >> edge;
    vector<int>adj[n+1];
    set<int>s;
    for(int i=0;i<edge;i++){

        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        s.insert(u);
        s.insert(v);
    }
    int nd;
    cout << "Enter the staring node : " ;
    cin >> nd;

    vector<int>res;
    res = bfs(nd,n,adj);

    for(auto i:res){
        cout << i << " ";
    }


    /*for(auto i:s){
        cout << i << " - > ";
        for(auto j:adj[i]){
            cout << j << " " ;
        }
        cout << endl;
    }*/





    return 0;
}
