#include <bits/stdc++.h>
using namespace std;
void concentricnumbersquare(int n){
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
        int top = i-1;
        int left = j-1;
        int right = 2*n-1-j;
        int bottom = 2*n-1-i;
        int val = n - min(min(top,bottom), min(left,right));
        cout<<val;
    }
    cout<<endl;
}
}

int main(){

    int n = 4;
    concentricnumbersquare(n);
    return 0;
}

