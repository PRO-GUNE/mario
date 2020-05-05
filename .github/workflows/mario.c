#include <stdio.h>
#include <cs50.h>

void PrintMountain(int height);

int main()
{
    int height;
    do
    {height = get_int("Height:");}
    while(!(height >=1 && height<=8));

       PrintMountain(height);

    return 0;
}

void PrintMountain(int height)
{

    int hash = 1;
    int i;

    while(height>0)
    {
        int gap = height;
        while(--gap)
        {   printf(" ");}
        for(i=0;i<hash;i++)
        {   printf("#");}
        printf("  ");
        for(i=0;i<hash;i++)
        {   printf("#");}
        hash++;
        printf("\n");
        --height;
    }

}

