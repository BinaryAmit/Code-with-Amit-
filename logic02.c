#include<stdio.h> // link section
#include<conio.h> // link section
#define pi 3.14 // definition section
int a=10; // global variable declaration
void disp(); // global function declaration
void main() // main function definition
{
float area,r;
printf("enter radius:");
scanf("%f",&r);
area=pi*r*r;
printf("area=%.2f",area);

getch();
}