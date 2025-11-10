#include<bits/stdc++.h>
using namespace std;

int RevNumSteps(int n);

int main() {
    int n;
    cin >> n;
    RevNumSteps(n);
    return 0;
}

int RevNumSteps(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}