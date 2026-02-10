#include <bits/stdc++.h>
using namespace std;

void popback() {
    list<int> l;
    l.emplace_front(1);
    l.emplace_front(2);
    l.emplace_front(3);
    l.emplace_front(4);
    l.emplace_front(5);

    l.pop_back();

    for (int val : l) {
        cout << val << " ";
    }
}

int main() {
    popback();
    return 0;
}