package paket1;

public class Sinif1
{

    public static int x = 1; //heryerden erişim
    protected static int y = 2; // bu sınıf ve childları seviyesinde 
    static int z = 3; //paket sevisinde
    private static int u = 4;// sadece bu sınıf 


    
    protected static void m()
    {
        System.out.println("Deneme");
    }

}