#include<bits/stdc++.h>

using namespace std;

int lcmOfArray(int N, int A[]) {
        
    if (N == 1)
        return A[0];
    
    long long l = A[0];
    
    for (int i = 1; i < N; i++) {
        
        long long a = A[i];
        
        l = ((l * a) / __gcd(l, a)) % 1000000007;
    }
    return l;
    
}

int main() {


    return 0;
}