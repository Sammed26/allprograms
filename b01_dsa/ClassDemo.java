class Car{
    String color;
    float power;

    void accelerate(){
        System.out.println("speeding up.....");
    }
}

public class ClassDemo{

    public static void main(String[] args)
    {
        System.out.println("in main method of ClassDemo Class");
        // Car bmw = new Car();
        // bmw.color = "blue";
        // bmw.power = 1000;
        Car.accelerate();
    }

}