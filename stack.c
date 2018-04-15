#include <stdio.h>

int MAXSIZE = 7;       
int stack[8];     
int top = -1;            

int isempty() 
{
//nirmal will add here
               
}
   
int isfull()
 {
   if(top = = MAXSIZE)
      return 1;
   else
      return 0;

 }

int peek() {
return stack[top];
}

int pop() 
{
 //prajjwal will add here
}

int push(int data)
 {

  //nishkarsh will add here
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

