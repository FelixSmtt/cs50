#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long years = 0;
    long nstart;
    long nend;
    
    // TODO: Prompt for start size
    
    do
    {
        nstart = get_long("Start size: "); //prompt for starting population
    }
    while (nstart < 9);
    
    // TODO: Prompt for end size
    
    do
    {
        nend = get_long("End size: "); //prompt for starting population
    }
    while (nend < nstart);
    
    // TODO: Calculate number of years until we reach threshold
    
    while (nstart < nend)
    {
        years++;
        nstart = nstart + nstart / 3 - nstart / 4;
    }
    
    // TODO: Print number of years
    
    printf("Years: %li", years);
}