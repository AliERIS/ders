public class HayvanDemo
{

    public static void main(String[] ebuhuzeyfe)
    {
        Inek inek1 = new Inek();
        Kopek kopek1= new Kopek();
        Yilan yilan1 = new Yilan();

        kopek1.setAd("Kangal"); //parametre alması illa değer döndürmesi anlamına mı geliyor öyle olsa
        inek1.setAd("Kızıl İnek");
        yilan1.setAd("Kobra Murat");

        System.out.print(kopek1.getAd()+ "   ");
        kopek1.ses();
        System.out.println("  diye ses çıkarır");

        System.out.print(inek1.getAd()+ "   ");
        inek1.ses();
        System.out.println("  diye ses çıkarır");

        System.out.print(yilan1.getAd()+ "   ");
        yilan1.ses();
        System.out.println("  diye ses çıkarır");


    }


}