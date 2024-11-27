public class OverrideDemo
{

    public static void main(String[] args)
    {
        A a = new A();
        a.p(10);
        a.p(10.0);
    }   


}

class B
{
    public void p(double i)
    {
        System.out.println(2*i);
    }
}


class A extends B
{   
    @Override
    public void p(double i) //override olma şartı parametresine kadar aynı olması
    {
        System.out.println(i);
    }
}