#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* argc is unused */
	printf("%s\n", argv[0]);
	return (0);
}
