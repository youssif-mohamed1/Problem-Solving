#include<iostream>
#include<vector>
#include<math.h>
#include<cmath>
#include<algorithm>
///#include<bits/stdc++.h>
using namespace std;

#define ll long long;
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 5; i <= sqrtN; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

long long divo(long long n,long long start) {
    for (long long i = start; i*i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
}

bool compare(pair<long, int>a, pair<long, int>b) {
    if (a.second != b.second){
        return a.first < b.first;
    }
    return false;
}

void sorto(vector<pair<long, int>>&v,int n) {
    pair<long, int>t(0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            if (v[j].first > v[j+1].first)
            {
                if (v[j].second != v[j + 1].second)
                {
                    t = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = t;
                }
            }
        }
    }
}

void test() {
     int n,e=0,o=0;
    cin >> n;
    bool flag = 0;
    vector<pair<long,int>>v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first ;
    for (int i = 0; i < n; i++) {
        cin >> v[i].second;
        if (v[i].second == 1) e++;
        else if (v[i].second == 0)o++;
    }
    if (e > 0 && o > 0){
        flag = 0;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                flag = 1;
            }
        }
    }
    if (flag)
    {
        cout << "NO";
    }
    else {
        cout << "YES";
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    YJooe int t = 1; cin >> t;
    while (t--) { test(); cout << "\n\n\n"; }
}

