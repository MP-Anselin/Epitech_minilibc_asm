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
	char str1[] = "left";
	char str2[] = "right";
	char str3[] = "left";

	printf("________________________________________\n\t[TEST STRCMP]\n");
	printf("Before strcmp\n");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\n", str1, str2, str3);

	printf("\ncompare str1 and str1\n");
	!strcmp(str1, str1) ? printf(" => str1 == str1\n") : printf(" => str1 != str1\n");
	printf("compare str1 and str2\n");
	!strcmp(str1, str2) ? printf(" => str1 == str2\n") : printf(" => str1 != str2\n");
	printf("compare str1 and str3\n");
	!strcmp(str1, str3) ? printf(" => str1 == str3\n") : printf(" => str1 != str3\n");
	printf("compare str2 and str3\n");
	!strcmp(str2, str3) ? printf(" => str2 == str3\n") : printf(" => str2 != str3\n");
	return (0);
}