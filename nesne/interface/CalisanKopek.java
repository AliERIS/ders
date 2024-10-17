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
public void calis()
{
    ses();
    System.out.println("ben çalışan"+getAd()+ "bir köpeğim");
    System.out.println("Profesyonel Egitim için "+egitimSaati+" saat çalışırım");
}



}