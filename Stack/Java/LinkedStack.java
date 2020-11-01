import java.util.EmptyStackException;

public class LinkedStack {
    private int length;  		// indicates the size of the linked list
    private ListNode top;

    //  Constructor: Creates an empty stack.
    public LinkedStack()  {
        length = 0;
        top = null;
    }

    //  Adds the specified data to the top of this stack.
    public void push (int data)  {
        ListNode temp = new ListNode (data);
        temp.setNext(top);
        top = temp;
        length++;
    }

    //  Removes the data at the top of this stack and returns a
    //  reference to it. Throws an EmptyStackException if the stack
    //  is empty.
    public int pop() throws EmptyStackException {
        if (isEmpty())
            throw new EmptyStackException();
        int result = top.getData();
        top = top.getNext();
        length--;
        return result;
    }

    // Returns a reference to the data at the top of this stack.
    // The data is not removed from the stack.  Throws an
    // EmptyStackException if the stack is empty.
    public int peek() throws EmptyStackException{
        if (isEmpty())
            throw new EmptyStackException();

        return top.getData();
    }

    // Returns true if this stack is empty and false otherwise.
    public boolean isEmpty(){
        return (length == 0);
    }

    // Returns the number of elements in the stack.
    public int size(){
        return length;
    }

    // Returns a string representation of this stack.
    public String toString(){
        String result = "";
        ListNode current = top;
        while (current != null){
            result = result + current.toString() + "\n";
            current = current.getNext();
        }

        return result;
    }
}

