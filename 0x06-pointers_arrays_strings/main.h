#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
int _islower(char c);
char change_toupper(char c);
char *string_toupper(char *s);
int main(void);
int _putchar(char c);
int is_sep(char c);
char *cap_string(char *s);
char *leet(char *s);



#endif
