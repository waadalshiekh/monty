#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * main - Entry point of the Monty interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE otherwise
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s <file>\n", argv[0]);
exit(EXIT_FAILURE);
}

aya.top = NULL;

FILE *wakes = fopen(argv[1], "r");
if (!wakes)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

char length[256];
int line_number = 0;

fclose(wakes);
return (EXIT_SUCCESS);
}
