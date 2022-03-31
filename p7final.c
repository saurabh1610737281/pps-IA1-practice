#include<stdio.h>
typedef struct _complex
{
    float real;
    float imaginary;
}Complex;


Complex input()
{
    Complex a;
    printf("Enter the Real part: ");
    scanf("%f", &a.real);
    printf("Enter the Imaginary part: ");
    scanf("%f", &a.imaginary);
    return a;
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main()
{
    Complex a, b, sum;
    a = input();
    b = input();
    sum = add(a, b);
    output(a,b, sum);
    return 0;
}
