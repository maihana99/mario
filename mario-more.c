#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // decleration of interger height
    int height;
    do
    {
        // user input for height of pyramid
        height = get_int("Type the height of the pyrmaid between 1 and 8, all inclusive: ");
    }
    // height must be between 1-8 (inclusive)
    while (height < 1 || height > 8);
    // control of how many times below code should run i.e height = no. times code runs
    for (int num_hash = 0; num_hash < height; num_hash++)
    {
        // iteration for dot(space) prefix to alight left side of hashes
        int total_dots = height - num_hash - 1;
        for (int dots = 0; dots < total_dots; dots++)
        {
            // print spaces for alignment of left side
            printf(" ");
        }
        // iteration for printing hash line left side
        for (int hash_line = 0; hash_line <= num_hash; hash_line++)
        {
            // print hash line (left)
            printf("#");
        }
        printf("  ");
        // iteration for printing hash line right side
        for (int hash_line = 0; hash_line <= num_hash; hash_line++)
        {
            // print hash line (right)
            printf("#");
        }
        // print a new line
        printf("\n");
    }
}