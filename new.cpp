// --------------------------------------new-------------------------------
/*
In C++, new is an operator used for dynamic memory allocation. It allocates memory for a single object or an array of objects
on the heap and returns a pointer to the allocated memory

Allocating Memory for a Single Object:
int *ptr = new int; // Allocates memory for a single integer

Allocating Memory for an Array of Objects:
int *arr = new int[10]; // Allocates memory for an array of 10 integers
 
Unlike malloc in C, new throws a std::bad_alloc exception if the allocation fails. Therefore, 
it's a good practice to use exception handling to handle allocation failures:
try {
    int *ptr = new int;
} catch(const std::bad_alloc& e) {
    std::cerr << "Allocation failed: " << e.what() << '\n';
}
   (dont know what the above code is but we will learn)

Deleting Dynamically Allocated Memory:
delete ptr; // Deletes a single object allocated with new
delete[] arr; // Deletes an array allocated with new[]

It's crucial to match delete with new and delete[] with new[]. Failing to do so can result in undefined behavior 


*/

// if you want to learn about malloc click here 
#include"malloc.cpp"
//if you want to learn more about new and its difference with malloc you can click here
#include"new_vs_malloc.cpp"
// if you also want to learn about placement new click here 
#include"placement_new.cpp"