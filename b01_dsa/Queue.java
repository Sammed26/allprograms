class Queue_Implementation{
    int front ;
    int rear ;
    int[] arr ;
    int size;

    public Queue_Implementation()
    {
        front = -1;
        rear = -1;
        arr = new int[10];
        this.size = 10;
    }
    public Queue_Implementation(int size)
    {
        front = -1;
        rear = -1;
        this.size = size;
        arr = new int[size];
    }

    boolean is_full(){
        if((rear == arr.length - 1 && front == 0 ) || (rear == (front -1))){
            return true;
        }
        return false;
    }

    boolean is_empty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    public void enqueue(int element){
        if(is_full())
        {
            System.out.println("\nqueue is full, element not inserted");
            return ;
        }
        else
        {
            if(front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
                arr[rear] = element;
            }
            else
            {
                rear = (rear + 1)%size;
                arr[rear] = element;
            }
        }
    }

    public void dequeue()
    {
        if(is_empty())
        {
            System.out.println("\nqueue is empty, cannot delete element");
            return ;
        }
        else
        {
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1)%size;
            }
        }
    }

    public void display()
    {
        if(is_empty())
        {
            System.out.println("\nqueue is empty, no elements to display");
        }
        else
        {
            System.out.println("\ndisplaying queue....");
            if(front <= rear)
            {
                for(int i= front; i<=rear; i++)
                {
                    System.out.print(arr[i] + " ");
                }
            }
            else
            {
                for(int i = front; i<size; i++)
                {
                    System.out.print(arr[i] + " ");
                }
                for(int i = 0; i<= rear; i++)
                {
                    System.out.print(arr[i] + " ");
                }
            }
        }

    }

}

public class Queue{

    public static void main(String[] args){

        Queue_Implementation q1 = new Queue_Implementation();
        q1.enqueue(2);
        q1.display();
        q1.dequeue();
        q1.display();
        q1.enqueue(32);
        q1.enqueue(4);
        q1.enqueue(2);
        q1.enqueue(3);
        q1.enqueue(26);
        q1.enqueue(26);
        q1.enqueue(246);
        q1.enqueue(265);
        q1.enqueue(726);
        q1.enqueue(826);
        q1.enqueue(276);
        q1.display();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.display();
        q1.enqueue(27);
        q1.display();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.dequeue();
        q1.display();
    }

}