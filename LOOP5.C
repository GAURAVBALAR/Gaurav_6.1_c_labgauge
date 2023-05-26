#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the Starting Year:");
scanf("%d",&a);
printf("Enter the Ending Year:");
scanf("%d",&b);
c=a;
while(c<=b){
if(c%4==0){
printf("Leap Years Are: %d\n",c);
}
c++;
}



  getch();
}