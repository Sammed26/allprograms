#include <iostream>

using namespace std;

class Queue
{
    int front;
    int rear;
    int *queue;
    int size;
    int occupied_size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        queue = (int *)malloc(5 * sizeof(int));
        size = 5;
        occupied_size = 0;
    }

    Queue(int s)
    {
        front = -1;
        rear = -1;
        queue = (int *)malloc(s * sizeof(int));
        size = s;
        occupied_size = 0;
    }

    int isfull()
    {
        if((front == 0 && rear == (size - 1)) || front == rear + +1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int element)
    {
        if (isfull())
        {
            
        }
        else
        {
            if (rear == -1 && front == -1)
            {
                rear = 0;
                front = 0;
                queue[rear] = element;
                occupied_size++;
            }
            else
            {
                rear = (rear + 1) % size;
                queue[rear] = element;
                occupied_size++;
            }
        }
    }

    int dequeue()
    {
        int temp;
        if (front == -1)
        {

            return -1;
        }
        else
        {
            if (front == rear)
            {
                temp = queue[front];
                rear = -1;
                front = -1;
                occupied_size--;
                return temp;
            }
            else
            {
                temp = queue[front];
                front = (front + 1) % size;
                occupied_size--;
                cout<<"occupied ++++++ size is "<<occupied_size<<endl;
                cout<<"fornt is ------ "<<front<<endl;
                return temp;
            }
        }
    }

    void display()
    {
        if(front != -1)
        {
            cout << "Displaying queue elements" << endl;
            int i = front;
            int j, occ_siz = occupied_size;
            while(occ_siz != 0)
            {
                j = i%size;
                cout<<queue[j]<<" ";
                i++;
                occ_siz--;
            }
        }
        else
        {
            cout<<"can't display empty queue"<<endl;
        }
        cout <<"\n";
    }
};

int main()
{
    int ele, choice;
    Queue q1;

    while (1)
    {

        cout << "ENTER YOUR CHOICE\n 1] ENQUEUE\n 2] DEQUEUE\n 3] DISPLAY\n 4] EXIT\n"
             << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if(q1.isfull())
            {
                cout<<"queue is full"<<endl;
            }
            else
            {
            cout << "Enter element" << endl;
            cin >> ele;
            q1.enqueue(ele);
            }
            break;

        case 2:
            int dequeued;
            dequeued = q1.dequeue();
            if (dequeued == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Dequeued element is" << dequeued << endl;
            }
            break;

        case 3:
            q1.display();
            break;

        case 4:
            goto exit;
            break;

        default:
            cout << "make proper choice!!!\n"
                 << endl;
        }
    }
exit:
    return 0;
}