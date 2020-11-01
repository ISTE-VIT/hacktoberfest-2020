public class ListNode {
    public ListNode next;
    public int data;

    // Creates an empty node.
    public ListNode(){
        next = null;
        data = Integer.MIN_VALUE;
    }

    // Creates a node storing the specified data.
    public ListNode (int data){
        next = null;
        this.data = data;
    }

    // Returns the node that follows this one.
    public ListNode getNext(){
        return next;
    }

    // Sets the node that follows this one.
    public void setNext (ListNode node){
        next = node;
    }

    // Returns the data stored in this node.
    public int getData(){
        return data;
    }

    // Sets the data stored in this node.
    public void setdata (int elem){
        data = elem;
    }

    // Sets the data stored in this node.
    public String toString (){
        return Integer.toString(data);
    }
}
