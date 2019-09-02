//
// Created by carlosjose.requena on 14/08/2019.
//
#include "iostream"
#include "Pointers.hpp"
using namespace std;

//  Pointers
//  Pointers represent one of the more powerful features of the C language, but also one of the most feared. Some of
//  this fear and apprehension stems from the ridiculously obtuse ways that pointers may be used in C. Often tutorials
//  and courses on C approach teaching pointers by asking the student to decipher bizarre looking pointer syntax
//  combinations that truthfully are rarely used in practice. You may have seen bizarre looking pointer syntax,
//  (and you may see it again), but typically, pointers do not have to be used in a horribly complicated way.
//  Typically pointers are pretty straightforward.

//  The bottom line is, pointers allow you to work with dynamically allocated memory blocks. You will use pointers to deal
//  with variables that have been allocated on the heap. (You can use pointers to deal with stack variables, but in most cases
//  this just isn't necessary).

//  The basic idea is, a pointer is a special data type in C, that contains an address to a location in memory. Think of
//  a pointer as an arrow that points to the location of a block of memory that in turn contains actual data of interest.
//  It's not unlike the concept of a phone number, or a house address.

//  The purpose of pointers is to allow you to manually, directly access a block of memory. Pointers are used a lot for
//  strings and structs. It's not difficult to imagine that passing the address of a large block of memory
//  (such as a struct that contains many things) to a function, is more efficient than making a copy of it and passing
//  in that copy, only to delete that copy when your function is done with it. This is known as passing by reference
//  versus passing by value.

//  A pointer is a variable whose value is the address of another variable. Like any variable or constant, you must declare
//  a pointer before you can work with it. The general form of a pointer variable declaration is −

//  type *var-name;

//  Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable.
//  The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. However, in this
//  statement the asterisk is being used to designate a variable as a pointer. Following are the valid pointer declaration −

//  int    *ip;    // pointer to an integer
//  double *dp;    // pointer to a double
//  float  *fp;    // pointer to a float
//  char   *ch     // pointer to character

//  The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a
//  long hexadecimal number that represents a memory address. The only difference between pointers of different data types
//  is the data type of the variable or constant that the pointer points to.

//  There is a code example below that illustrates this more clearly.

void Pointers::declaringPointerExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "declaring pointer example" << endl;
  cout << "================================" << endl;

  int age = 30;
  int *agePtr;
  agePtr = &age;

  cout << "age=" << age << endl;
  cout << "&age=" << &age << endl;
  cout << "agePtr=" << agePtr << endl;
  cout << "*agePtr=" << *agePtr << endl;
  cout << "&agePtr=" << &agePtr << endl;
  cout << "sizeof(agePtr)=" << sizeof(agePtr) << endl;
  *agePtr = 40;
  cout << "*agePtr=" << *agePtr << endl;
  cout << "age=" << age << endl;
}

//  C++ pointers are easy and fun to learn. Some C++ tasks are performed more easily with pointers, and other C++ tasks,
//  such as dynamic memory allocation, cannot be performed without them.

//  As you know every variable is a memory location and every memory location has its address defined which can be accessed
//  using ampersand (&) operator which denotes an address in memory. Consider the following which will print the address
//  of the variables defined −

void Pointers::printVariableAddressExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "print variable address example" << endl;
  cout << "================================" << endl;

  int  var1;
  char var2[10];

  cout << "Address of var1 variable: ";
  cout << &var1 << endl;

  cout << "Address of var2 variable: ";
  cout << &var2 << endl;
}

// Null Pointers
// C++ supports null pointer, which is a constant with a value of zero defined in several standard libraries.
// It is always a good practice to assign the pointer NULL to a pointer variable in case you do not have exact address to be assigned. 
// This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.
// The NULL pointer is a constant with a value of zero defined in several standard libraries, including iostream.
// On most of the operating systems, programs are not permitted to access memory at address 0 because that memory 
// is reserved by the operating system. However, the memory address 0 has special significance; it signals that 
// the pointer is not intended to point to an accessible memory location. But by convention, if a pointer contains 
// the null (zero) value, it is assumed to point to nothing.
void Pointers::nullPointerExample(){
   cout << "" << endl;
   cout << "================================" << endl;
   cout << "null pointer example" << endl;
   cout << "================================" << endl;
   int  *ptr = NULL;
   cout << "The value of ptr is " << ptr << endl;
   if(ptr) { // succeeds if p is not null
    cout << "The value of ptr is not null " << ptr << endl;
   }else if(!ptr){ // succeeds if p is null
    cout << "The value of ptr is null " << ptr << endl;
   }    
   
}
//  Pointer Arithmetic
//  As you understood pointer is an address which is a numeric value; therefore, you can perform arithmetic operations
//  on a pointer just as you can a numeric value. There are four arithmetic operators that can be used on pointers:
//  ++, --, +, and -

//  To understand pointer arithmetic, let us consider that ptr is an integer pointer which points to the address 1000.
//  Assuming 32-bit integers, let us perform the following arithmetic operation on the pointer −
//  ptr++
//  the ptr will point to the location 1004 because each time ptr is incremented, it will point to the next integer.
//  This operation will move the pointer to next memory location without impacting actual value at the memory location. I
//  f ptr points to a character whose address is 1000, then above operation will point to the location 1001 because
//  next character will be available at 1001.
const int MAX = 3;
void Pointers::incrementPointerExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "increment pointer example" << endl;
  cout << "================================" << endl;
  int  unsigned var[MAX] = {10, 100, 200};
  int unsigned *ptr;
  // let us have array address in pointer.
  ptr = var;
  for (int i = 0; i < MAX; i++) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;
    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;

    // point to the next location
    ptr++;
  }
}

void Pointers::decrementPointerExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "decrement pointer example" << endl;
  cout << "================================" << endl;
  int  var[MAX] = {10, 100, 200};
  int  *ptr;
  // let us have address of the last element in pointer.
  ptr = &var[MAX-1];
  for (int i = MAX; i > 0; i--) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;
    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;
    // point to the previous location
    ptr--;
  }
}

//  Pointer Comparisons
//  Pointers may be compared by using relational operators, such as ==, <, and >. If p1 and p2 point to variables that
//  are related to each other, such as elements of the same array, then p1 and p2 can be meaningfully compared.
//  The following program modifies the previous example one by incrementing the variable pointer so long as the address
//  to which it points is either less than or equal to the address of the last element of the array, which is &var[MAX - 1] −
void Pointers::pointerComparisonsExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "pointer comparisons example" << endl;
  cout << "================================" << endl;
  int  var[MAX] = {10, 100, 200};
  int  *ptr;
  // let us have address of the first element in pointer.
  ptr = var;
  int i = 0;
  while ( ptr <= &var[MAX - 1] ) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;
    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;
    // point to the previous location
    ptr++;
    i++;
  }
}

//  Array of Pointers
//  There may be a situation, when we want to maintain an array, which can store pointers to an int or char or any other
//  data type available. Following is the declaration of an array of pointers to an integer
//  int *ptr[MAX];
//  This declares ptr as an array of MAX integer pointers. Thus, each element in ptr, now holds a pointer to an int value.
//  Following example makes use of three integers which will be stored in an array of pointers as follows −
void Pointers::arrayOfPointersExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "array of pointers example" << endl;
  cout << "================================" << endl;
  int  var[MAX] = {10, 100, 200};
  int *ptr[MAX];
  for (int i = 0; i < MAX; i++) {
    ptr[i] = &var[i]; // assign the address of integer.
  }
  for (int i = 0; i < MAX; i++) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr[i] << endl;
    cout << "Value of var[" << i << "] = ";
    cout << *ptr[i] << endl;
  }
}

void Pointers::arrayOfPointersToCharacterExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "array of pointers to character example" << endl;
  cout << "================================" << endl;
  const char *names[MAX] = { "Zara Ali", "Hina Ali", "Nuha Ali" };
  for (int i = 0; i < MAX; i++) {
    cout << "Value of names[" << i << "] = ";
    cout << (names[i]) << endl;
  }
}

//  Pointer to Pointer (Multiple Indirection)

//  A pointer to a pointer is a form of multiple indirection or a chain of pointers. Normally, a pointer contains the
//  address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer,
//  which points to the location that contains the actual value as shown below.
//  address_ptr --> address_ptr --> variable

//  A variable that is a pointer to a pointer must be declared as such. This is done by placing an additional asterisk
//  in front of its name. For example, following is the declaration to declare a pointer to a pointer of type int −
//  int **var;

//  When a target value is indirectly pointed to by a pointer to a pointer, accessing that value requires that the asterisk
//  operator be applied twice, as is shown below in the example −
void Pointers::pointerToPointerExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "pointer to pointer example" << endl;
  cout << "================================" << endl;
  int  var;
  int  *ptr;
  int  **pptr;
  var = 3000;
  // take the address of var
  ptr = &var;
  // take the address of ptr using address of operator &
  pptr = &ptr;
  // take the value using pptr
  cout << "Value of var :" << var << endl;
  cout << "Value available at *ptr :" << *ptr << endl;
  cout << "Value available at **pptr :" << **pptr << endl;

}
//  Passing Pointers to Functions
//  C++ allows you to pass a pointer to a function. To do so, simply declare the function parameter as a pointer type.
//  Following a simple example where we pass an unsigned long pointer to a function and change the value inside the
//  function which reflects back in the calling function −
void Pointers::passingPointersToFunctionsExample(unsigned long *par) {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "passing pointers to functions example" << endl;
  cout << "================================" << endl;
  // get the current number of seconds
  *par = time( NULL );
  return;
}

//  Return Pointer from Functions
//  C++ allows a function to return a pointer to local variable, static variable and dynamically allocated memory as well.
//  As we have seen in last chapter how C++ allows to return an array from a function, similar way C++ allows you to return
//  a pointer from a function. To do so, you would have to declare a function returning a pointer as in the following example −
//  int * myFunction() {
//    .
//    .
//    .
//  }
//  Second point to remember is that, it is not good idea to return the address of a local variable to outside of the function,
//  so you would have to define the local variable as static variable.
int * Pointers::returnPointerFromFunctionsExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "return pointer from functions example" << endl;
  cout << "================================" << endl;
  static int  r[10];
  // set the seed
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i) {
    r[i] = rand();
    cout << r[i] << endl;
  }
  return r;
}

Pointers::Pointers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Pointers Constructor Called." << endl;
  cout << "================================" << endl;
}

Pointers::~Pointers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Pointers Destructor Called." << endl;
  cout << "================================" << endl;
}