#include <stdio.h>
#include <stdlib.h>


/*
calculate statistics:
Count
Min
Max
Average
*/

/*since we want the user to be able to put in as many inputs as they want,
we can't save them all, right? Since we do not know how many inputs it is
going to be. Even if we put them all in an array, we need to know how
big the array is beforehand...

So we will not save the user inputs
*/
double calcAvg (double sum, int size);

int main()
{
    // Initialisations
    double input;
    int cnt = 0;
    double min;
    double max;
    double avg;
    double sum;

    //1st iteration
    printf(": ");
    scanf("%lf", &input);
    if (input<=0)
    {
        printf("no number entered");
        return 0;
    }
    cnt++;
    min = input;
    max = input;
    sum = input;

    //subsequent iterations
    while (input>0)
    {
        printf(": ");
        scanf("%lf", &input);
        if (input>0)
        {
            cnt++;
            if (input<min)
            {
                min = input;
            }
            if (input>max)
            {
                max = input;
            }
            sum += input;
        }

    }
    avg = calcAvg(sum, cnt);
    printf("cnt: %d\n", cnt);
    printf("min: %.02f\n", min);
    printf("max: %.02f\n", max);
    printf("avg: %.02f", avg);
    return 0;
}

double calcAvg (double sum, int size)
{
    double avg = sum/(double)size;
    return avg;
}
