public class HayvanDemo
{
    public static void main(String[] args)
    {
        Kopek kopek1 = new Kopek();
        Inek inek1 = new Inek();
        Yilan yilan1 = new Yilan();

        kopek1.setAd("Kangal Köpeğim");
        inek1.setAd("Kızıl İneğim");
        yilan1.setAd("Çıngıraklı Yilanim");

    
        
        System.out.println(kopek1.getAd());
        System.out.println(inek1.getAd());
        System.out.println(yilan1.getAd());

      
        kopek1.ses();

        inek1.ses();

        yilan1.ses();
      
      
  




    }
}