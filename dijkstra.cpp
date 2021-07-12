# include <iostream>

using namespace std;

// struct graph_data{
//     int id, dist;
//     bool operator < (const graph_data &p ) const {
//         return dist > p.dist;
//     }
// };

class graph_data{
    public:
        int id;
        int dist;
    
    graph_data(int id_num, int dist_num){
        id = id_num;
        dist = dist_num;
    }
};
    

struct books {
    int id; 
    char name[100];
    char author[50];
};

int main(){
    graph_data g1(0, 12);
    cout << g1.dist << endl;
    return 0;
}
