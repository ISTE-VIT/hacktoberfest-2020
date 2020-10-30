class Stack {
  num capacity;
  List storage;

  Stack({capacity = double.infinity}) {
    this.capacity = capacity;
    this.storage = [];
  }

  num get peek => this.storage[this.size - 1];

  num get size => this.storage.length;

  bool get isEmpty => this.storage.isEmpty;

  push(item) {
    if (this.size == this.capacity) {
      throw new RangeError(
          "Stack has reached max capacity, you cannot add more items");
    }
    this.storage.add(item);
  }

  pop() {
    if (!this.storage.isEmpty) {
      return this.storage.removeLast();
    }
  }

  @override
  String toString() {
    return this.storage.toString();
  }
}

main(List<String> args) {
  Stack stack = Stack(capacity: 10);
  print(stack.isEmpty);
  stack.push(10);
  stack.push(11);
  stack.push(12);
  print(stack.isEmpty);
  stack.push(11);
  stack.push(4);
  stack.push(11);
  stack.push(1);
  stack.push(65);
  stack.push(5);
  stack.push(10);
  print(stack.size);
  // stack.push(10);
  print(stack);
}
