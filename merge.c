#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j,k;
printf("enter the size of first array");
scanf("%d",&m);
printf("enter the elements of first array (sorted)");
for(i=0;i<m;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the size of second array");
scanf("%d",&n);
printf("enter the elements of second array (sorted array)");
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
i=0;
j=0;
k=0;
while(i<n&&j<n)
{
if (a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while (i<m)
{
c[k]=a[i];
i++;
k++;
}
printf("\n merged array=");
for(i=0;i<m+n;i++)
{
printf("%d",c[i]);
}
}

