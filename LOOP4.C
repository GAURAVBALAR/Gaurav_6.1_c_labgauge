#include<stdio.h>
#include<conio.h>
void main(){
int b;
clrscr();
printf("Enter the value of A:");
scanf("%d",&b);
while(b>=1){
if(b%2!=0){
printf("Odd Number Is: % d\n",b);
}
b--;
}
getch();
}