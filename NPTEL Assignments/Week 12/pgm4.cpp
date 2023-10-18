#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i,n;
 
//The number of elements in each array is taken from test case data 

 scanf("%d", &n);
  int *a,*b,*c;
 a = (int *) malloc(n*sizeof(int));
 b = (int *) malloc(n*sizeof(int));
 c = (int *) malloc(n*sizeof(int));

// Input Elements of First List;
 for(i=0;i<n;i++)
 {
  scanf("%d",a+i);
 }

 //Input Elements of Second List;
 for(i=0;i<n;i++)
 {
  scanf("%d",b+i);
 }

 for(i=0;i<n;i++)
 {
  *(c+i) = *(a+i) + *(b+i);
 }
 printf("Result is\n");

 for(i=0; i<n; i++)
 {
  printf("%d\n",*(c+i));
 }

return 0;
}
