#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  100

struct book {
    char title[MAXTITL];
    char author[MXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
        && library[count].title[0] != '\0')
    {
    
    }

    return 0;

}
