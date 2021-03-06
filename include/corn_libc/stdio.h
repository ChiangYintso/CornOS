// Copyright (c) 2020, Jiang Yinzuo. All rights reserved.

#ifndef CORN_LIBC_STDIO_H
#define CORN_LIBC_STDIO_H

#include "../../lib/defs.h"
#include "stdarg.h"

/* kern/libs/stdio.c */
int printf(const char *fmt, ...);
int vprintf(const char *fmt, va_list ap);
void putchar(int c);
int puts(const char *str);
int getchar(void);

/* kern/libs/readline.c */
char *readline(const char *prompt);

/* libs/printfmt.c */
int snprintf(char *str, size_t size, const char *fmt, ...);
int vsnprintf(char *str, size_t size, const char *fmt, va_list ap);

#endif /* CORN_LIBC_STDIO_H */
