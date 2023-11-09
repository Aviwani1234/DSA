class Node {
    constructor(value, prev, next) {
      this.value = value;
      this.addr = prev ^ next;
    }
  }
  
  class XORLinkedList {
    constructor() {
      this.head = null;
      this.tail = null;
    }
  
    add(value) {
      const node = new Node(value, null, null);
      if (this.head === null) {
        this.head = node;
        this.tail = node;
      } else {
        node.addr = this.tail.addr ^ null;
        this.tail.addr = this.tail.addr ^ node.addr;
        this.tail = node;
      }
    }
  
    getFromEnd(n) {
    let curr = this.tail;
    let prev = null;
    let next;
    let i = 0; // Start i from 0 instead of 1
    while (curr !== null && i < n) {
      next = prev ^ curr.addr;
      prev = curr;
      curr = next;
      i++;
    }
    if (i === n && curr !== null) {
      return curr.value;
    } else {
      return "Invalid Input";
    }
  }
  
  
  // Example usage
  const myLinkedList = new XORLinkedList();
  myLinkedList.add(0);
  myLinkedList.add(2);
  myLinkedList.add(1);
  myLinkedList.add(3);
  myLinkedList.add(11);
  myLinkedList.add(8);
  myLinkedList.add(6);
  myLinkedList.add(7);
  console.log(myLinkedList.getFromEnd(3)); // Output: 1
  
  
  