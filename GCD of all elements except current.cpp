#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int>prefixGCD(n);
    int a = vec[0];
    prefixGCD[0] = vec[0]; 
    for(int i = 1; i < n; i++) {
        a = gcd(a, vec[i]);
        prefixGCD[i] = a;
    }
    
    vector<int>suffixGCD(n);
    a = vec[n-1];
    suffixGCD[n-1] = a;
    for (int i = n-2; i >= 0; i--) {
        a = gcd(a, vec[i]);
        suffixGCD[i] = a;
    }

    int k;
    cin >> k;
    while(k--) {
        int index;
        cin >> index;

        if (index == 0)
            cout << suffixGCD[index+1] << endl;
        else if (index == n-1)
            cout << prefixGCD[n-2] << endl;
        else {
            cout << gcd(prefixGCD[index-1], suffixGCD[index+1]) << endl;
        }
    }
}

int main() {

    solve();
    return 0;
}