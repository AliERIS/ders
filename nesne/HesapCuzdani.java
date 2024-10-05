public class HesapCuzdani
{

private double bakiye;


public HesapCuzdani(double ilkBakiye) //constructor metod olduğu için ilk harfi büyük
{
    if(ilkBakiye>0.0)
        bakiye=ilkBakiye;
}

public void paraYatir(double miktar)
{
    bakiye += miktar;
}
    
public double getBakiye()
{
    return bakiye;
}

// 4 memberi var 3 ü metod 1 i özellik


}