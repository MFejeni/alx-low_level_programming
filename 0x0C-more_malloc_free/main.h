#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *c2, unsigned int n);
int main(void);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);



#endif
