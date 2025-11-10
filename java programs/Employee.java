class Emp {
    int id;
    String name;
    float salary;

    public Emp(int id, String name, float salary){
        this.id=id;
        this.name=name;
        this.salary=salary;

       // int yearlySalary = 12 * salary;

        //System.out.println("Yearly Salary:"+yearlySalary);

    }

    public float calculateSalary(){
        float hra = (20f/100f)*this.salary;
        float da= (10f/100f)*this.salary;
        float net = this.salary + hra + da;
        return net;
    }

}

public class Employee {
    public static void main(String[] args) {
        Emp emp = new Emp(101, "Saee", 45000f);
        float netSalary = emp.calculateSalary();
        System.out.println("Net salary is:" + netSalary);
    }
}