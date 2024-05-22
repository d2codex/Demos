 /* Build a message using safe string functions */

#include <stdio.h>
#include <string.h>

int main(void)
{
   /* Read a name from the user */

   printf("What is your name? ");
   
   char name[40];
   scanf("%39s", name);

    /* Build a message using this format:
    * 
    *   <name> is learning C.
    * 
    */

   char message[100]; /* Destination string */

   strcpy_s(message, sizeof(message), name );
   strcat_s(message, sizeof(message), " is ");
   strcat_s(message, sizeof(message), "learning C.");

   /* Print out the complete message and automatically returns a new line */
   puts(message);

   return 0;
}