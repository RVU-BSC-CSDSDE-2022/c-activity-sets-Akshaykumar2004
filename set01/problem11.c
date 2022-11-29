#include<stdio.h>
struct _complex{
	float real;
  float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);


int main(){
  Complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
}
Complex input_complex()
{
  Complex n;
  printf("enter the real part of a number:");
  scanf("%f",&n.real);
  printf("enter the imaginary part of a number:");
  scanf("%f",&n.imaginary);
  return n;
}
Complex add_complex(Complex a,Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex sum)
{
  printf("the sum of %f+%fi and %f+%fi is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

