/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_strlen.c description:
**
*/

#include "minilibc.h"

int main(void)
{
	char str[] = "Hello world !";
	ssize_t ret;

	printf("________________________________________\n\t[TEST WRITE + SIZEOF]\n");
	write(STDOUT_FILENO, " => str: ", sizeof(" => str:"));
	write(STDOUT_FILENO, "\"", 1);
	ret = write(STDOUT_FILENO, str, sizeof(str));
	write(STDOUT_FILENO, "\"\n", 2);
	printf(" => str: \"%s\" size: %zd\n\n", str, ret);

	printf("________________________________________\n\t[TEST WRITE + STRLEN]\n");
	write(STDOUT_FILENO, " => str: ", sizeof(" => str:"));
	write(STDOUT_FILENO, "\"", 1);
	ret = write(STDOUT_FILENO, str, strlen(str));
	write(STDOUT_FILENO, "\"\n", 2);
	printf(" => str: \"%s\" size: %zd\n\n", str, ret);

	printf("________________________________________\n\t[TEST STRLEN]\n");
	printf(" => str: \"%s\" size: %lu\n", str, strlen(str));
	printf(" => str: \"%s\" size: %lu\n", "", strlen(""));
	return (0);
}