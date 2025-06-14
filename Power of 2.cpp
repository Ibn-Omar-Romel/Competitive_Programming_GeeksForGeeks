#include<bits/stdc++.h>

using namespace std;

bool isPowerofTwo(int n) {
        
    if (n == 0)
        return true;
        
    if (n && !(n & (n-1)))
        return true;
    return false;
    
}

int main() {


    return 0;
}