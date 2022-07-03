#include <stdio.h>

/*
 *main - this is the starting point for our code
 *Return: 0 for success
 *
*/
int main(void)
{
char characteri;
int integer;
float floatnumbers;
long int lg_int;
long long int lg_lg_int;

printf("Size of a char : %s byte(s)", sizeof(character));
printf("Size of an int : %s byte(s)", sizeof(integer));
printf("Size of a float : %s byte(s)", sizeof(floatnumbers));
printf("Size of a long integer : %s byte(s)", sizeof(lg_int));
printf("Size of a lomg long integer : %s byte(s)", sizeof(lg_lg_int));
return (0);
}
