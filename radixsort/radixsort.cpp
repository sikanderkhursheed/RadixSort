#include<stdio.h>
#include<conio.h>
int i,j,n,k,exp;
int a[100],b[100],c[100];
void Radixsort();

void main()
{
printf("Enter total no of elements\n");
scanf("%d",&n);
printf("Enter values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
Radixsort();
printf("After radix sort:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getche();
}

void Radixsort()
{
for(i=0;i<n;i++)
{
	b[(a[i]/exp)%10]++;

}

for(i=1;i<10;i++)
{
	b[i]=b[i-1];
}
for(i=n-1;i>=0;i--)
{
c[b[(a[i]/exp)%10]-1]=a[i];
b[(a[i]/exp)%10]--;
}
}