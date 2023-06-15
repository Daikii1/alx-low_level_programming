#include <stdio.h>
/**
 * main - Entry point
 * description:size of various types in c language
 * *Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i bytes(s)\n", sizeof(int));
	printf("Size of long: %i bytes(s)\n", sizeof(long int));
	printf("Size of long long int : %i bytes(s)\n", sizeof(long long int));
	printf("Size of float: %i bytes(s)\n", sizeof(float));
	printf("Size of double: %i bytes(s)\n", sizeof(double));
	return (0);
}

