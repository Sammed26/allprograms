class Vehicles{
    public int speed;
    public int model;

    public void speedup()
    {
        System.out.println("speeding up......");
    }
}

class Car extends Vehicles {
    public int sunroof_count;

    public Car(int s_c){
        this.sunroof_count = s_c;
    }

    public void open_sunroof()
    {
        System.out.println("opening sunroof......");
    }
}


public class SimpleInheritance{

    public static void main(String[] args)
    {
        Car bmw = new Car(2);
        System.out.println(bmw.sunroof_count);
        bmw.speedup();
        bmw.open_sunroof();
    }

}