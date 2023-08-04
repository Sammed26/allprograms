#include <iostream>
using namespace std;

class square_cube
{
    private:
        int num;
        int cube;
        int square;
        // friend void display(); // valid to declare friend function in both 
                                 // private or public

    public:
        void get_data()
        {
            cout<<"enter number"<<endl;
            cin>>num;
        }

        friend void display(square_cube s); // valid to declare friend function in both 
                                                // private or public
        
        void getcube()
        {
            cube = num * num * num;
        }

        void make_square()
        {
            square = num * num;
        }
};

void display(square_cube s)
{
    cout<<"square is "<<s.square<<endl;
    cout<<"cube is "<<s.cube<<endl;
}

int main()
{
    square_cube n1;
    n1.get_data();
    n1.getcube();
    n1.make_square();
    display(n1);

    return 0;
}