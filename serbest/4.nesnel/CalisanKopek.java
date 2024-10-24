public class CalisanKopek extends Kopek1 implements Calisan
{

    private int egitimSaati;
    
    public void setEgitimSaati(int yeniEgitimSaati)
    {
        egitimSaati = yeniEgitimSaati;
    }

    public int getEgitimSaati()
    {
        return egitimSaati;
    }

    public void calis() //implement ettiğimiz şeyi kullanacaksınız adam olacaksınız 
    {
        //ses();
        System.out.println("Ben "+ getAd()+" bir köpeğim");
        System.out.println("Profesyonel bir egitim için " + egitimSaati +" saati çalışırım");



    }

}