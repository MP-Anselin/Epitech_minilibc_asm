/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 25/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** strpbrk.c description:
**
*/

#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "This is a sample string";
	char key[] = "aeiou";
	char *pch;

	printf("________________________________________\n\t[TEST STRPBRK]\n");
	printf("Before strpbrk\n");
	printf("str: \"%s\"\tkey: \"%s\"\n", str, key);
	printf (" => the sring is '%s': ",str);
	pch = strpbrk (str, key);
	printf("strpbkr find = ");
	while (pch != NULL)
	{
		printf (" '%c'" , *pch);
		pch = strpbrk (pch+1,key);
	}
	printf("\n");
	return (0);
}