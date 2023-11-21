#include<stdio.h>
#include<math.h>
int main() {
  struct point {
    int x,y;
  }p1,p2;
  float distance;
  printf("Enter the coordinates of firsrt point:");
  scanf("%d%d",&p1.x,&p1.y);
  printf("Enter the coordinate of second point:");
  scanf("%d%d",&p2.x,&p2.y);
  distance = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
  printf("Distance = %.2f",distance);
}