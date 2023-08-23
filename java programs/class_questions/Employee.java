public class Employee
{
    public static void main(String[] args)
    {
        ClassEmployee e1 = new ClassEmployee();
        e1.setName("sammed");
        e1.setSalary(1000000);
        String name = e1.getName();
        int salary = e1.getSalary();
        System.out.println("employee name is " + name);
        System.out.println("employee salary is " + salary);
    }
}

class ClassEmployee
{
    private String name;
    private int salary;

    void setName(String n)
    {
        this.name = n;
    }
    String getName()
    {
        return this.name;
    }
    void setSalary(int s)
    {
        this.salary = s;
    }
    int getSalary()
    {
        return this.salary;
    }
}
