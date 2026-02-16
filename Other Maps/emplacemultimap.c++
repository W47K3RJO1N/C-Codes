#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<string , int> m;

   

    m.emplace("iphone", 100);
    m.emplace("iphone", 100);
    m.emplace("iphone", 100);
    m.emplace("iphone", 100);


    for (auto p : m) {
        cout << p.first << " " << p.second << endl;

    }
    
    return 0;
}
