public class HesapCuzdani{
//yani öyle bir bilmekl istiyorum ki leb demeden pulvis et umbra

    private double bakiye; //hahahahahaha
    
    public HesapCuzdani(double ilkBakiye)  //constructor method 
    {

        if(ilkBakiye > 0.0)
        {
            bakiye = ilkBakiye;
        }
        
    }

    public void paraYatir(double miktar)
    {
        bakiye += miktar;
    }

     public double getBakiye() //getter ve setter öğrensek iyi de bakalım
    {
        return bakiye;
    }



    //kaç üyesi var 4  1 i hariç 3 ümetod üstü kapalı sorarım dedi
    //ya sen ne yapıyordun geçtiğimiz yıllarda az bir şey hep baktım ama allah affetsin

    //abdullah ali eriş must die




}

