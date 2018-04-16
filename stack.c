#include <stdio.h>

int MAXSIZE = 7;
int stack[8];
int top = -1;
int isempty()
{
//added by nirmal
  if(top = = -1)

      return 1;

   else

      return 0;
}
int isfull()
{
if(top == MAXSIZE)
return 1;
else
return 0;
}
int peek()
{
return stack[top];
}
int pop()
{
//Commits done by Prajjawal//
int data;
if(!isempty())
{
data = stack[top];
top = top - 1;
return data;
}
else
{
printf("Could not retrieve data, Stack is empty.\n");
}
}

int push(int data)
{
	////Commits done by Nishkarsh Raj Khare
if(isfull())
{
	printf("The Stack is full! Cannot Enter data any further\n Please Delete first before further Insertion\n");
}
else if(isempty())
{
	printf("Entering First Element");
	stack[++top]=data;
}
else
{
	stack[++top]=data;
}
}

int main() {
   // push items on to the stack 
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}

