/*

In C++, new is an operator used for dynamic memory allocation, and it typically invokes the constructor of the object being created. 
However, with placement new, you can specify a location in memory (ptr) where you want the object to be constructed, rather than having 
the memory allocated by the default new operator.

Here's how the expression works:

Placement new syntax:
new(ptr) MyClass();
Memory location:
(ptr): Specifies the memory location where the object should be constructed. ptr is a pointer to a memory location where you want the 
object to reside.
Object construction:
MyClass(): This is a constructor call that constructs an object of type MyClass. It initializes the object's members and sets up the 
object's state according to the constructor's implementation.
Placement new usage:
new(ptr): This syntax invokes placement new, which constructs an object of type MyClass at the specified memory location ptr. Instead of 
allocating memory, placement new uses the provided memory location to construct the object.
Constructor call:
The constructor of MyClass is called to initialize the object at the specified memory location ptr.
Placement new is often used in advanced scenarios, such as when you need to construct objects at specific memory addresses, such as 
memory pools or memory-mapped hardware registers. It's important to note that when using placement new, you're responsible for managing 
the memory associated with the specified memory location (ptr). You should not use placement new with memory that was not allocated 
dynamically or with memory that was not obtained from specific sources that are intended for object construction.

*/