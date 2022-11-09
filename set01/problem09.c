#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n,sqr_rt;
  n=input();
  sqr_rt=square_root(n);
  output(n,sqr_rt);
}
float input()
{
  float n;
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float sq_rt;
  sq_rt=sqrt(n);
  return sq_rt;
}
void output(float n,float sqrroot)
{
  printf("square root of %f is %f",n,sqrroot);
}