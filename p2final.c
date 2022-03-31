#include<stdio.h>
int input()
{
  int a;
  printf("Enter the Numbers: ");
  scanf("%d", &a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else if(c>a && c>b)
  {
    return c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("The Largest of %d, %d and %d is %d\n", a, b, c, largest);
}
int main()
{
  int a, b, c, largest;
  a = input();
  b =  input();
  c = input();
  largest = cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}