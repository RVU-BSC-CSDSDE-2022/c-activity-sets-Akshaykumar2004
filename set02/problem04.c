#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

void main(){
  float r,ht,lg;int mood;
  input_camel_details(&r,&ht,&lg);
  mood=find_mood(r,ht,lg);
  output(r,ht,lg,mood);
  }
void input_camel_details(float *radius, float *height, float *length){
  printf("enter the stomach radius of the camel:");
  scanf("%f",radius);
  printf("enter the height of the camel:");
  scanf("%f",height);
  printf("enter the length of the camel:");
  scanf("%f",length);
}
int find_mood(float radius, float height, float length){
  int res=0;
  if((radius < height) &&(radius < length)){
    res=1;
  }
  else if((height < length) &&(height <  radius)){
    res=2;
  }
  else if(length < (height && radius)){
      res=3;
      }
  return res;
  }
void output(float radius, float height, float length, int mood){
  if(mood==1){
    printf("The camel is sick");
  }
  else if(mood==2){
    printf("The camel is happy");
  }
  else if(mood==3){
    printf("The camel is tense");
  }
  else{
    printf("The camel is normal");
  }
}
