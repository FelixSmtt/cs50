#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long h;
    
    do
    {
        h = get_long("Height: ");
    }
    while (h < 1 || h > 8);
    
    //printf("Stored: %li\n", h);
    
    for (int y = 1; y <= h; y++)
    {
        //Print Left-Aligned Pyramid
        
        for (int z = 0; z < h - y; z++)
        {
            printf(" ");
        }
        
        for (int x = 0; x < y; x++)
        {
            
            printf("#");
        }
        
        //Print Spacing
        
        printf("  ");
        
        //Print Right-Aligned Pyramid
        
        for (int x = 0; x < y; x++)
        {
            
            printf("#");
        }
        
        printf("\n");
    }
}