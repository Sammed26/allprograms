#include <iostream>
using namespace std;

class district1
{
    protected:
        int d1_population;
        int d1_area;
    public:
        void set_d1_population(int);
        void set_d1_area(int);
};

void district1 :: set_d1_population(int a)
{
    d1_population = a;
}

void district1 :: set_d1_area(int b)
{
    d1_area = b;
}

class district2
{
    protected:
        int d2_population;
        int d2_area;
    public:
        void set_d2_population(int);
        void set_d2_area(int);
};

void district2 :: set_d2_population(int a)
{
    d2_population = a;
}

void district2 :: set_d2_area(int b)
{
    d2_area = b;
}

class district3
{
    protected:
        int d3_population;
        int d3_area;
    public:
        void set_d3_population(int);
        void set_d3_area(int);
};

void district3 :: set_d3_population(int a)
{
    d3_population = a;
}

void district3 :: set_d3_area(int b)
{
    d3_area = b;
}

class state : public district1, public district2, public district3
{
    protected:
        int spopulation;
        int sarea;
    public:
        void set_spopulation()
        {
            spopulation = d1_population + d2_population + d3_population;
        }
        void set_sarea()
        {
            sarea = d1_area + d2_area + d3_area;
        }
        void show_data();
};

void state :: show_data()
{
    cout<<"total area is "<<sarea<<endl;
    cout<<"total population is "<<spopulation<<endl;
}

int main()
{
    state maharashtra;
    maharashtra.set_d1_area(26);
    maharashtra.set_d1_population(263);

    maharashtra.set_d2_area(32);
    maharashtra.set_d2_population(63);

    maharashtra.set_d3_area(5);
    maharashtra.set_d3_population(15);

    maharashtra.set_sarea();
    maharashtra.set_spopulation();
    
    maharashtra.show_data();

    return 0;
}