#include<iostream>
using namespace std;

int main()
{
    int n, ar1[105], ar2[105], i = 1, m;

    scanf("%d", &n);

    while(i <= n)
    {
        scanf("%d", &ar1[i]);
        i++;
    }

    for(i = 1; i <= n; i++)
    {
        m = ar1[i];
        ar2[m] = i;
    }

    for(i = 1; i <= n; i++)
    {
        printf("%d ", ar2[i]);
    }

    return 0;
}