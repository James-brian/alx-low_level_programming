#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char lower_case = 'a';
char Upper_Case = 'A';

/*prints alphabet in lower case */
while (lower_case <= 'z')
{
putchar(lower_case);
++lower_case;
}
/*prints alphabet in upper case*/
while (Upper_Case <= 'Z')
{
putchar(Upper_Case);
++Upper_Case;
}
putchar('\n');
return (0);
}
