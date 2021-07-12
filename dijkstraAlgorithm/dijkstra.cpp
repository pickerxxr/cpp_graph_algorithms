# include <iostream>
// # include <bits/stdc++.h>
# include <vector>
# include <queue>

using namespace std;
# define mx 20010
vector<int> edge[mx], cost[mx];

struct graph_data{
    int id, dist;
    bool operator < (const graph_data &p ) const {
        return dist > p.dist;
    }
};


// class graph_data{
//     public:
//         int id;
//         int dist;
    
//     graph_data(int id_num, int dist_num){
//         id = id_num;
//         dist = dist_num;
//     }
// };
    

struct books {
    int id; 
    char name[100];
    char author[50];
};

int dijkstra(int source, int dest){
    int d[mx];
    for (int i = 0 ; i <= mx; i++){
        d[i] = 99999999;
    }
    // priority queue def
    priority_queue<graph_data> q;
    graph_data u, v;
    u.id = source;
    u.dist = 0;
    q.push(u);
    d[source] = 0;

    while (!q.empty()) {
        u = q.top();
        q.pop();
        int u_cost = d[u.id];

        for (int i = 0; i < edge[u.id].size(); i++){
            v.id = edge[u.id][i]; v.dist = cost[u.id][i] + u.dist;
            if (d[v.id] > v.dist) {
            d[v.id] = v.dist;
            q.push(v);
            }
        }
    }
    return d[dest];
}

int main(){
    // graph_data g1(0, 12);
    int n, e, src, dest;
    cin >> n >> e;
    for (int i= 0; i < e; i++){
        int u, v, weight;
        cin >> u >> v >> weight;
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(weight);
        cost[v].push_back(weight);
    }
    cin >> src >> dest;
    int ans = dijkstra(src, dest);
    cout << "the sssp of " << src << "and " << dest << " is " << ans << endl;
    return 0;
}
