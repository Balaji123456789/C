#include<stdio.h>
#include<conio.h>
void main() {
  int c=4656;
  int count=0;
  while(c!=0)
  {
       c=c/10;
       count++;
  }
printf("%d digits",count);
}
