import java.util.Scanner;
public class TestHesapCuzdani
{


    public static void main (String[] Abudullahulaziym)
    {

        HesapCuzdani hesapCuzdani1 = new HesapCuzdani(50.00);
        HesapCuzdani hesapCuzdani2 = new HesapCuzdani(-25.3);
 
        Scanner klavye = new Scanner(System.in);

        double yatanPara;

        System.out.printf("Birinci hesap cuzdani bakiye: %8.2f\n",hesapCuzdani1.getBakiye());
        //neymiş Prof Dr. Nuri Murat YAĞMURLU'ya ters düşecek şekilde .println yazmak ahmakçaymış
        //adam prof prof sen ne kafana göre kod yazıyorsun
        //System.out.println("aaaasd"+hesapCuzdani1.getBakiye())   ;
        //println kullanacaksan üstteki gibi olacak diyor ve bunu da aradan çıkarıyorum saygılar hocam


        System.out.printf("İkinci hesap cüzdani bakiye : %8.2f\n",hesapCuzdani2.getBakiye());


        HesapCuzdani volkaninCuzdani = new HesapCuzdani(200.00);
        HesapCuzdani ciseminCuzdani = new HesapCuzdani(300.00);

        System.out.printf("Volakanin hesap cüzdani bakiyesi : %8.2f\n",volkaninCuzdani.getBakiye());
        System.out.printf("Cİsemin hesap cüzdani bakiyesi : %8.2f\n",ciseminCuzdani.getBakiye());

        System.out.println("Volkanın hesabına ne kadar yatacak");
        yatanPara = klavye.nextDouble();

        volkaninCuzdani.paraYatir(yatanPara);
        System.out.println("csmin hesabına ne kadar yatacak");
        yatanPara = klavye.nextDouble();

        ciseminCuzdani.paraYatir(yatanPara);
        System.out.printf("Volakanin hesap cüzdani bakiyesi : %8.2f\n",volkaninCuzdani.getBakiye());
        System.out.printf("Cİsemin hesap cüzdani bakiyesi : %8.2f\n",ciseminCuzdani.getBakiye());





    }





}