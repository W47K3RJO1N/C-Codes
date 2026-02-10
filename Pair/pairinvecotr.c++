#include <bits/stdc++.h>
using namespace std;

void pairinvector(){
    vector<pair<int , int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({4, 5});

    for (auto p : vec) {
        cout << p.first << " " << p.second << endl;
   
    }
}

int main () {
    pairinvector();
    return 0;
}