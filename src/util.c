#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"

void _die(const char *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);

    exit(1);
}
