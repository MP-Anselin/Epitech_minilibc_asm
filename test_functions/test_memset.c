/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_memset.c description:
**
*/

#include "minilibc.h"

void printArray(int arr[], int n)
{
	for (int x = 0; x < n; x++)
		printf("%d", arr[x]);
	printf("\" size: 10\n");
}

int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	int n = 10;
	int arr[n];

	printf("________________________________________\n\t[TEST MEMSET ADD 10 ZERO]\n");
	// Fill whole array with 0.
	memset(arr, 0, n * sizeof(arr[0]));
	printf("Array after memset()\n");
	printf(" => str: \"");
	printArray(arr, n);
	printf("\n");

	printf("________________________________________\n\t[TEST MEMSET REPLACE]\n");
	printf("Before memset()\n");
	printf(" => str: %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	memset(str + 13, '.', 8*sizeof(char));
	printf("After memset()\n");
	printf(" => str: %s\n", str);
	return 0;
}