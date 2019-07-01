#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch;
   FILE *fp;

   fp = fopen(temperatura, "r"); // read mode
 
   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of %s file are:\n", temperatura);
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
 
   fclose(fp);
   return 0;
}
