#include<bits/stdc++.h>
using namespace std;

int StepNumPattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    StepNumPattern2(n);
    return 0;
}