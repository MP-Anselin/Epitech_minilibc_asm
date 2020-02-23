#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "minilibc.h"


int	main(void)
{
  char mystr1[] = "Hello world !\n";
  char buf[BUFSIZ];
  char str2[] = "";
  char str3[] = "worl";
  char str4[] = "toto";
  char c;
  char *p;
  ssize_t ret;

  printf("Test write + sizeof\n");
  ret = write(STDOUT_FILENO, mystr1, sizeof (mystr1));
  printf("=> %d\n", ret);

  printf("Test write + strlen\n");
  ret = write(STDOUT_FILENO, mystr1, strlen(mystr1));
  printf("=> %d\n", ret);

  /*  printf("Test read\n");
  ret = read(STDIN_FILENO, buf, 1);
  printf("=> %d %c\n", ret, *buf);
  */
  //printf("=> %s\n", mystr1);

  printf("Test strlen\n");
  printf("=> %d %d\n", strlen(mystr1), strlen(""));

  printf("Test memset\n");
  p = memset(buf, 0, sizeof (buf));
  printf("=> %p %p [%s]\n", p, buf, p);

  printf("Test strcpy\n");
  p = strcpy(buf, "test");
  printf("=> %s\n", p);
  p = strcpy(buf, mystr1);
  printf("=> %s\n", p);

  printf("Test memcpy\n");
  memset(buf, 0, sizeof (buf));
  p = memcpy(buf, mystr1, strlen(mystr1));
  printf("=> %s\n", p);

  printf("Test strchr\n");
  c = 'o';
  printf("=>o [%s]\n", strchr(mystr1, c));
  printf("=>z [%p]\n", strchr(mystr1, 'z'));

  printf("=> %s\n", strrchr(mystr1, c));

  printf("Test strstr\n");
  printf("=> %s\n", strstr(mystr1, str2));
  printf("=> %s\n", strstr(mystr1, str3));
  printf("=> %s\n", strstr(mystr1, str4));

  printf("Test memmove\n");
  memset(buf, 0, sizeof (buf));
  p = memmove(buf, mystr1, strlen(mystr1));
  printf("=> [%s]\n", p);
  p = memmove(buf, buf + 2, 2);
  printf("=> [%s]\n", p);
  p = memmove(buf + 2, buf, 2);
  printf("=> [%s]\n", p);
  {
    char *test = "test";
    char *test2 = "test";
    char *tes = "tes";
    char *a = "a";
    char *b = "b";

    printf("=> strcmp %d %d %d %d\n", strcmp(test, test2), strcmp(test2, tes),
	   strcmp(tes, test), strcmp(a, b));

    printf("=> strncmp %d %d %d %d\n", strncmp(test, test2, 3), strncmp(test2, tes, 0),
	   strncmp(tes, test, 10), strncmp(a, b, 1));
  }

  {
#if 1
    char *test = "TeSt";
    char *test2 = "tEsT";
    char *tes = "tES";
    char *a = "a";
    char *b = "b";
#else
    char *test = "test";
    char *test2 = "test";
    char *tes = "tes";
    char *a = "a";
    char *b = "b";
#endif
    printf("=> strcasecmp %d %d %d %d\n", strcasecmp(test, test2), strcasecmp(test2, tes),
	   strcasecmp(tes, test), strcasecmp(a, b));

    printf("=> strncasecmp %d %d %d %d\n", strncasecmp(test, test2, 3), strncasecmp(test2, tes, 0),
	   strncasecmp(tes, test, 10), strncasecmp(a, b, 0));
  }

  {
  }
  printf("_____________________\n");
  return (0);
}
