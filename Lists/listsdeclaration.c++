// list declaration using push back function

#include <bits/stdc++.h>
using namespace std;

void listdeclaration() {

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for (int val : l) {
        cout << val << " ";
    }
}

int main() {
    listdeclaration();
    return 0;
}
