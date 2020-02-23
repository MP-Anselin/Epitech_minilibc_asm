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
	int size = 3;

	printf("________________________________________\n\t[TEST STRNCASECMP]\n");
	printf("Before strncasecmp\n");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\tstr4: \"%s\"\n", str1, str2, str3, str4);

	printf("\ncompare str1 and str1\n");
	size = 3;
	res = strncasecmp(str1, str1, size);
	!res ? printf(" => str1 == str1\tsize: %d\n", size) : res > 0 ? printf(" => str1 > str1\tsize: %d\tresult: %d\n", size, res) : printf(" => str1 < str1\tsize: %d\tresult: %d\n", size, res);
	printf("compare str1 and str2\n");
	size = 5;
	res = strncasecmp(str1, str2, size);
	!res ? printf(" => str1 == str2\tsize: %d\n", size) : res > 0 ? printf(" => str1 > str2\tsize: %d\tresult: %d\n",size, res) : printf(" => str1 < str2\tsize: %d\tresult: %d\n", size, res);
	printf("compare str1 and str3\n");
	size = 4;
	res = strncasecmp(str1, str3, size);
	!res ? printf(" => str1 == str3\tsize: %d\n", size) : res > 0 ? printf(" => str1 > str3\tsize: %d\tresult: %d\n",size, res) : printf(" => str1 < str3\tsize: %d\tresult: %d\n", size, res);
	printf("compare str2 and str3\n");
	size = 6;
	res = strncasecmp(str1, str4, size);
	!res ? printf(" => str1 == str4\tsize: %d\n", size) : res > 0 ? printf(" => str1 > str4\tsize: %d\tresult: %d\n",size, res) : printf(" => str1 < str4\tsize: %d\tresult: %d\n", size, res);
	return (0);
}