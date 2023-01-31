#include<stdio.h>
void read(int *a,int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",a+i);
}
void write(int *a,int n)
{ 
  for(int i=0;i<n;i++)
    printf("%d ",*(a+i));  
} 

void sort(int *a,int n)
{
    int pos,i,j,min;
    for(int i =0;i<n-1;i++)
    {
        pos=i;
        min=a[i];
        for(j=i+1;j<n;j++)
        {
        if(a[j]<min)
        {
        min=a[j];
        pos=j;
        }
        }
        a[pos]=a[i];
        a[i]=min;
    }
}
int main()
{
 int a[20],n,num,index;
 printf("\nEnter size of array ");
 scanf("%d",&n);
 read(a,n);
 write(a,n);
 sort(a,n);
 printf("\n");
 write(a,n);


 return 0;
}
