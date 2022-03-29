#include <stdio.h>

int main()
{
    int num;
    FILE *input = fopen("in.txt", "r");
    FILE *output = fopen("out.txt", "w");

    while(!feof(input))
    {
        fscanf(input, "%d", &num);
        if (num % 3 == 0)
        {
            fprintf(output, "%d ", num);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
