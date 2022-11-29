#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

void main(){
  float r,ht,lg,wt;
  input_camel_details(&r,&ht,&lg);
  wt=find_weight(r,ht,lg);
  output(r,ht,lg,wt);
}
void input_camel_details(float *radius, float *height, float *length){
  printf("enter the stomach radius of the camel:");
  scanf("%f",radius);
  printf("enter the height of the camel:");
  scanf("%f",height);
  printf("enter the length of the camel:");
  scanf("%f",length);
}
float find_weight(float radius, float height, float length){
  float pi=3.14;
  float weight;
  weight = pi * pow(radius,3) * sqrt(height * length);
  return weight;
}
void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f\n",radius,height,length,weight);
}