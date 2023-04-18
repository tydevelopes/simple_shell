#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

extern char **environ;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
char *_getenv(const char *name);
list_t *path_list();
void print_dirs_in_path(void);
char **str_into_tokens(const char *str, char delim, list_t *head);
int has_same_key(char *str, const char *substr);
char *get_value(char *str);
unsigned int key_len(char *str);
int path_exist(const char *str);
int end_with_forward_slash(char *str);
int has_forward_slash(char *str);
char *check_path(char *first_arg, char **dirs, list_t *head);
int _strlen(char *s);
char *_strdup(const char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);

#endif