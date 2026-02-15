#include <bits/stdc++.h>
using namespace std;

int main() {
priority_queue<int> q;

q.push(1);
q.push(3);
q.push(4);
q.push(55);

q.pop();
q.pop();

while (!q.empty()){
    cout << q.top() << " ";
    q.pop();
}
cout << endl;
return 0;
}