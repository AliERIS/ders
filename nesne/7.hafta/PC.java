public class PC{

    private Kasa kasa;
    private Monitor monitor;
    private Anakart anakart;


    public PC(Kasa kasa, Monitor monitor, Anakart anakart)
    {
        this.kasa = kasa;
        this.monitor = monitor;
        this.anakart = anakart;


    }

    public Kasa getKasa()
    {
        return kasa;
    }
    public Monitor getMonitor()
    {
        return monitor;

    }

    public Anakart getAnakart()
    {
        return anakart;
    } 


}