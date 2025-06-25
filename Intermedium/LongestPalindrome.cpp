#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> words(n);
    vector<bool> used(n, false);
    vector<string> left, right;
    string center = "";

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    for (int i = 0; i < n; ++i) {
        if (used[i]) continue;
        string rev = words[i];
        reverse(rev.begin(), rev.end());

        bool found = false;
        for (int j = i + 1; j < n; ++j) {
            if (!used[j] && words[j] == rev) {
                left.push_back(words[i]);
                right.push_back(words[j]);
                used[i] = used[j] = true;
                found = true;
                break;
            }
        }

        if (!found && center == "" && words[i] == rev) {
            center = words[i];
            used[i] = true;
        }
    }

    string result = "";
    for (string s : left) result += s;
    result += center;
    for (int i = right.size() - 1; i >= 0; --i) result += right[i];

    cout << result.size() << endl;
    cout << result << endl;

    return 0;
}
