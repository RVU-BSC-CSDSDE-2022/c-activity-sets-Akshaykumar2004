#include<stdio.h>
#include<math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

void main(){
  Camel a;
  a=input();
  find_weight(&a);
  output(a);
}
Camel input(){
  Camel n;
 printf("enter the stomach radius of the camel:");
  scanf("%f",&n.radius);
  printf("enter the height of the camel:");
  scanf("%f",&n.height);
  printf("enter the length of the camel:");
  scanf("%f",&n.length);
  return n;
}
void find_weight(Camel *c){
  float pi=3.14;
  c->weight = pi * pow(c->radius,3) * sqrt(c->height * c->length);
}
void output(Camel c){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f\n",c.radius,c.height,c.length,c.weight);
}
