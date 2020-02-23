/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_strcpy.c description:
**
*/

#include "minilibc.h"

int main(void)
{
	char str1[]="Hello Geeks!";
	char str2[] = "GeeksforGeeks";
	char str3[40];
	char str4[40];
	char str5[] = "GfG";

	printf("________________________________________\n\t[TEST STRCPY]\n");
	printf("Before strcpy()\n");
	printf("str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\tstr4: \"%s\"\tstr5: \"%s\"\n\n", str1, str2, "", "", str5);
	printf("copy str1 to str2\n");
	strcpy(str2, str1);
	printf("copy \"Copy successful\" to str3\n");
	strcpy(str3, "Copy successful");
	printf("copy str5 to str4\n");
	strcpy(str4, str5);
	printf("\nAfter strcpy()\n");
	printf (" => str1: \"%s\"\tstr2: \"%s\"\tstr3: \"%s\"\tstr4: \"%s\"\n", str1, str2, str3, str4);
	return (0);
}