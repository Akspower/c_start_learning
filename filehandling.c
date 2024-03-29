#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("Trial.txt", "r");
    ft = fopen("demo.txt", "a");
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}