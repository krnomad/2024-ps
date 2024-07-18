#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
#define MAX_VALUE 1000000

int gcd(int n, int m) {
    int biggerValue = max(n, m);
    int lowValue = min(n, m);
    for ( int i=lowValue; i!=0; i-- ) {
        if ( n % i == 0 && m % i == 0 ) return i;
    }
    
    return -1;
} // 최대 공약수

int mcd(int n, int m) {
    int biggerValue = max(n, m);
    for ( int i=biggerValue; i<=MAX_VALUE; i++ ) {
        if ( i % n == 0 && i % m == 0 ) return i;
    }
    
    return -1;
} // 최소 공배수

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(mcd(n,m));
    return answer;
}