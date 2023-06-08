#include<bits/stdc++.h>
using namespace std;
int node,edge;
int visited_array[1000];

vector<int>a[1000];
// BFS Traversal
void BFS(int src)
{
    queue<int>b;
    b.push(src);
    visited_array[src]=1;
    while(!b.empty())
    {
        int head=b.front();
        cout<<head<<" ";
        b.pop();
        for(int child:a[head])
        {
            if(visited_array[child]==0)
            {
                visited_array[child]=1;
                b.push(child);
            }
        }
    }

}


// DFS Traversal
void DFS(int node)
{
    cout<<node<<" ";
    visited_array[node]=1;
    for(int child:a[node])
    {
        if(visited_array[child]==0)
        {
            DFS(child);
        }
    }
}

int main()
{
    cout<<"Enter the number of Nodes and Edges"<<endl;
    cin>>node>>edge;

    for(int i=0; i<edge; i++)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cout<<"";

    for(int i=0; i<node; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<a[i].size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"";
    }
    cout<<"";

    cout<<"BFS:";
    BFS(1);
    cout<<"";
     memset(visited_array, 0, sizeof(visited_array));
    cout<<"DFS:";
    DFS(1);
  cout<<"";
    return 0;
}
