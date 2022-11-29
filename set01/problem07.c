#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n,sum;
  n=input_n();
  sum=sum_n_nos(n);
  output(n,sum);
}

int input_n()
{
  int n;
  printf("enter the Nth number:");
  scanf("%d",&n);
  return n;
}

int sum_n_nos(int n)
{
  if (n > 0) {
    return n + sum_n_nos(n - 1);
  } else {
    return 0;
  }

}

void output(int n,int sum)
{
  printf("the sum of %d numbers is %d",n,sum);
}