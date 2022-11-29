#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
  int n;
  n=input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the values into array:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n, int a[n])
{
  int i,sum=NULL;
  for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}

void output(int n, int a[n],int sum)
{
  int i;
  printf("the sum of ");
  for(i=0;i<n;i++){
    printf("%d,",a[i]);
  }
  printf(" is %d",sum);
}