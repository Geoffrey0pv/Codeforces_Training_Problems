#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> perm = {0, 1, 2, 3, 4};
    vector<vector<int>> g(5, vector<int>(5));
    int maximusPoints = 0;
    
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> g[i][j];
        }
    }
    
    do {
        int happiness = 0;
        vector<int> line = perm; 
        
        for(int round = 0; round < 5; ++round) {

            for(int i = 0; i < (int)line.size() - 1; i += 2) {
                int person1 = line[i];
                int person2 = line[i + 1];
                happiness += g[person1][person2] + g[person2][person1];
            }
            
            if(!line.empty()) {
                line.erase(line.begin());
            }
        }
        
        maximusPoints = max(maximusPoints, happiness);
    } while (next_permutation(perm.begin(), perm.end()));
    
    cout << maximusPoints << endl;
    return 0;
}