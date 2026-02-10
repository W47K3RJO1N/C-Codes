#include <bits/stdc++.h>
using namespace std;

void listemlaceback(){

    list<int> l;

    l.emplace_back(1);
    l.emplace_back(2);
    l.emplace_back(3);
    l.emplace_back(4);
    l.emplace_back(5);
    l.emplace_back(6);
    
    for (int val : l){
        cout << val << " ";
    }
}

int main(){
    listemlaceback();
    return 0;

}