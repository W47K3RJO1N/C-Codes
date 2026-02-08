#include <bits/stdc++.h>
using namespace std;
void pascaltriangle(int n){
    for(int i=0;i<n;i++){
    int val = 1;
    for(int j=0;j<=i;j++){
        cout<<val<<" ";
        val = val * (i - j) / (j + 1);
    }
    cout<<endl;

}
}


int main(){
    int n;
    cin >> n;
    pascaltriangle(n);
    return 0;
}


