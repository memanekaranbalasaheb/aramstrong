#include<stdio.h>

void  main() {
  int num, r,c,sum=0,temp;

  printf("\n enter a number");
  scanf("\n %d",&num );
  temp=num;

while(num>0)
  {
    r=num%10;
    c=r*r*r;
    sum= sum+c;
    num=num/10;

  }
  num=temp;
if (num==sum)
 {
printf("\n armstrong number" );
}
else
{
printf("\n not a an armstrong" );
}

}
