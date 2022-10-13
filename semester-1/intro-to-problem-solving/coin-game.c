#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; (2 * i) < n; i++)
    {
        sum = sum + a[2 * i];
    }
    int summ = 0;
    for (int i = 0; ((2*i)+1) < n; i++)
    {
       summ=summ+a[(2*i)+1];
    }
    if (sum>=summ)
    {
        printf("%d",(summ*2));
    }
    else
    {
        printf("%d",(sum*2));
    }
    return 0;
}
