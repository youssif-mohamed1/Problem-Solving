#include <iostream>
using namespace std;
int main() {
    int n=0,rows , cols = 3,count=0,k=0;
    cin >> rows;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
        cout << "\n";
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                n++;
            }
            k++;
        }
        if (k == 3 && n < 2)
        {
            n = 0;
            k = 0;
        }
        k = 0;
        if (n >= 2) {
            count++;
            n = 0;
        }
        cout << "\n";
    }
    cout << count<<"\n";
    delete []matrix;
    return 0;
}