//this program calculates simple intrest
#include <stdio.h>
int main()
{ 

float principalamount;
int timegiven;
double ratevalue;


  printf("please enter principalamount:");
 scanf("%f",&principalamount);
 printf("\nplease enter timegiven:");
 scanf("%d",&timegiven);
 printf("\nplease enter ratevalue:");
 scanf("%lf",&ratevalue);
 
 int simpleintrest = (principalamount * timegiven * ratevalue)/100; 
 printf("\nsimpleintrest=%d",simpleintrest);
 
return 0;
}