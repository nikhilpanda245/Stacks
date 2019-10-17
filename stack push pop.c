#include<stdio.h>
#include<stdlib.h>
int max=10, tos=-1, i;
int stack[10];
void push();
void pop();
void disp();
int main()
{
 int d;
 char ans;
 printf("\n 1. Push Element \n 2.Pop element \n 3.Display stack");
 while(1)
 {
 printf("\n\n choose Option: ");
 scanf("%d",&d);
 switch(d)
 {
  case 1:push();
    break;
  case 2:pop();
    break;
  case 3:disp();
    break;
  case 4:exit(0);
  default:printf("Invalid Choice");
    break;
 }
 }
 
 return 0;
}
void push()
{
 int x;
 printf("\n Enter Elemnet to push:");
 scanf("%d",&x);
 if(tos==max-1)
  printf("\n Overflow!!");
 else
 {
  tos=tos+1;
  stack[tos]=x;
 }
 printf("\n The stack is: ");
 disp();
}
void pop()
{
 if(tos==-1)
  printf("\n Underflow!!");
 else
 {
  stack[tos]=0;
  tos=tos-1;
 }
  printf("\n The stack is: "); 
  disp(); 
}
void disp()
{ 
 if(tos==-1)
 {
  printf("Empty!");
 }
 else
 {
 for(i=0;i<=tos;i++)
 {
  printf("%d",stack[i]);
  printf("\n");
 }
 }

}






