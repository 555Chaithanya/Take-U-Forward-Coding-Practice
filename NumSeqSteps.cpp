#include<bits/stdc++.h>
using namespace std;
int NumSeqSteps(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    NumSeqSteps(n);
    return 0;
}