class Node{

    int data;
    Node next_node;
    public Node(int element)
    {
        data=element;
        next_node=null;
    }
}

class Singly_linked_list
{
    Node head;

    void insert_at_first(int data)
    {
        if(head == null)
        {
            head=new Node(data);
        }
        else
        {
            Node newnode=new Node(data);
            newnode.next_node=head;
            head=newnode;
        }
    }

    void insert_at_position(int data,int index)
    {
        Node temp = head;
        int curr_position = 1;
        while(curr_position !=index - 1)
        {
            temp= temp.next_node;
            curr_position++;
        }
        Node newnode=new Node(data);
        newnode.next_node = temp.next_node;
        temp.next_node = newnode;

    }

    void insert_after_node(int data,int node_data)
    {
        Node n = head;
        while(n != null)
        {
           if(n.data == node_data)
           {
                break;
           }
           else
           {
                n= n.next_node;
           }
        }
        if(n == null)
        {
            System.out.println("didn't found the node so element not inserted");
        }
        else
        {
            Node new_node=new Node(data);
            new_node.next_node = n.next_node;
            n.next_node = new_node;
            // new_node.next_node = n.next_node.next_node;
            // n.next_node=new_node;
        }
    }

    void display()
    {
        System.out.println("displaying Linked List");
        Node z = head;
        while(z!=null)
        {
            System.out.print(z.data + " ");
            z = z.next_node;
        }
        System.out.println();
    }
}

public class Om_Singly_linked_list
{
    public static void main(String[] args)
    {
        Singly_linked_list s1=new Singly_linked_list();
        s1.insert_at_first(10);
        s1.insert_at_first(20);
        s1.insert_at_first(30);
        s1.insert_at_first(40);
        s1.display();
        s1.insert_at_position(33,3);
        s1.display();
    }
}