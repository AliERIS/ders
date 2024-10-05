import java.util.Scanner;
public class TestHesapCuzdani
{
public static void main(String[] args)
{

    
    HesapCuzdani hesapCuzdani1 = new  HesapCuzdani(50.00);
    HesapCuzdani hesapCuzdani2 = new  HesapCuzdani(-57.00);

    Scanner klavye = new Scanner(System.in);
    double yatanPara;

    System.out.printf("Birinci hesap cüzdanı nakiye: %8.2f\n",hesapCuzdani1.getBakiye());
    System.out.printf("İkinci hesap cüzdanı nakiye: %8.2f\n",hesapCuzdani2.getBakiye());

    HesapCuzdani aliCuzdani = new  HesapCuzdani(16.00);
    HesapCuzdani abdvCuzdani = new  HesapCuzdani(32.00);

    System.out.printf("Birinci hesap cüzdanı nakiye: %8.2f\n",aliCuzdani.getBakiye());
    System.out.printf("İkinci hesap cüzdanı nakiye: %8.2f\n",abdvCuzdani.getBakiye());
    System.out.println("ne kaa para yatacak");
    yatanPara=klavye.nextDouble();
    aliCuzdani.paraYatir(yatanPara);
    System.out.printf("Birinci hesap cüzdanı nakiye: %8.2f\n",aliCuzdani.getBakiye());
    System.out.println("ne kaa para yatacak");
    yatanPara=klavye.nextDouble();
    abdvCuzdani.paraYatir(yatanPara);
    System.out.printf("Birinci hesap cüzdanı nakiye: %8.2f\n",abdvCuzdani.getBakiye());
}

    
}