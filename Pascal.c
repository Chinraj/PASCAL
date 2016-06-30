#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,n;
clrscr();
printf("Enter the pascal value");
scanf("%d",&a);
for(i=0;i<a;i++)
{
n=1;
for(j=0;j<=i;j++)
{
printf("%d",n);
n=(n*(i-j)/(j+1));
}
printf("\n");
}
getch();
}
