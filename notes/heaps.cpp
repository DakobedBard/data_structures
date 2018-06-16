/*

Heaps alow us to represent binary trees without using any pointers.  We will store the data as an array of keys, and use the position of the keys to implicitly satisfy the role of the pointers.  

This implicit representation of binary trees saves memory, but is less flexible than using pointers.  We cannot store arbitrary tree topologies without wasting large amounts of space.  We cannot move subtrees around by just changing a single pointer.  This loss of flexibility explains why we cannot use this idea to represent BSTs, but works just fine for heaps.  

Problem?  How can we efficiently search for a particular key in a heap?

We can't.  




*/
