public class MainPC
{

    public static void main(String[] args)
    {
        Boyutlar boyutlar = new Boyutlar(20,20,5);
        Kasa kasa = new Kasa("2208","Dell","240Volt",boyutlar);
        Monitor monitor = new Monitor("27inch","Acer",27,new Cozunurluk(2540,1440));
        Anakart anakart = new Anakart("OS-200","ASUS",4,6,"v2.44");


        PC pc = new PC(kasa, monitor, anakart);
        pc.getMonitor().pikselCiz(1550,1200,"kırmızı");
        pc.getAnakart().programYukle("Java 24");
        pc.getKasa().gucDugmesiniAc();
    }


}//relations
//aggregation kum çakıl
//