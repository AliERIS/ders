//bu arada c dersini de bu dönem aldığım için ben hala c bilmiyorum 
#include "stdio.h"



typedef struct{
    int id;
    char *name;
    float final;


}student;

int main()
{


    student st1,st2;
    st1.name = "ramiz karaeski";
    printf("%s",st1.name);
    st1.final = 30;


}