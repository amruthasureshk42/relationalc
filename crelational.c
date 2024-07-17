#include<stdio.h>
int main()
{
int x,y,z,n;
printf("Enter x value: ");
scanf("%d",&x);
printf("Enter y value: ");
scanf("%d",&y);
printf("Enter n value: ");
scanf("%d",&n);
switch (n)
{
 case 1:
     z=x<y;
     if(z==1)
         printf("True");
     else
         printf("False");
     break;
 case 2:
    z=x>y;
    if(z==1)
         printf("True");
     else
         printf("False");
    break;
 case 3:
    z=x<=y;
    if(z==1)
         printf("True");
     else
         printf("False");
    break;
 case 4:
    z=(x*x-y)>(y*y-x);
    if(z==1)
         printf("True");
     else
         printf("False");
    break;
 case 5:
    z=(x*x*x)<(y*x*x);
    if(z==1)
         printf("True");
     else
         printf("False");
    break;
 case 6:
    z=((x*y)!=(y*x));
    if(z==1)
         printf("True");
     else
         printf("False");
    break;
 case 7:
    z=((x*y)==(y*x));
    if(z==1)
         printf("True");
     else
         printf("False");
    break;


}
return 0;
}
