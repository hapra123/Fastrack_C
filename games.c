#include<stdio.h>
char toupper(char a)
{
   a=a-32;
   return a;
}
int main()
{
   char a;
   printf("Enter the character:");
   scanf("%c",&a);
   printf("Upper Case:%c",toupper(a));
   return 0;
}

