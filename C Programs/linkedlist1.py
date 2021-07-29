#print("Hello world")
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