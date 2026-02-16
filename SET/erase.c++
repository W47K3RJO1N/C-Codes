#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    s.erase(20);   // removes 20

    for (auto x : s)
        cout << x << " ";

    return 0;
}
