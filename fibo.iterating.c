#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,range;
printf("Enter the range ");
scanf("%d" ,& range);
printf("%d\t%d",a,b);

for(int i=2;i<range;i++){
c=a+b;
a=b;
b=c;

printf("\t%d\t",c);
}

getch();
}