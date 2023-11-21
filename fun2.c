#include<stdio.h>
int getmax(int x,int y) {
  if(x>y) {
    return x;
  }
  else {
    return y;
  }

}
int main() {
  int x =3 , y=6;
  printf("%d",getmax(x,y)); //output:  6
}