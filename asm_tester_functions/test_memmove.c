/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_memset.c description:
**
*/

#include "minilibc.h"

int main(void)
{
	char str1[] = "Geeks";  // Array of size 100
	char str2[]  = "Quiz";  // Array of size 5
	char str3[]  = "Test";  // Array of size 5
	char csrc[100] = "Geeksfor";


	printf("________________________________________\n\t[TEST MEMMOVE]\n");
	printf("Before memmove\n");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"csrc: \"%s\"\n", str1, str2, str3, csrc);

	/* Copies contents of str2 to sr1 */
	printf("\nmove str2 content to str1\n");
	memmove(str1, str2, sizeof(str2));
	printf("add csrc: \"%s\" to csrc+5: \"%s\"\n", csrc, "Geeks");
	memmove(csrc+5, csrc, strlen(csrc)+1);
	printf("\nmove str2 content to str3\n");
	memmove(str3 + 1, str2 + 0, 8);

	printf("\nAfter memmove\n");
	printf(" => str1: \"%s\"\n", str1);
	printf(" => str3: \"%s\"\n", str3);
	printf(" => csrc: \"%s\"\n", csrc);
	return (0);
}