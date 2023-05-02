#include<stdio.h>
#include<conio.h>


int stack[100];
int i,j;
int choice=0;
int n;
int top=-1;
void push();
void pop();
void show();


void main(){
clrscr();
printf("Enter the number of elements in the stack ");
scanf("%d", &n);

while(choice!=4) {
printf("Choose one from the below options....\n");
printf(" Choose one from the below options ...1Push 2.Pop 3.Show\ 4.exit\n");
printf("\nEnter your choice");
scanf("%d",&choice);
switch(choice){
case 1 :
{ push();
break;
}

case 2 :
{
pop();
break;
}
case 3 :
{
void show();
break;
}
case 4 :
{
printf("Existing..");

break; }

default:
{
printf("Please enter valid choice");
}
};
}
}


void push()
{
int val;
if(top==n)
printf("\n Overflow");
else
{
printf("Enter the value");
scanf("%d", &val);
top=top+1;
stack[top]=val;
}
}

void pop()
{
if(top==-1)
printf("Underflow");
else
top=top-1;

}
void show()
{
for(i=top;i>=0;i--){
printf("%d\n" , stack[i]);
}

if(top==-1){
printf("Stack is empty");
}
}

