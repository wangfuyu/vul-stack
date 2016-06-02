#include <stdio.h>
#include <string.h>

void hacked()
{
    printf("Enjoy your shell!\n");
    system("/bin/bash");
}

void vulf(char* string)
{
    char buffer[10];
    strcpy(buffer, string);
}

int main(int argc, char** argv)
{
    vulf(argv[1]);
    return 0;
}
