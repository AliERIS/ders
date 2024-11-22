public class OverrideDemo
{
    public static void main(String[] args)
    {
      A a = new A();
      a.p(10);   
    }

}

class B
{
    public void p (double i)
    {
        System.out.println(2*i);
    }


    public void p(int i)
    {
        System.out.println(3*i);
    }


}

class A extends B
{
    public void p(double i)
    {
        System.out.println(i);
    }

    // public void p(int i) //bir metot bende varsa neden anneme babama gideyim ne bileyim belki sülük gibi bir şeysindir
    // {
    //     System.out.println(4*i);
    // }

}



