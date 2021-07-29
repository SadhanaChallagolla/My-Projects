'''class A:
    def __init__(self, name):
        self.name = name
    def getName(self):
        return self.name

a1 = A("Sadhana")
print(a1.getName())'''
class Node:
     def __init__(self, data=None):
         self.data = data
         self.next = None
class Linked:
    def __init__(self):
        self.head = None
    def show(self):
        node = self.head
        if node is not None:
            print(node.data)
            node = node.next

link = Linked()
ele = Node("edureka")
link.head = ele
link.show()

