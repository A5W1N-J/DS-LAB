#include<stdio.h>
int main()
{
int i,n;
printf("Enter number of elements in Universal Set: ");
scanf("%d",&n);

int U[n],A[n],B[n],uni[n],ints[n],diffA[n],diffB[n],compA[n],compB[n];

printf("Enter elements of Universal Set: ");
for(i=0;i<n;i++)
{
scanf("%d",&U[i]);
A[i]=0;
B[i]=0;
}

int na,nb,x;

printf("Enter number of elements in A: ");
scanf("%d",&na);

printf("Enter elements of A: ");
for(i=0;i<na;i++)
{
scanf("%d",&x);
for(int j=0;j<n;j++)
{
if(U[j]==x)
A[j]=1;
}
}

printf("Enter number of elements in B: ");
scanf("%d",&nb);

printf("Enter elements of B: ");
for(i=0;i<nb;i++)
{
scanf("%d",&x);
for(int j=0;j<n;j++)
{
if(U[j]==x)
B[j]=1;
}
}

printf("\nUniversal Set = {");
for(i=0;i<n;i++)
printf("%d ",U[i]);
printf("}\n");

printf("Set A = {");
for(i=0;i<n;i++)
if(A[i])
printf("%d ",U[i]);
printf("}\n");

printf("Set B = {");
for(i=0;i<n;i++)
if(B[i])
printf("%d ",U[i]);
printf("}\n");

printf("\nUnion in bit representation = ");
for(i=0;i<n;i++)
{
uni[i]=A[i]|B[i];
printf("%d",uni[i]);
}

printf("\nUnion = {");
for(i=0;i<n;i++)
if(uni[i])
printf("%d ",U[i]);
printf("}\n");

printf("Intersection in bit representation = ");
for(i=0;i<n;i++)
{
ints[i]=A[i]&B[i];
printf("%d",ints[i]);
}

printf("\nIntersection = {");
for(i=0;i<n;i++)
if(ints[i])
printf("%d ",U[i]);
printf("}\n");

printf("A-B in bit representation = ");
for(i=0;i<n;i++)
{
diffA[i]=A[i]&(!B[i]);
printf("%d",diffA[i]);
}

printf("\nA-B = {");
for(i=0;i<n;i++)
if(diffA[i])
printf("%d ",U[i]);
printf("}\n");

printf("B-A in bit representation = ");
for(i=0;i<n;i++)
{
diffB[i]=B[i]&(!A[i]);
printf("%d",diffB[i]);
}

printf("\nB-A = {");
for(i=0;i<n;i++)
if(diffB[i])
printf("%d ",U[i]);
printf("}\n");

printf("Complement of A in bit representation = ");
for(i=0;i<n;i++)
{
compA[i]=!A[i];
printf("%d",compA[i]);
}

printf("\nComplement of A = {");
for(i=0;i<n;i++)
if(compA[i])
printf("%d ",U[i]);
printf("}\n");

printf("Complement of B in bit representation = ");
for(i=0;i<n;i++)
{
compB[i]=!B[i];
printf("%d",compB[i]);
}

printf("\nComplement of B = {");
for(i=0;i<n;i++)
if(compB[i])
printf("%d ",U[i]);
printf("}\n");

return 0;
}

