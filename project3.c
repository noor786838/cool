#include<stdio.h>
int main()
{
int choice=0;
printf("pick an item:\n1.pizza.\n2.burger.\n3.pani puri.\n4.biryani");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("food item-pizza");
printf("rs-399");
break;
case 2:
printf("food item-burger");
printf("rs-450");
break;
case 3:
printf("food item-pani puri");
printf("rs-100");
break;
case 4:
printf("food item-biryani");
printf("rs-500");
break;
}
return 0;
}
