#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    string hate = "I hate ", love = "I love ",x="it",y="that ";
    int j = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                if (j > 0)
                {
                    cout << y;
                }
                cout << hate;
                j++;
            }
            if (i % 2 == 0)
            {
                if (j >0)
                {
                    cout << y;
                }
                cout << love;
            }
            j++;
        }
        cout << x;
    return 0;
}