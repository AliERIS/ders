public class Kasa{
    private String model;
    private String imalatciFirma;
    private String gucKaynagi;
    private Boyutlar boyutlar;


public Kasa(String model, String imalatciFirma, String gucKaynagi, Boyutlar boyutlar)
{
    this.model = model;
    this.imalatciFirma = imalatciFirma;
    this.gucKaynagi = gucKaynagi;
    this.boyutlar = boyutlar;
}


    public void gucDugmesiniAc()
    {
        System.out.println("Güç düğmesine basildi, bilgisayar açılıyor");
    }


}