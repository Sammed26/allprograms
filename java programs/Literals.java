class Literals
{
    public static void main(String[] args)
    {
        // literals are nothing but values assigned to the variables
        int a = 26;      // integer literal
        System.out.println(a);
        byte b = 26;     // integer literal
        System.out.println(b);
        short c = 26;    // integer literal
        System.out.println(c);
        long d = 262626262626l;    // integer literal (in this integer literal only you need to specify 'l' at the end, in others it is not mandatory)
        System.out.println(d);

        // floating values are by default double 
        // float e = 2.6;    // by default double    (commented beacuse giving error)
        float f = 2.6f;   // this is made float by specifying f at the end
        System.out.println(f);
        double g = 2.626262626; // not need to specify 'd or D' at the end because by default it is double
        System.out.println(g);

        boolean h = true;   // boolean literal
        System.out.println(h);

        char ch = 's';           // character literal
        System.out.println(ch);
        String str = "sammed";   // string literal
        System.out.println(str);
    }
}