#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[30],n,i,j,temp, sorted=0;
printf("\n how many numbers");
scanf("%d",&n);
if(n>30)
{
printf("\n Too many Numbers");
exit(0);
}
printf("\n Enter the array elements \n");
for(i=0 ; i< n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n-1 && sorted==0; i++)
{
sorted=1;
for(j = 0; j < (n - i) -1; j++)
if(a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
sorted=0;
}
}
printf("\n The numbers in sorted order \n");
for(i=0 ; i<n; ++i)
printf("\n %d", a[i]);
return 0;
}
