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
int findmax(int *a,int n)
{
    int max;
    max=*a;
    for(int i=0;i<n;i++)
    {
        if(max<*(a+i))
        max=*(a+i);
    }
    return max;
}
int search(int *a,int n,int num)
{
    for(int i =0;i<n;i++)
    {
        if(num==*(a+i))
        return i;
    }
    return -1;
}
int main()
{
 int a[20],n,num,index;
 printf("\nEnter size of array ");
 scanf("%d",&n);
 read(a,n);
 write(a,n);
 printf("\n%d ",findmax(a,n));
 printf("\nEnter a number to find in array");
 scanf("%d",&num);
 index=search(a,n,num);
 if(index==-1)
 printf("\nValue not found ");
 else
 printf("\nValue found at index %d",index);
 return 0;
}
