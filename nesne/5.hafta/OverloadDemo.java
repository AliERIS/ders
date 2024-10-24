public class OverloadDemo
{

public static void main(String[] args)
{

    A a = new A();  //çalışmıyor ama neden
    a.p(10);
    a.p(10.0);


}

class B
{
    public void p(double zeynep)
    {
        System.out.println(2*zeynep);
    }

}

class A extends B
{

    public void p(int i)
    {
        System.out.println(i);
    }
    
}


}