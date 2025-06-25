#include <iostream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    
    while (t--){
        int x,y,a,b,t;
        cin >> x >> y >> a >> b;
        
        int distance = y-x;
        int speed = a+b;
        
        if (distance % speed == 0){
            cout << distance / speed << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}