#include <iostream>
#include <vector>

using namespace std;

int main(){
    int eg[4];
    for (int i = 0; i < 5; i++){
        eg[i] = i;
    }
    int* ptr = eg;
    // cout << "eg: " << eg[2] << endl;
    *(ptr + 2) = 5;
    // cout << "eg after update: " << eg[2] << endl;
    int** array2d = new int*[50];
    for (int i = 0; i < 50; i++){
        array2d[i] = new int[50];
    }


    return 0;
}
