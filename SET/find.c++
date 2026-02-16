#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4};

    s.erase(2);

    if (s.find(3) != s.end()) {
        cout << "3 Found\n";
    }

    cout << "Size: " << s.size();

    return 0;
}
