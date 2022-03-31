#include<stdio.h>
float input()
{
  float n;
  printf("Enter the Number to Find the square Root: ");
  scanf("%f", &n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result, t;
  sqrt_result = n/2;
  t = 0;
  while(sqrt_result != t)
  {
    t=sqrt_result;
    sqrt_result = ((n/t)+t)/2;
  }
  return sqrt_result;
}
void output(float n, float sqrt_result)
{
  printf("The Squareroot of %.3f = %.3f\n", n, sqrt_result);
}
int main()
{
  float n, sqrt_result;
  n = input();
  sqrt_result = my_sqrt(n);
  output(n, sqrt_result);
  return 0;
}