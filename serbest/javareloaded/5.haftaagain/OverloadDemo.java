public class OverloadDemo{

    public static void main(String[] args)
    {
        A a = new A(); //bana deseler ki bu dersi özetle bu satırı yazarım A sınıfının a kurucu metodunu kullanarak new(yeni) a adında bir nesne oluşturuldu

        a.p(10);
        a.p(20.0);
     //   a.p(true); boolean cannot converted to int dedi ş*r*fs*z java
    }    



}


class B // extends A - çemberimde gül oya ben aldım error doya doya
{
    public void p(double i)
    {
     System.out.println(2*i); //System sınıfının out özel nesnesinin println metodu   
    }

    //  public void p(int i)
    //  {
    //      System.out.println("değer alıp değer döndürmesem de beni sever misin aşkın");
    //  }

}

class A  extends B // denedim aslında 3 taneyle yapacaktım ben ona takacağım o bana takacak 
{
    public void p(int i)  //ismi aynı parametrelerinin sayısı ve tipi farklı overload İMZASI yani
    {
        System.out.println(i);
    } 

    // public void p(double i) //ctrl k c (comment)  ctrl k u (uncomment)
    // {
    //     System.out.println("sana hesap mı vericem diyip eski sevgilisiyle buluşmaya giden insan");
    //     //değeri aldı geri döndürmedi ne yaptı belli değil hani pointer de yok ya java da ne bok yedin olum double ı sen
    // }
    

}
