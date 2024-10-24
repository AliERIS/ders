public class OverrideDemo
{
public static void main(String[] args)
{


A a = new A();

}

}


class B{

        public void p(double i)
        {
            System.outprintln(2*i);
        }
}


class A extends B
{
    
    public void p(double i)
    {
        System.out.println(i);


    }



}