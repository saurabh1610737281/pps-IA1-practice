#include<stdio.h>
void input_two_string(char *a, char *b)
{
    printf("Enter the 1st string: ");
    scanf("%s", a);
    printf("Enter the 2nd string: ");
    scanf("%s", b);
}

int cmp(char *a, char *b)
{
    int i,result;
    for(i=0; a[i] && (a[i] == b[i]); i++)
    {
    result = a[i] - b[i];
    }
    return result;
}

void output(char *a, char *b, int result)
{
    if(result < 0)
    {
      printf("%s is greater than %s\n", b, a);
    }
    else if(result > 0)
    {
      printf("%s is greater than %s\n", a, b);
    }
    else
    {
       printf("%s is equal to %s\n", b, a);
    }
}

int main()
{
  char a[50], b[50];
  int result;
  input_two_string(&a, &b);
  result = cmp(&a,&b);
  output(&a, &b, result);
  return 0;
}