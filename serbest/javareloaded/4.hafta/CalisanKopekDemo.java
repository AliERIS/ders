public class CalisanKopekDemo
{

    public static void main(String[] args)
    {
        CalisanKopek calisankopek1 = new CalisanKopek();

        CalisanKopek calisankopek2 = new CalisanKopek();

        calisankopek1.setAd("Bekçi Köpke");

        calisankopek2.setAd("Polis Köpke");

        calisankopek1.setEgitimSaati(32);
        calisankopek2.setEgitimSaati(400);



       System.out.println("Birinci çalışan Kopek");
       //calisankopek1.ses();
       calisankopek1.calis();
       System.out.println();
       
        
        System.out.println("İkinci Çalışan; Kopek");
        //calisankopek2.ses();
        calisankopek2.calis();
        System.out.println();

    }


}