public class Monitor
{

    private String model; 
    private String imalatciFirma;
    int genislik;
    private Cozunurluk cozunurluk;

    public Monitor(String model, String imalatciFirma, int genislik, Cozunurluk cozunurluk)
    {
        this.model = model;
        this.imalatciFirma = imalatciFirma;
        this.genislik = genislik;
        this.cozunurluk = cozunurluk;

    }

        public void pikselCiz(int x, int y, String renk)
        {
            System.out.println("("+x+","+y+") noktasında "+renk+"nokta çizildi");
        }

}