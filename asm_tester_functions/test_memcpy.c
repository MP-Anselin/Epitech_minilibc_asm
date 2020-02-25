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
	char str3[] = "Test";

	printf("________________________________________\n\t[TEST MEMCPY]\n");
	printf("Before memcpy ");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr2: \"%s\"\n\n", str1, str2, str3);

	/* Copies contents of str2 to sr1 */
	printf("copy str2 content to str1\n");
	memcpy (str1, str2, sizeof(str2));
	printf("copy str2 content to str3 test with wrong size\n");
	memcpy (str3 + 16, str2, 8);

	printf("\nAfter memcpy\n");
	printf(" => str1: \"%s\"\n", str1);
	printf(" => str3: \"%s\"\n", str3);
	return (0);
}