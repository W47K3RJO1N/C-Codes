#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> q;

    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);

    q.empty();

    while(!q.empty()) {
        cout << q.empty() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}