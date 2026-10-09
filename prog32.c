#include<stdio.h>
int main()
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
printf("n1 is the greatestnumber");
else if (n2>n1 && n2>n3)
printf("n2 is greatestnumber");
else
printf("n3 is the greatestnumber");
return 0;
}
