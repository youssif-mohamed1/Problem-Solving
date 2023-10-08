#include<iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    char x[101], y[101];
    cin >> x >> y;
    for (int i = 0; i < strlen(x); i++)
    {
        x[i] = tolower(x[i]);
        y[i] = tolower(y[i]);
    }
    int n = strcmp(x, y);
    cout << n;
    return 0;
}