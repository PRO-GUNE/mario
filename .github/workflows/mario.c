//Mario.c

#include <stdio.h>
#include <cs50.h>

void PrintMountain(int height);

int main()
{
    int height;

    //Checks for valid user input and recurses if the input is invalid
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

        //Inserts the initial gaps before the hashes
        while(--gap)
        {   printf(" ");}

        //Inserts the Hashes
        for(i=0;i<hash;i++)
        {   printf("#");}

        //Inserts the blanks in the middle
        printf("  ");

        //Inserts the final hashes
        for(i=0;i<hash;i++)
        {   printf("#");}

        //Increments the variables and goes to the next line
        hash++;
        printf("\n");
        --height;
    }

}
