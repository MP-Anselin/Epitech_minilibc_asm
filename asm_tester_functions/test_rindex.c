/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 25/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** rindex.c description:
**
*/
#include "minilibc.h"

int main(void)
{
	// initializing variables
	char str1[] = "My name is Ayush";
	char str[] = "GeeksforGeeks";
	char seek = 'a';
	char seek1 = 'e';
	char* chr_res = NULL;
	char seek2 = 'm';

	printf("________________________________________\n\t[TEST RINDEX]\n");
	printf("Before rindex\n");
	printf("str: \"%s\"\tstr1: \"%s\"\tlook for seek: '%c'\tlook for seek1: '%c'\tlook for seek2: '%c\n", str, str1, seek, seek1, seek2);
	// Use of strrchr()
	// returns "ks"
	printf("\nAfter rindex\n");
	printf("look for '%c' in \"%s\"\n", seek1, str);
	chr_res = rindex(str, seek1);
	printf(" => result: \"%s\"\n", chr_res);
	// Use of strrchr()
	// returns null
	// test for null
	printf("look for '%c' in \"%s\"\n", seek2, str);
	chr_res = rindex(str, seek2);
	printf(" => result: \"%s\"\n", chr_res);

	return (0);
}