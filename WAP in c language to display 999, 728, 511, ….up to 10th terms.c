#include<stdio.h>
int main()
{
int j = 999;
int i = 1;
int d = 271;
int D = 54;
for (i; i<=10; i++)
{
printf("%d \n", j);
j = j - d;
d=d-D;
}
    return 0;
}