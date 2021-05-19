#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long years = 0;
    long nstart;
    long nend;
    
    do
    {
        nstart = get_long("Start size: "); //prompt for starting population
    }
    while(nstart < 9);
    
    do
    {
        nend = get_long("End size: "); //prompt for starting population
    }
    while(nend < nstart);
    
    while(nstart < nend)
    {
        years++;
        nstart = nstart + nstart / 3 - nstart / 4;
    }
    
    printf("Years: %li", years);
    
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}