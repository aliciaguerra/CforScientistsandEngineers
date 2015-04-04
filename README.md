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
- A <b>null pointer</b> value explicitly points to no valid location. 
- Dereferencing a null pointer value is undefined, often resulting in a segmentation fault.
- Null pointer values are useful for indicating special cases such as no "next" pointer in the final node of a linked list,
or as an error indication from functions returning pointers.
- In appropriate contexts in source code, such as for asigning a pointer variable, a null pointer constant can be written
as 0, with or without explicit casting to a pointer type, or as the null macro defined by several standard headers.
- In conditional contexts, null pointer values evaluate to false, while all other pointer values evaluate to true.
- <b>Void pointers</b> (void *) point objects of unspecified type, and can therefore be used as "generic" data pointers.
- Since the size and type of the pointed-to object is not known, void pointers cannot be dereferenced, nor is pointer arithmetic on them allowed, although they can easily be (and in many cases implicitly are) converted to and from any other object pointer type.
- Careless use of pointers is potentially dangerous. Because they are generally unchecked, a pointer variable can be made to 
any arbitrary location, which can cause undesirable effects. Although properly used pointers can point to safe places, they
can be made to point to unsafe places by using invalid pointer arithmetic; the objects they point to may be deallocated and
reused (dangling pointers); they may be used without having been initialized (wild pointers); or they may be directly 
assigned an unsafe value using a cast, union, or through another corrupt pointer.
- In general C is permissive in allowing manipulation of and conversion between pointer types, although compilers typically 
provide options for various levels of checking.
