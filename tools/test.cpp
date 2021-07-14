# include <iostream>
# include <vector>
using namespace std;
vector<int> u[10], v[10], weight[10];

int main(){
    // graph_data g1(0, 12);
    int n, e, src, dest;
    cin >> n >> e;
    for (int i= 0; i < e; i++){
        int u, v, weight;
        cin >> u >> v >> weight;
        cout << "u v wight: " << u << " " << v << " " << weight << endl;
    }
    cin >> src >> dest;
    cout << "src and destination: " << src << " " << dest << endl;
    return 0;
}