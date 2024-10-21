#include <stdio.h>
int main()
{
    int a =2,b = -1,c =2,d=5;

    b +=--(++a);
    ++c + = a++;

    d/=c;
    d* = a++;
    printf("%d %d %d %d",a++, ++b,c,d);



}



/*

program bu şekilde linux ortamında derlenemiyor

b+= -- ++a;

ne demek lan bu 
ayı 1 artır sonra bir eksilt sonra b = a+b; so that b= 1

++c + = a++;

bak bu imkansız gibi bir şey atamadan önce c'yi bir artırsam ne artırmasam ne 
c = c+a  bu da 2+2=4  c=4 bir de a =3 b=1 şimdilik ramdeki değerler

d/=c;   d=d/c; dc discord yani hocamız bir konuya işaret ediyor aman dikkat 

d=5 idi 5/4 d=1 gelir buradan bir alt satıra inelim

d*= a++;     d=d*a   buradan d=3 gelir en son da a++ var a 3 idi oldumu sana 4 a=4;

a=4
b=1
c=4;
d=3;
soru ne idi

4 2 4 3    tabi en son a 5 oldu onu es geçmeyelim

yalnız cevap şöyle gelmiş
4 2 5 3 
yani c hatalı c de tek es geçtiğim 7. satır ama zaten çalışmıyor yani keşke şöyle olsaydı c+++=a++;





*/