#include "stdio.h"

int main()
{
    int i = 8,b=0;
    b=i++ + ++i;
    
    printf("%d",b);

    return 0;
}