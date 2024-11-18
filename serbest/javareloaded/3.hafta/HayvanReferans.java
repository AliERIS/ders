public class HayvanReferans
{

    public static void main(String[] args)
    {

        Hayvan hayvan;
        int x = 3;
        String ad = "Mehmet Akif Asiltürk"; //adresi diyor hoca da nasıl adresi pointer yok ki javada varm ı yoksa?

        hayvan = new Inek();
        hayvan.ses();
        System.out.println();

        hayvan = new Kopek();
        hayvan.ses();
        System.out.println();
        Hayvan hayvan2 = new Yilan();
        hayvan2.ses();
    }


}