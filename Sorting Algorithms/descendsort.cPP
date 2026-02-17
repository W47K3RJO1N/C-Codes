#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec = {3, 6, 8, 2, 0};

    sort( vec.begin() , vec.end() , greater<int> ());

    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;

}