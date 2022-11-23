#include "reg51.h"

void main()
{
    unsigned char *src, *dest, i;
    src = 0x30;
    dest = 0x40;
    for (i = 0; i < 10; i++)
    {
        *dest = *src;
        dest++;
        src++;
    }
}

#include "reg51.h"

void main()
{
    unsigned char *src, *dest, i;
    src = 0x39;
    dest = 0x3E;
    for (i = 0; i < 10; i++)
    {
        *dest = *src;
        dest--;
        src--;
    }
}

#include "reg51.h"

void main()
{
    unsigned char *src, *dest, i;
    src = 0x30;
    dest = 0x2B;
    for (i = 0; i < 10; i++)
    {
        *dest = *src;
        dest++;
        src++;
    }
}