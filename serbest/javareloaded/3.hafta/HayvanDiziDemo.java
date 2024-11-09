public class HayvanDiziDemo
{

    public static void main(String[] args)
    {
        Hayvan[] hayvanlar = new Hayvan[3]; //ilginç bu 

        hayvanlar[0] = new Kopek();
        hayvanlar[1] = new Inek();
        hayvanlar[2] = new Yilan();


        for ( int i = 0 ; i< hayvanlar.length; i++)
        {
            hayvanlar[i].ses();
            System.out.println();

        }

    }


}