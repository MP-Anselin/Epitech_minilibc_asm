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
	char str[] = "GeeksforGeeks";
	char str1[] = "for";
	char str2[] = "";
	char str3[] = "ee";
	char str4[] = "KS";

	printf("________________________________________\n\t[TEST STRSTR]\n");
	printf("Before strstr\n");
	printf("str: \"%s\"\tstr1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\tstr4: \"%s\"\n", str, str1, str2, str3, str4);
	printf("\ntry fo find \"%s\" in \"%s\"\n", str2, str);
	printf(" => %s\n", strstr(str, str2));
	printf("\ntry fo find \"%s\" in \"%s\"\n", str3, str);
	printf(" => %s\n", strstr(str, str3));
	printf("\ntry fo find \"%s\" in \"%s\"\n", str4, str);
	printf(" => %s\n", strstr(str, str4));
	return (0);
}