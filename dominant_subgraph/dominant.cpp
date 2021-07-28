// C++ program to find the Dominant Set of a graph
#include <iostream>
#include <vector>


using namespace std;

vector<vector<int> > g;
bool box[100000];

vector<int> Dominant(int ver, int edge)
{
    vector<int> S; // set S
    for (int i = 0; i < ver; i++) {
	if (!box[i]) {
	    S.push_back(i);
            box[i] = true;
	    for (int j = 0; j < (int)g[i].size(); j++) {
	        if (!box[g[i][j]]) {
		    box[g[i][j]] = true;
		    break;
	        }
	    }
        }
    }
    return S;
}

// Driver function
int main()
{
	int ver, edge, x, y;

	ver = 5; // Enter number of vertices
	edge = 6; // Enter number of Edges
	g.resize(ver);

	// Setting all index value of an array as 0
	memset(box, 0, sizeof(box));

	// Enter all the end-points of all the Edges
	// g[x--].push_back[y--]	 g[y--].push_back[x--]
	g[0].push_back(1);
	g[1].push_back(0); // x = 1, y = 2 ;
	g[1].push_back(2);
	g[2].push_back(1); // x = 2, y = 3 ;
	g[2].push_back(3);
	g[3].push_back(2); // x = 3, y = 4 ;
	g[0].push_back(3);
	g[3].push_back(0); // x = 1, y = 4 ;
	g[3].push_back(4);
	g[4].push_back(3); // x = 4, y = 5 ;
	g[2].push_back(4);
	g[4].push_back(2); // x = 3, y = 5 ;

	vector<int> S = Dominant(ver, edge);
	cout << "The Dominant Set is : { ";
	for (int i = 0; i < (int)S.size(); i++)
		cout << S[i] + 1 << " ";
	cout << "}" << endl;;
	return 0;
}

