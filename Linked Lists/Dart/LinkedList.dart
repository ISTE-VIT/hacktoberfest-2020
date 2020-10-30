class LinkedList {
  Node head;

  LinkedList() {
    this.head = null;
  }

  // Add element @data to the end or start of Linked List
  //  depending on position provided
  void add(data, {String position: "end"}) {
    if (position.toLowerCase() == "end") {
      this.addToEnd(data);
    } else if (position.toLowerCase() == "start") {
      this.addToStart(data);
    } else {
      print("Position can only be 'end' or  'start'");
      return;
    }
  }

  // Add element @data to the end of Linked List
  void addToEnd(data) {
    Node start = this.head;
    Node tempNode = Node(data);
    if (start == null) {
      this.head = tempNode;
      return;
    }
    while (start.next != null) {
      start = start.next;
    }
    start.next = tempNode;
  }

  // Add element @data to the start of Linked List
  void addToStart(data) {
    Node tempNode = Node(data);
    tempNode.next = this.head;
    this.head = tempNode;
  }

  // Display the Linked list
  void display() {
    Node start = this.head;
    if (start == null) {
      print("List is empty");
      return;
    }
    String result = "";
    while (start != null) {
      result = result + start.data.toString() + " ";
      start = start.next;
      if (start != null) {
        result = result + "--> ";
      }
    }
    print(result);
  }

  // Returns length of linked list
  num get length {
    Node start = this.head;
    num size = 0;
    while (start != null) {
      size++;
      start = start.next;
    }
    return size;
  }

  // Returns index of element given in the linked list
  // Returns -1 if not found
  num indexOf(data) {
    Node start = this.head;
    num position = 1;
    while (start != null) {
      if (start.data == data) {
        return position;
      } else {
        position++;
        start = start.next;
      }
    }
    return -1;
  }

  bool remove(data) {
    Node start = this.head;
    Node previous = null;

    if (start.data == data) {
      this.head = start.next;
      return true;
    }
    while (start != null && start.data != data) {
      previous = start;
      start = start.next;
    }
    if (start != null && start.data == data) {
      previous.next = start.next;
      return true;
    }
    return false;
  }

  num get max {
    Node start = this.head;
    num largest = start.data;
    while (start != null) {
      if (largest < start.data) {
        largest = start.data;
      }
      start = start.next;
    }
    return largest;
  }

  num get min {
    Node start = this.head;
    num smallest = start.data;
    while (start != null) {
      if (smallest > start.data) {
        smallest = start.data;
      }
      start = start.next;
    }
    return smallest;
  }
}

class Node {
  num _data;
  Node _next;

  Node(this._data) {
    this.next = null;
  }

  num get data => _data;
  Node get next => _next;

  set data(num data) {
    _data = data;
  }

  set next(Node next) {
    _next = next;
  }
}

main(List<String> args) {
  LinkedList list = new LinkedList();
  list.add(10);
  list.add(11);
  list.display();
  list.add(9);
  list.add(15, position: 'start');
  list.display();
  print(list.length);
  print(list.indexOf(10));
  list.remove(11);
  list.display();
  list.add(3);
  print("Max ${list.max}");
  print("Min ${list.min}");
  list.display();
}
