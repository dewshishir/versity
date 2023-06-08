#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int target;
    int weight;
};


int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<Edge>> graph(n + 1);
    for (const auto& time : times) {
        int source = time[0];
        int target = time[1];
        int weight = time[2];
        graph[source].push_back({target, weight});
    }
    
    vector<int> distance(n + 1, numeric_limits<int>::max());
    distance[k] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, k});
    
    while (!pq.empty()) {
        int currNode = pq.top().second;
        int currDistance = pq.top().first;
        pq.pop();
        
        if (currDistance > distance[currNode]) {
            continue;
        }
        
        for (const auto& edge : graph[currNode]) {
            int neighbor = edge.target;
            int neighborDistance = currDistance + edge.weight;
            
            if (neighborDistance < distance[neighbor]) {
                distance[neighbor] = neighborDistance;
                pq.push({neighborDistance, neighbor});
            }
        }
    }
    
    int maxDistance = 0;
    for (int i = 1; i <= n; ++i) {
        if (distance[i] == numeric_limits<int>::max()) {
            return -1;
        }
        maxDistance = max(maxDistance, distance[i]);
    }
    
    return maxDistance;
}

int main() {
    vector<vector<int>>times; 
    for(int i=1; i<=3;i++){
        vector<int >a;
        for(int j =1; j<=3; j++){
            int x; cin>>x; 
            a.push_back(x);
        }
        times.push_back(a);
    }
    int e,f;
    cin>>e>>f;

    cout << networkDelayTime(times, e, f) << endl;
    
    return 0;
}
