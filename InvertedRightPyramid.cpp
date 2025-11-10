#include<bits/stdc++.h>
using namespace std;

int InvRightPyramid(int n);

int main() {
    int n;
    cin >> n;
    InvRightPyramid(n);
    return 0;
}
int InvRightPyramid(int n){
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}