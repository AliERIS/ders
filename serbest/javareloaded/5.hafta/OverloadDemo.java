public class OverloadDemo
{

    public static void main(String[] args)
    {
        
        A a=new A();
        a.p(10);
        a.p(29.0);
    }

}

class B{
    public void p(double i)
    {
        System.out.println(2*i);
    }
}

class A extends B
{
    public void p(int i)
    {
        System.out.println(i);
    }

}




