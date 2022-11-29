#include<stdio.h>
#include<math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
  Point x,y;
  float res;
  x=input();
  y=input();
  dist(x,y,&res);
  output(x,y,res);
}
Point input(){
  Point n;
  printf("enter the values of point:");
  scanf("%f%f",&n.x,&n.y);
  return n;
}
void dist(Point a, Point b, float *res){
  float p,q;
  p=(b.x-a.x);
  q=(b.y-a.y);
  *res=sqrt(pow(p,2)+pow(q,2));
}
void output(Point a, Point b, float res)
{
  printf("the distance between a and b is %f",res);
}