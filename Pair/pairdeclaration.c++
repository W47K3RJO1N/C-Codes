#include <bits/stdc++.h>
using namespace std;

void pairs() {
    pair<int, int> p = {1, 2};
    
    cout << p.first << endl;
    cout << p.second << endl;
}

int main() {

    pairs();
    return 0;
}

// for nesting of pairs and pairs

#include <bits/stdc++.h>
using namespace std;

void pairs() {
    pair<int, pair<int, int>> p = {1, { 3 , 2}};
    
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
}

int main() {

    pairs();
    return 0;
}
