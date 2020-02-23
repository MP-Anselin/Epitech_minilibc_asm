/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 21/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** minilibc.h description:
**
*/#ifndef ASM_MINILIBC_2017_MINILIBC_H
#define ASM_MINILIBC_2017_MINILIBC_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
# include <stdint.h>
# include <sys/types.h>

char *strcpy(char *dest, const char *src);

size_t strlen(const char *s);

ssize_t write(int fd, const void *buf, size_t count);

ssize_t read(int fd, void *buf, size_t count);

void *memcpy(void *dest, const void *src, size_t n);

void *memset(void *s, int c, size_t n);

char *strchr(const char *s, int c);

char *strrchr(const char *s, int c);

int strcmp(const char *s1, const char *s2);

int strncmp(const char *s1, const char *s2, size_t n);

int strcasecmp(const char *s1, const char *s2);

void *memmove(void *dest, const void *src, size_t n);

char *strstr(const char *haystack, const char *needle);

size_t strspn(const char *s, const char *accept);

size_t strcspn(const char *s, const char *accept);

#endif //ASM_MINILIBC_2017_MINILIBC_H
