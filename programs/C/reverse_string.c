//Program to reverse a string in C
#include<stdio.h>
char* reverseString(char []);

char* reverseString(char str[1000])
{
  static char reversed[1000];
  int i,length;
  //Getting lenth of the string
  for(i=0;str[i]!='\0';i++);
  length=i;

  //Creating a string "reversed" with the elements of string str in reverse order
  for(i=length-1;i>=0;i--)
  {
    reversed[length-i-1]=str[i];
  }
  return reversed;
}
void main()
{
  char str[1000];
  printf("Enter a string-");
  scanf("%s",str);
  printf("Reversed string is-%s\n",reverseString(str));
}
