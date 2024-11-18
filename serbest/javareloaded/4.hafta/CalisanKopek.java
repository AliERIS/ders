public class CalisanKopek extends Kopek1 implements Calisan{


private int egitimSaati;



public void setEgitimSaati(int saat)
{

    egitimSaati = saat;
}

public int getEgitimSaati()
{
    return egitimSaati;
}



public void calis()
{
    ses();
    System.out.println("ben çalışan bir köpeğim");
    System.out.println("Profesyonel eğtim için "+egitimSaati+" saat çalışırım");
}







}