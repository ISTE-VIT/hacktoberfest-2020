class QueueWithLinkedList {
  Node front, rear;

  QueueWithLinkedList() {
    this.front = null;
    this.rear = null;
  }

  bool get isEmpty => this.front == null && this.rear == null;

  enqueue(data) {
    Node tempNode = Node(data);
    if (this.rear == null) {
      this.front = this.rear = tempNode;
      return;
    }
    this.rear.next = tempNode;
    this.rear = tempNode;
  }

  Node dequeue() {
    if (this.front == null) {
      return null;
    }
    Node temp = this.front;
    this.front = this.front.next;
    if (this.front == null) {
      this.rear = null;
    }
    return temp;
  }

  @override
  String toString() {
    Node start = this.front;
    if (start == null) {
      return "Queue is empty";
    }
    String result = "";
    while (start != null) {
      result = result + start.data.toString() + " ";
      start = start.next;
      if (start != null) {
        result = result + "<-- ";
      }
    }
    return result;
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
  QueueWithLinkedList queue = QueueWithLinkedList();
  print(queue.isEmpty);
  queue.enqueue(10);
  queue.enqueue(23);
  print(queue.isEmpty);
  print(queue.front.data);
  print(queue);
  queue.enqueue(9);
  print(queue.rear.data);
  queue.dequeue();
  print(queue.front.data);
  print(queue);
}
