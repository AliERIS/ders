public class OverloadTest
{
    public static void main(String[] args)
    {
        double ortalama1 = ortalama(40.0,50.0);
        double ortalama2 = ortalama (40, 50, 60);
        char ortalama3 = ortalama('a','c');
        double ortalama4 = ortalama(40,60);
       double ortalama5 = ortalama
       
        // double ortalama5 = ortalama('a','c';) //saçmalama böyle bir şey yok
        System.out.println("ortalama1 ="+ortalama1);
        System.out.println("ortalama2 ="+ortalama2);
        System.out.println("ortalama3 ="+ortalama3);
        System.out.println("ortalama4 ="+ortalama4);
        //System.out.println("ortalama5 ="+ortalama5); 




    }


public static double ortalama(double sayi1, double sayi2)
    {

        return (sayi1+sayi2)/2;


    }

public static double ortalama(int sayi1,int sayi2, int sayi3)
{

    return (sayi1+sayi2+sayi3)/3;
}


public static char ortalama(char sayi1, char sayi2)
    {

        return (char)(((int)sayi1+(int)sayi2)/2);


    }



}