//
// Created by honglin ma on 2018/5/8
//

#include <stdio.h>

int celsius(int f);

main()
{
    int lower, upper, step;
    int fahr;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while(fahr <= upper) {
        printf("%d\t%d\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

int celsius(int f)
{
    return 5 * (f - 32) / 9;
}


