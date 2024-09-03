#include "main.h"

/* Function to handle specifiers */
int handle_specifier(char specifier, va_list args, char *buffer, int *buffer_index)
{
    int count = 0;

    switch (specifier)
    {
        case 'c':
            count = print_char(va_arg(args, int));
            break;
        case 's':
            count = print_string(va_arg(args, char *));
            break;
        case '%':
            count = write(1, "%", 1);
            break;
        case 'd':
        case 'i':
            count = print_number(va_arg(args, int));
            break;
        case 'b':
            count = print_binary(va_arg(args, unsigned int));
            break;
        case 'u':
            count = print_unsigned(va_arg(args, unsigned int));
            break;
        case 'o':
            count = print_octal(va_arg(args, unsigned int));
            break;
        case 'x':
            count = print_hex(va_arg(args, unsigned int), 0);
            break;
        case 'X':
            count = print_hex(va_arg(args, unsigned int), 1);
            break;
        case 'p':
            count = print_pointer(va_arg(args, void *));
            break;
        case 'r':
            count = print_reversed_string(va_arg(args, char *));
            break;
        case 'R':
            count = print_rot13_string(va_arg(args, char *));
            break;
        default:
            count = write(1, &specifier, 1);
            break;
    }

    /* Handle buffer */
    for (int j = 0; j < count; j++)
    {
        buffer[*buffer_index] = 'X';  /* Replace 'X' with the actual character */
        (*buffer_index)++;
        if (*buffer_index == 1024)
        {
            write(1, buffer, *buffer_index);
            *buffer_index = 0;
        }
    }

    return count;
}
