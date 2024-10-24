public class Kopek1 extends Hayvan1
{

public Kopek1() //kurucu metod acep bu constructive method olabilir mi? türkçe eğitim kötü bir şey
{



}

/*
public Kopek1(String ilkAd)
{
    super.setAd(ilkAd);
}
*/          







    @Override //ayaklar altına aldın bizi , o büyük olacak yoksa yok sana bytecode
    public void ses()
    {
        System.out.println("bark bark bark"); 

    }



}