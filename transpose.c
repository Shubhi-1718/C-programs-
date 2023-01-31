#include<stdio.h>
#include <stdio.h>
void
read (int a[20][20], int r, int c)
{
  printf ("\nEnter %d elements", r * c);
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	scanf ("%d", &a[i][j]);
    }
}

void write (int a[20][20], int r, int c)
{
  printf ("\n elements are\n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	printf ("%d ", a[i][j]);
      printf ("\n");
    }
}
void transpose(int a[][20],int r, int c)
{
    int b[20][20];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        b[j][i]=a[i][j];
    }
    write(b,c,r);
}

int main ()
{
  int a[20][20], b[20][20], r1, r2, c1, c2;
  printf ("\nEnter size of row for matrix 1");
  scanf ("%d", &r1);
     printf ("\nEnter size of column for matrix 1");
  scanf ("%d", &c1);
   printf ("\nEnter size of row for matrix 2");
  scanf ("%d", &r2);
   printf ("\nEnter size of column for matrix 2");
  scanf ("%d", &c2);
  read (a, r1,c1);
  read(b,r2,c2);
  write (a,r1,c1);
    transpose(a,r1,c1);
  return 0;
}
