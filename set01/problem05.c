#include<stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);  
}

int input()
{
  int n;
  scanf("%d",&n);
  return n;
}

int compare(int a,int b,int c)
{
  int max;
  max=NULL;
  if((a>b)&&(a>c))
  {
    max=a;
  }
  else if((b>=a)&&(b>=c))
  {
    max=b;
  }
  else
  {
    max=c;
  }
  return max;
}

void output(int a, int b, int c, int largest)
{
  printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}