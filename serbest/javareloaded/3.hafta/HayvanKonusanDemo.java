public class HayvanKonusanDemo
{

    public static void main(String[] args)
    {
        Kopek kopke = new Kopek();
        Inek inek = new Inek();
        Yilan eysan = new Yilan();
        kopke.setAd("Kangallll");
        inek.setAd("Milka");
        eysan.setAd("Eysan Atay");
        konusanHayvan(kopke);
        konusanHayvan(inek);
        konusanHayvan(eysan); //cinsiyetcilik amacım yok derste çok sıkıldım
    }


    public static void konusanHayvan(Hayvan hayvan)
    {
        System.out.println("**********************");
        System.out.println("Benim adım  "+hayvan.getAd());
        hayvan.ses();
        System.out.println();  
    }


}