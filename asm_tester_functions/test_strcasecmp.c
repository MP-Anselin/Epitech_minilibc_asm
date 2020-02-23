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
	char str3[] = "left-right";
	char str4[] = "";
	int res = -1;

	printf("________________________________________\n\t[TEST STRCASECMP]\n");
	printf("Before strcasecmp\n");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\tstr4: \"%s\"\n", str1, str2, str3, str4);

	printf("\ncompare str1 and str1\n");
	res = strcasecmp(str1, str1);
	!res ? printf(" => str1 == str1\n") : res > 0 ? printf(" => str1 > str1\tresult: %d\n", res) : printf(" => str1 < str1\tresult: %d\n", res);
	printf("compare str1 and str2\n");
	res = strcasecmp(str1, str2);
	!res ? printf(" => str1 == str2\n") : res > 0 ? printf(" => str1 > str2\tresult: %d\n", res) : printf(" => str1 < str2\tresult: %d\n", res);
	printf("compare str1 and str3\n");
	res = strcasecmp(str1, str3);
	!res ? printf(" => str1 == str3\n") : res > 0 ? printf(" => str1 > str3\tresult: %d\n", res) : printf(" => str1 < str3\tresult: %d\n", res);
	printf("compare str2 and str3\n");
	res = strcasecmp(str1, str4);
	!res ? printf(" => str1 == str4\n") : res > 0 ? printf(" => str1 > str4\tresult: %d\n", res) : printf(" => str1 < str4\tresult: %d\n", res);
	return (0);
}