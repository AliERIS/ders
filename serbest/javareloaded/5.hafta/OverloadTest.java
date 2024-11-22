public class OverloadTest
{
    public static void main(String[] args)
    {
        double ortalama1 = ortalama(40.0,50.0);
        double ortalama2 = ortalama(1.0,2.0,3.0);
        System.out.println("Ortalama1 = "+ortalama1);

    }

    public static double ortalama(double sayi1, double sayi2)
    {

        return (sayi1+sayi2)/2;

    }

    public static double ortalama(double sayi1, double sayi2, double sayi3)
    {
        return (sayi1+sayi2+sayi3)/3;
    }



}


