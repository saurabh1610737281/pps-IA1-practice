#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the Number: ");
  scanf("%d", &n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i =0; i<=n;i++)
  {
    sum = sum +i;
  }
  return sum;
}
void output(int n, int sum)
{
  printf("The Sum of: ");
  for(int i=1; i<n; i++)
  {
    printf("%d + ", i);
  }
  printf("%d ", n-1);
  printf("Numbers are %d  \n", sum);
}
int main()
{
  int n, sum;
  n = input_n();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}