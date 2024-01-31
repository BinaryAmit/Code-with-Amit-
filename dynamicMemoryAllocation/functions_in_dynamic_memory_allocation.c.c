// FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION IN C
/*
malloc():
         malloc stands for memory allocation. As can be guessed by its name, it requests
memory from the heap and returns a pointer to the memory. The pointer is of the void type,
so that we can typecast it for any variables. All the values at the allocation time are initialized
to garbage values. Its syntax is simple as we have to provide the memory space along with the size
we want in bytes.

Syntax:
ptr = (ptr-type*) malloc(size_in_bytes)
For example:

int *ptr;
int n=3;
ptr = (int*) malloc (3* sizeof(int))



  calloc():
calloc stands for contiguous allocation. It also requests memory from the heap
and returns a pointer to the memory and has the same functionality as malloc(),
two main differences, though. We have to send as parameters the number of blocks
needed along with their size. The second difference is a major one.
That is, in calloc(), the values at the allocation time are initialized to 0 instead
of garbage value.

Syntax:
ptr = (ptr-type*) calloc(n,size_in_bytes)


For example:

int *ptr;
int n=10;
ptr = (int*) malloc (10, sizeof(int))


  realloc():
realloc stands for reallocation. It is used in cases where the dynamic memory is
insufficient or wants to increase the already allocated memory to store more data.
Its syntax is simple as we just have to overwrite the memory already allocated as a parameter
in the function while providing the data related to the pointer.

Syntax:
ptr = (ptr-type*) realloc(ptr,new_size_in_bytes)


For example:
int *ptr;
int n=5;

ptr = (int*) realloc (ptr, 5* sizeof(int));



free():
As we discussed earlier, while discussing the disadvantages of dynamic memory allocation
that we have to free up the allocated memory space manually as there is no automatic procedure
for that. So free is used to free up the space occupied by the allocated memory.
Its syntax is the easiest of all, as we have to send the pointer as a parameter inside the function.

Syntax:

free(ptr)




*/
