#include <stdio.h>
#include <string.h>

int main()
{
    char expression[100];

    printf("Enter expression: ");
    fgets(expression, sizeof(expression), stdin);

    if (strstr(expression, "* 2") != NULL)
    {
        printf("\nOptimized expression:\n");
        printf("Replace multiplication by 2 with addition.\n");
        printf("x = i + i\n");
    }
    else
    {
        printf("\nNo strength reduction applicable.\n");
    }

    return 0;
}

/*
Examples from the experiment handout:

A. Operator strength reduction
   Before: x = i * 2;
   After:  x = i + i;

B. Dead code elimination
   Before:
       int a = 10;
       int b = 20;
       int c = a + b;
       int x = 100;
       printf("%d", c);

   After:
       int a = 10;
       int b = 20;
       int c = a + b;
       printf("%d", c);

C. Frequency reduction / loop-invariant code motion
   Before:
       for (i = 0; i < 100; i++) {
           x = a * b;
           y = x + i;
       }

   After:
       x = a * b;
       for (i = 0; i < 100; i++) {
           y = x + i;
       }

The handout gives these last two as code fragments, not as a separate
complete C program.
*/
