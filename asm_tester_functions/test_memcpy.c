/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_memcpy.c description:
**
*/

#include "minilibc.h"

int main(void)
{
	char str1[] = "Geeks";
	char str2[] = "Quiz";

	printf("________________________________________\n\t[TEST MEMCPY]\n");
	printf("Before memcpy ");
	printf("str1: \"%s\"\tstr2: \"%s\"\n\n", str1, str2);

	/* Copies contents of str2 to sr1 */
	printf("copy str2 content to str1\n");
	memcpy (str1, str2, sizeof(str2));

	printf("\nAfter memcpy\n");
	printf(" => str1: \"%s\"\n", str1);
	return (0);
}