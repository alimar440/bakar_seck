#include <stdio.h>
#include <stdlib.h>

double surf_rect(double a, double b) { return a * b; }
double surf_tria(double a, double b) { return a * b / 2; }
double surf_disq(double a, double b) { return 3.14 * a * a; }

int verif(char *number)
{
    for (int i = 0; number[i] != '\0' ; i++)
    {
        if (number[i] < 48 || number[i] > 57)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        printf("Please Give Normal arguments");
    }
    else
    {
        char *_option = argv[1];
        char *_number_1 = argv[2];
        char *_number_2 = argv[3];

        int option = atoi(argv[1]);
        double number_1 = atof(argv[2]);
        double number_2 = atof(argv[3]);

        if (option == 1)
        {
            printf("%.2f", surf_rect(number_1, number_2));
        }
        else if (option == 2)
        {
            printf("%.2f", surf_tria(number_1, number_2));
        }
        else if (option == 3)
        {
            printf("%.2f", surf_disq(number_1, number_2));
        }
        else
        {
            printf("You Should Entry valid option");
        }
    }

    return 0;
}