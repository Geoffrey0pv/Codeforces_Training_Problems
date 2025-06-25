#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main (){
    int a1, a2, a3, a4;
    cin >> a1>>a2>>a3>>a4;
    string s;
    cin >> s;
    int totalPoints = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if(s[i]=='1'){
            totalPoints += a1;
        } else if (s[i]=='2'){
            totalPoints += a2;
        } else if (s[i]== '3'){
            totalPoints += a3;
        } else if (s[i]== '4'){
            totalPoints += a4;
        }
    }
    
    cout<<totalPoints<<endl;
}