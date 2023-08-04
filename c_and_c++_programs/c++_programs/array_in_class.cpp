// date = 02/02/2023
// day = thursday


#include <iostream>
#include <string>

using namespace std;

class animal 
{
    string name[10];
    int no_of_legs[10];
    int no_of_hands[10];
    int counter;

    public:
    void get_n_set_data(void);
    void display(void);
    void initcounter()
    {
        counter = 0;
    } 
};

void animal :: get_n_set_data()
{
    cout<<"enter animal name"<<endl;
    cin>>name[counter];
    cout<<"enter number of legs that animal have"<<endl;
    cin>>no_of_legs[counter];
    cout<<"enter number of hands that animal have"<<endl;
    cin>>no_of_hands[counter];
    counter++;
}

void animal :: display()
{
    for(int i = 0; i<counter; i++)
    {
        cout<<"for "<<(i+1)<<" animal"<<endl;
        cout<<name[i]<<" is tha name of animal"<<endl;
        cout<<"total legs are "<<no_of_legs[i]<<endl;
        cout<<"total hands are "<<no_of_hands[i]<<endl;
    }
}

int main()
{
    animal pet;
    int animals_count;
    cout<<"how many animals information you are going to input"<<endl;
    cin>>animals_count;

    pet.initcounter();
    for(int i = 0; i<animals_count; i++)
    {
        pet.get_n_set_data();
    }
    pet.display();


    return 0;
}