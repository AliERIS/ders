package serbest.meselayani;

public class Takim {
    

    private String ad;
    private Futbolcu listeFutbol[];


public void setAd(String yeniad)
{

ad = yeniad;

}
public void addFutbolcu(Futbolcu futbolcu)
{
    if(listeFutbol[0] == null)
    {
        listeFutbol[0]=futbolcu;
    }

}


    
}
