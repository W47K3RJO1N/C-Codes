#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    for(auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
