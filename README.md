# C Programming


#Pointers
- C supports the use of pointers, a type of reference that records the address or location of an object or function in
memory.
- Pointers can be dereferenced to access the data stored at the address pointed to, or to invoke a pointed-to function.
- Pointers can be manipulated using access or pointer arithmetic.
- The run-time representation of a pointer-value of a pointer value is typically a raw memory address (perhaps augmented by
an offset-within-word field), but since a pointer's type includes the type of thing pointed to, expressions including 
pointers can be type-checked at compile time.
- Pointer arithmetic is automatically scaled by the size of the pointed-to data type.
- Text strings are commonly manipulated using pointers into arrays of characters.
- Dynamic memory allocation is performed using pointers.
- Many data types, such as trees, are commonly implemented as dynamically allocated struct objects linked together 
using pointers.
- Pointers to functions are useful for passing functions as arguments to higher order functions (such as qsort or bsearch)
or as callbacks to be invoked by event handlers.
- A null pointer value explicitly points to no valid location. 
- Dereferencing a null pointer value is undefined, often resulting in a segmentation fault.
- Null pointer values are useful for indicating special cases such as no "next" pointer in the final node of a linked list,
or as an error indication from functions returning pointers.
