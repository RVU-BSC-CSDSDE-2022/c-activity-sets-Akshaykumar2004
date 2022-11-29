#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main(){
  int n;
  n=get_n();
  Complex a[n],result;
  input_n_complex(n,a);
  result=add_n_complex(n,a);
  output(n,a,result);
}
int get_n(){
  int n;
  printf("enter the  number of arrays:");
  scanf("%i",&n);
  return n;
}
void input_n_complex(int n, Complex c[n]){
  int i;
  for(i=0;i<n;i++){
    printf("enter the complex number:");
    scanf("%f %f",&c[i].real,&c[i].imaginary);

  }
}
Complex add_n_complex(int n, Complex c[n]){
  int i;
  Complex sum={0,0};
  for(i=0;i<n;i++){
    sum.real=sum.real+c[i].real;
    sum.imaginary=sum.imaginary+c[i].imaginary;
  }
  return sum;
}
void output(int n, Complex c[n], Complex result)
{
  int i;
  for(i=0;i<n;i++){
  if(i<n-1){
    printf("%f+%fi + ",c[i].real,c[i].imaginary);
  }else{
    printf("%f+%fi = ",c[i].real,c[i].imaginary);
  }
  }
  printf("%f+%fi",result.real,result.imaginary);

}