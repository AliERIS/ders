public class Anakart
{
    

private String model;  
private String firma;
private int ramSlotSayisi;
private int kartSlotSayisi;
private String bios;




public Anakart(String model, String firma, int ramSlotSayisi, int kartSlotSayisi, String bios)
{

     this.model = model;
     this.firma =firma;
     this.ramSlotSayisi = ramSlotSayisi;
     this.kartSlotSayisi = kartSlotSayisi;
     this.model = model;


}


public void programYukle(String programAdi)
{
    System.out.println(programAdi+" programı yükleniyor...");
}


}