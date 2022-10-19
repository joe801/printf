#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * * main - Entry point
 * *
 * * Return: Always 0
 * */
int main(void)
{
	_printf("printing string argument %s %s \n", "joseph", "james");
	printf("printing string argument %s %s \n", "joseph", "jude");
	_printf("percentage %% %% \n");
	printf("percentage %% %% \n");
	_printf("character: %c \n", 'J');
	printf("character: %c \n", 'j');
	return (0);
}
