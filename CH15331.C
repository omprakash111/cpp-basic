#include<stdio.h>
int main()
{
  char name[]="klinsman";
  char *ptr;  int i=0;
  ptr=name;
  while(*ptr!='\0')
  {
   printf("\n ptr  %u  name %u",ptr,name);
    ptr++;


  }


    printf("\n");
    return 0;



}