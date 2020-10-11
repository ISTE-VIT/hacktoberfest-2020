class Stack:
     def __init__(self):
         self.items = []

     def isEmpty(self):
         return self.items == []

     def push(self, item):
         self.items.append(item)

     def pop(self):
         return self.items.pop()

     def peek(self):
         return self.items[len(self.items)-1]

     def size(self):
         return len(self.items)
s=Stack()

print(s.isEmpty())
s.push(4)
s.push(5)
print(s.peek())
s.push(6)
s.push(10)
s.push(11)
s.push(12)
print(s.size())
print(s.isEmpty())
s.push(7)
print(s.pop())
print(s.pop())
print(s.pop())
print(s.size())
