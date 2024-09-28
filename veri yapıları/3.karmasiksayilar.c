#include "stdio.h"

struct kompleks
{
    int real;
    int sanal;
};

struct kompleks s1,s2;
struct kompleks *s3;

int main()
{

s3=&s2;    


s1.real = 3;
s1.sanal =7; // doğrudan tanımlanmış yapıda . 
s3 ->real=5; //  point   edilmiş     yapıda ->
s3 ->sanal=6;

printf("%d",s1.sanal);
}