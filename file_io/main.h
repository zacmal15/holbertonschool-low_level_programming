#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int fd);
int open_source(char *filename);
int open_dest(char *filename, int fd_from);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);

#endif
