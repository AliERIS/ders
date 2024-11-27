public class OverloadTest
{
    public static void main(String[] args)
    {
        double ortalama1 = ortalama(40.0 , 50.0);
        double ortalama2 = ortalama(40.0, 50.0, 55.0);
        double ortalama4 = ortalama(40,60);
        double ortalama5 = ortalama(49,69,44.0);
        System.out.println("ortalama1 = "+ortalama1);
        System.out.println("ortalama2 = "+ortalama2);
        char ortalama3 = ortalama('a','c');
        System.out.println("ortalama3 = "+ortalama3);
        System.out.println("ortalama4 = "+ortalama4);
        System.out.println("ortalama5 = "+ortalama5);
    }

    public static double ortalama(double sayi1, double sayi2)
    {
        return (sayi1+sayi2)/2;
    }

    public static double ortalama(double sayi1, double sayi2, double sayi3)
    {
        return (sayi1+sayi2+sayi3)/3;
    }
    
    public static char ortalama(char harf1, char harf2)
    {
        return (char)(((int)harf1+(int)harf2)/2);
    }


}