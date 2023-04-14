#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

int _putchar(char c);

int _strlen(char *s);

char *_memcpy(char *dest, char *src, unsigned int n);

int _isdigit(int c);

char *_memset(char *s, char b, unsigned int n);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif
