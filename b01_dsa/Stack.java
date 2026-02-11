class Stack_Implementation{
    int[] st;
    int top;
    public Stack_Implementation()
    {
        this.st = new int[10];
        this.top = -1;
    }
    public Stack_Implementation(int stack_size)
    {
        this.st = new int[stack_size];
        this.top = -1;
    }

    public void push(int element)
    {
        if(this.top == (st.length-1))
        {
            System.out.println("Stack is full.....");
            return ;
        }
        else
        {
            if(this.top == -1)
            {
                this.top = 0;
                st[top] = element;
            }
            else
            {
                top++;
                st[top] = element;
            }
        }
    }

    public int pop()
    {
        if(top == -1)
        {
            System.out.println("Stack is already empty, cannot pop .....");
            return -1;
        }
        else
        {
            int popped_element = st[top];
            top--;
            return popped_element;
        }
    }

    public void display()
    {
        System.out.println("Displaying Stack....");
        for(int i = 0; i<=top; i++)
        {
            System.out.print(" " + st[i]);
        }
        System.out.println();
    }
}

public class Stack{

    public static void main(String[] args)
    {
        Stack_Implementation st1 = new Stack_Implementation();
        st1.push(10);
        st1.push(20);
        st1.push(30);
        st1.push(85);
        st1.push(14);
        st1.push(96);
        st1.display();
        st1.pop();
        st1.display();
        st1.push(10);
        st1.display();

    }
}