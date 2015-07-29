#Introduction
A stack is a LIFO data structure that has the ability to "push" and "pop" values. LIFO stands for "Last In First Out", which implies that the top of the stack is the first to be "popped" from the stack. Pushing means to append an element to the stack and popping means to omit the top element from the stack.

#Stack Implementations
To implement the design of a stack, a common approach involves incorporating arrays, and storing the stack as an array of data. In C/C++ an similar way to approach this problem is through the implementation of dynamic arrays. Dynamic arrays involve using pointers as an array, and using memory allocation to manipulate them. 

#Pointers
Pointers store the memory address of a variable, and have the ability to be referenced and de-referenced. When it comes to their incorporation as an array, there is a method to implement them. In this repository, I choose to store the stack as a dynamic array of strings. For the sake of practice, I decided to use char* instead of strings. 

#Dynamic Arrays
As previously mentioned, dynamic arrays use pointers to store multiple variables of the same data type. To create a dynamic array, complete the following steps:
1. Declare a pointer for the desired data type, and allocate it the initial number of elements (this can be modified), multiplied by the sizeof() the data type. The reason why a pointer must be used is because it will be able to mark the starting address of the array, and by allocating sufficient memory using malloc, we reserve the following memory blocks. To reference an element in the array, we can use pointer arithmetic or brackets. For example, a[2] = *(a + 2). This concept assists in describing how dynamic arrays work, as the initial pointer only acts as a reference for the array. 
2. To add a variable to the array, use pointer arithmetic or conventional array references. For example, you can do a[2] = 1 or *(a + 2) = 1.
3. In case you need to modify the size of the array, there is a method that exists. Use a temporary dynamic array of the same type, and use realloc with one extra space. Then assign the temporary array to the original array.
4. In case you need to delete the top of the array, just reallocate it with one less spot, and the top element will be ignored.

Overall, dynamic arrays have an edge over conventional arrays as they are much more flexible due to the fact that we're dealing with specific aspects of the memory, giving us total control.

#C++ Implementation
In this project, I designed a "Stack" class, which implements the notion of dynamic arrays to a stack. Although there was the option to use regular vectors, dynamic arrays are a useful thing to incorporate as they are more flexible and independent.
