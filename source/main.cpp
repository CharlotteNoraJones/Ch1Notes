#include <complex>
#include <iostream>
#include <string>
#include <vector>

// // 1.2 Hello World

// double square(double x) {  // sqaure a double-precision floating-point number
//   return x * x;
// }

// void print_square(double x) {
//   std::cout << "the square of " << x << " is " << square(x) << "."
//             << "\n";
// }

// int main() {
//   print_square(5);
//   return 0;
// }

// int main() {} // the minimal C++ program

// 1.3 Functions

// Function Declarations
// Elem* next_elem(); // no arguement; return a pointer to Elem (an Elem*)
// void exit(int); // in argument; return nothing
// double sqrt(double); // double arguement; return a double

// double s2 = sqrt(2) // call sqrt() with the arguement double {2}
// double s3 = sqrt("three") // error: sqrt() requires an arguement of type
// double

// double sqrt(double d); // return the square root of d
// double square(double); // return the square of the arguement

// member function: a function that is a member of a class
// char& String::operator[](int index); //type: char& String::(int)

// double get(const std::vector<double>& vec, int index); // type: double(const
// vector<double &, int)

// if two functions are defined with the same name but with different arguement
// type, the compiler chooses the best function to invoke for the call. void
// print(int); //takes an integer arguement void print(double); // takes a
// floating-point arguement void print(std::string); // takes a string arguement

// void user()
// {
//     print(42); // calls print(int)
//     print(9.65); // calls print(double)
//     print("Barcelona"); // calls print(std::string)
// }

// the compiler produces an error the call is deemed ambiguous because
// multiple one function is not better than the other

// void print(int, double);
// void print(double, int);

// void user2(){
//     print(0, 0); // error: ambiguous
// }

// 1.4 Types, Variables, Arithmetic

// int inch; //specifies that inch is of type int

// Declaration: a statement that produces an entity into the program and
// specifies its type type: defines possible balues and a set of operations for
// an object object: some memory that holds a value of some type value: a set of
// bits interpreted according to type variable: a named object

// common fundamental types in c++
// bool // Boolean, possible values are true and false
// char // character, for example, 'a', 'z', and '9'
// int // integer, for example, -273, 42, and 1066
// double // double-precision floating-point numbers, for example -273.15, 3,14,
// and 6.62e-34 unsigned // non-negative integer, for example, 0, 1, and 999
// (use for bitwise logic operations)

// each fundamental style has a fixed size to that determines the range of
// values that can be stored in it.

// int main() {
//     // the sizes of these types varies amoung different machines

//     std::cout << "size of int: " << sizeof(int) << "\n";
//     std::cout << "size of char: " << sizeof(char) << "\n";
//     std::cout << "size of bool: " << sizeof(bool) << "\n";
//     std::cout << "size of double: " << sizeof(double) << "\n";

//     // char variable is of natural size to hold a variable on a given
//     machine.
//     // typically an 8-bit btye
//     // sizes of other types are multiples of char.

//     // to use a variable of a specific size, use a standard-library
//     type-aliase, such as int32_t

//     // you can use ' as a digital separator to make long numbers more
//     readable float pi = 3.145'926'535; std::cout << pi << "\n"; return 0;
// }

// 1.4.1 Arithmetic

// arithmatic operators
//  x + y    // plus
//  + x  // unary plus
//  x - y // minus
//  -x //unary minus
//  x * y // multiply
//  x / y // divide
//  x % y // remainder(modulus) for integers

// //comparison operators
// x==y // equal
// x!=y // not equal
// x<y // less than
// x>y // greater than
// x<=y // less than or equal to
// x>=y // greater than or equal to

// //logical operators
// x&y // bitwise and
// x|y // bitwise or
// x^y // bitwise exclusive or
// ~x //bitwise complement
// x&&y // logical and
// x||y // logical or
// !x // logical not (negation)

// int main() {
//     // playing with the bitwise operators

//     constexpr int x = 10;
//     constexpr int y = 7;

//     std::cout << std::to_string(~x) << "\n";
//     std::cout << std::to_string(x|y) << "\n";
//     std::cout << std::to_string(x&y) << "\n";
// }

// void some_function() // function that doesn't return a value
// {
//     double d = 2.2; // initialize floating-point number
//     int i = 7; // initialize integer
//     d = d+i; //assign sum to d
//     i = d*i; //assign product to i; beware: truncating the double d*i to an
//     int
// }

// additional operations for modifying a variable
// x+=y // x = x + y
// ++x // increment: x = x+1
// x-=y // x = x-y
// --x // decrement: x = x-1
// x*=y // scaling: x = x*y
// x/=y // scaling: x = x/y
// x%=y // x = x%y

// 1.4.2 Initialization

// different method sof initialization
// double d1 = 2.3; // initialize d1 to 2.3
// double d2 {2.3}; // initialize d2 to 2.3
// double d3 = {2.3}; // initialize d3 to 2.3 (the = is optional with { ... })

// std::complex<double> z = 1; // a complex number with double-precision
// floating-point scalars std::complex<double> z2 = {d1, d2};
// std::complex<double> z3 = {d1, d2}; // the = is optional with {}

// std::vector<int> v {1, 2, 3, 4, 5}; // a vector of ints

// = dates back t c, {} is more modern and recommended
// {} saves you from conversions that lose information - narrowing conversions
// int i1 = 7.8 // i1 becomes 7
// int i2 {7.8} // error: floatng point to integer conversion.

// consts must be initialized, but all variable should generally be initialized

// you don't have to state type explicitly when it can be deduced from the
// initializer auto b = true; // a bool auto ch = 'x'; // a char auto i = 123;
// // an int auto d = 1.2; // a double auto z = sqrt(y); // z has the type of
// whatever sqrt(y) returns auto bb {true}; // bb is a bool

// auto is safer to use with = becuase no implicit type conversion will occur
// use auto unless..
// the definition is in a large scope where we want to make the type clearly
// visible to readers of our code. the type of the intializer isn't obvious We
// want to be explicit about a variable's range or precision (e.g double instead
// of float)

// 1.5 Scope and Lifetime

// local scope: a name declared in a function or lambda is called a local name.
// dies at the end of its {}
// class scope: member names or class member names are defined in a class,
// outside any function, lambda, or enum class. Scopes is in {} where it's
// declared. namespace scope: namespace member name if its defined in a
// namespace outside any function, lamnbda, class, or enum class. Its scope
// extends from the point of declaration to the end of its namespace global
// name: a name not declared in any other construct, thus in global namespace

// temporaries and objects created with new don't have names

// std::vector<int> vec; // vec is global(a global vector of integers)

// void fct(int arg); // fct is global (names a global function)
//                 // arg is local (names an integer function)

// {
//     std::string motto {"Who dares wins"}; //motto is local
//     auto p = new Record{"Hume"}; //p points to an unnamed Record (created by
//     new)
// }

// struct Record {
//     std::string name; // name is a member of Record (a string member)
// }

// // objects created by new live until they are destroyed by delete

// 1.6 Constants
// const: value that's wont be changed after initialization.
// used to specify interfaces, allows data to be passed to functions using
// pointers and references without worring about it being modified constexpr:
// can be evaluated at compile time. Calculated by the compiler. used to allow
// placement of data in read-only memory (where it's not likely to be corrupted)
// and for performance

// constexpr int dmv = 17 // dmv is named constant
// int var 17; // var is not a constant
// const double sqv = sqrt(var); // sqv is a named constant, possible computed
// at run time

// double sum(const vector<double>&); // sum will not modify its argument

// vector<double> v {1.2, 3.4, 4.5}; // v is not a constant
// const double s1 = sum(v); // OK: sum(v) is evaluated at run time
// constexpr double s2 = sum(v); // error: sum(v) is not a constant expression

// // constant expression: an expression that will be evaluated by the compiler
// // constant expressions must by constexpr or consteval.

// constexpr double max1 = 1.4 * square(17); // OK: 1.4 * square(17) is a
// constant expression constexpr double max2 = 1.4 * square(var); // error: var
// is not a constant, so square(var) is not a constant const double max3 = 1.4 *
// square(var); // Ok: may be evaluated at run time.

// constexpr works for non-const arguements, but then the result isn't a
// constant expression. this allows you to use the same function for constant
// expressions and for variables.

// to have a function that's only used for evaluation at compile time, declare
// it consteval

// consteval double square2(double x) { return x * x; }

// constexpr double max1 = 1.4 * square2(17);  // OK: 1.4 * square(17) is a
// constant expression const double max3 = 1.4*square2(var); // error: var is
// not a constant

// functions with constexpr or consteval are pure functions.
// They can't have side effects and only use information passed to them as
// arguments. They can't modify non-local variables, but they can have loops and
// use their own local variables.

// constexpr double nth(double x, int n)  // assume 0<=n
// {
//   double res = 1;
//   int i = 0;
//   while (i < n) {  // while-loop, do while the condition is true
//     res += x;
//     ++i;
//   }
//   return res;
// }

// Const is required: array bounds, case labels, template value arguements,
// constants declared with constexpr

// 1.7 Pointers, Arrays, and References

// array: contiguously allocated sequence of elements of the same type.
// char v[6];  // array of 6 characters

// char* p;  // pointer to a character

// // [] means array of
// // * means pointer to
// // arrays are zero indexed.

// char* p = &v[3];  // p points to v's fourth element
// char x = *p;      // *p is the object that p points to

// // * means "contents of"
// // & means "address of"

// void print() {
//   int v1[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//   for (auto i = 0; i != 10; ++i)  // print elements
//     std::cout << v[i] << "\n";
// }

// // alternatie method of traversing a sequence

// void print2() {
//   int v[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//   for (auto x : v)  // for each x in v
//     std::cout << x << "\n";

//   for (auto x : {10, 21, 32, 43, 54, 65})  // for each integer in the list
//     std::cout << x << "\n";
// }

// // if we don't want to copy the values from v into variable x, and instead
// have
// // x refer to an element, we can write.
// void increment() {
//   int v[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//   for (auto& x : v) {  // add 1 to each x in v
//     ++x;
//   }
// }

// // & means "reference to"
// // A reference is like a pointer, except:
// // that you don't need to use * to access the value referred to by the
// reference.
// // A reference can't refer to a different object after its initialization.

// // References are good for specifying function arguements

// void sort(std::vector<double>& v); // sort v(v is a vector of doubles)

// // by using a reference, we ensure that for a call sort(my_vec) we don't copy
// my_vec.
// // this ensures that my_vec will be sorted correctly.

// // if we don't want to modify a variable but don't want the cost of copying
// it, use a const reference double sum(const std::vector<double>&);

// // functions taking const references are very common
// // when used in declarations, operators (such as &, *, and []) are called
// declarator operators T a[n] // T[n]: a is an array of n Ts T* p // T*: p is a
// pointer to T T& r // T&: r is a reference to T T f(A) // T(A): f is a
// function taking an arguement of type A returning a result of type T

// 1.7.1 the Null Pointer

// Try to ensure that a pointer always points to an object so that dereferencing
// it is valid. nullptr: "null pointer" used: when there is no object available
// when we need to represent the notion of "no object available" (like at the
// end of a list. )

// All pointer type share a nullptr

// double* pd = nullptr;
// Link<Record>* lst = nullptr // pointer to a Link to a Record
// int x = nullptr; // error: nullptr is a pointer not an integer

// // it's a good idea to make sure that a pointer arguement actually points to
// something. int count_x(const char*p, char x)
//     // count the number of occurrences of x in p[]
//     // p is assumed to point to a zero-terminated array of char (or to
//     nothing)
//     // assumes p points to a C-style string (zero-terminated array of char)
// {
//     if (p==nullptr)
//         return 0;
//     int count = 0;
//     for (; *p!=0; ++p) // ++p makes p point to the next element in an array
//         if (*p==x)
//             ++count;
//     return count;
// }

// // on old code, 0 or NULL is used in place of nullptr.
// // nullptr stops pointers from being confused with integers.

// // example above modified to use a while statement, a bit simpler
// int count_x2(const char* p, char x)
//     // count the number of occurrences of x in p[]
//     // p is assumed to point to a zero-terminated array of char(or to
//     nothing)
// {
//     if (p==nullptr)
//         return 0;
//     int count = 0;
//     while(*p){
//         if(*p==x)
//             ++count;
//         ++p;
//     }
//     return count;
// }

// a test of a numeric value is equivalent to comparing the value to 0
// (*p) is the same as (*p != 0)
// a test of a pointer value is equivalent to comparing the value to nullptr
// if (p) is the namme as if (p!=nullptr)

// there is no such thing as "null reference".
// references have to refer to a valid object.
// implementations assume references refer to a valid object.

// 1.8 Tests

// bool accept() {
//   std::cout << "Do you want to proceed (y or n)?\n";  // write question.
//   char answer = 0;     // initialize to a value that will not appear on input
//   std::cin >> answer;  // read answer

//   if (answer == 'y') return true;
//   return false;
// }

// // improvement on code above

// bool accept2() {
//   std::cout << "Do you want to proceed (y or n)?\n";
//   char answer{0};
//   std::cin >> answer;

//   switch (answer) {
//     case 'y':
//       return true;
//     case 'n':
//       return false;
//     default:
//       std::cout << "I'll take that for a no.\n";
//       return false;
//   }
// }

// // example of switch statement that continue's execution of the current
// function
// // following a switch statement.

// void action()
// {
//     while(true) {
//         std::cout << "enter action:\n"; // request action
//         std::string act;
//         std::cin >> act;        // read characters into a string
//         Point delta {0,0};   // Point holds an {x,y} pair

//         for(char ch : act) {
//             switch(ch) {
//                 case 'u': //up
//                 case 'n': //north
//                     ++delta.y;
//                     break;
//                 case 'r': // right
//                 case 'e': //east
//                     ++delta.x;
//                     break;
//                 // ... more actions ...
//                 default:
//                     std::cout << "I freeze!\n";
//             }
//             move(current+delta*scale);
//             update_display();
//         }
//     }
// }

// // an if statement and introduce a variable and test it.
// void do_something(std::vector<int>& v) {
//   if (auto n = v.size(); n != 0) {
//     // we get here if n != 0
//   }
// }

// // a name declared in an if statement is in scope for both branches of the if
// // statement this keeps the scope of the variable limited and minimizes
// errors.

// // the most common case is testing a variable against 0 (or the nullptr)
// // this can be done by leaving out an explicit mention of the condition

// void do_something(std::vector<int>& v) {
//     if (auto n = v.size()) {
//         // we get here is n!= 0
//     }
// }

// Prefer to use this terser simpler form when you can.

// 1.9 Mapping to Hardware

// C++ offers direct mapping to hardware
// when using the fundamental operations, the implementation is what the
// hardware offers, usally a single machine operation adding two ints executes
// an integer add machine instruction.

// c++ treats memory as a sequence of memory locations that it places typed
// objects into. it then addresses those objects with pointers.

// 1.9.1 Assignment
// assignment of a built in type is a machine copy operation

// int x {2};
// int y {3};
// x = y; // x becomes 3, so we get x==y

// // the objects are independent. Changing the value of y won't affect the
// value of x.

// // use pointers to make different objects were to a shared value
// int x = 2;
// int y = 3;
// int* p = &x;
// int* q = &y; // p!=q and *p!=*q
// p=q // p becomes & y; now p==q, so (obviously)*p==*q

// // references and pointers both refer/point to an object and both are
// represented in memory as a machine address.
// // language rules differ for references and pointers
// // pointers: assignment changes what it referes to.
// // references: assignment assigns it to the referenced object

// int x = 2;
// int y = 3;
// int& r = x; // r refers to x
// int& r2 = y; // r2 refers to y
// r = r2; // read through rs, write through r, x becomes 3

// // * accesses the value referred to by a pointer, but access is done
// implicitly for references.

// 1.9.2 Initialization

// assigned-to object must get a value
// initialization makes an uninitialized piece of memory a valid object
// for almost all types, the effect of reading from or writing to an
// uninitialized variable is undefined

// int x = 7;
// int& r{x};  // bind r to x (r refers to x)
// r = 7;      // assign to whatever r refers to

// int& r2;  // error: uninitialized reference
// r2 = 99;  // assign to whatever r2 refers to.

// // if the compiler didn't throw an error, than r2=99 would assign 99 to some
// // unspecified memory location this lead to bad results or a crash.

// // = can be used to initalize a reference
// int& r = x;  // bind r to x (r refers to x)
//              // this binds r to x, it isn't a value copy.

// basic semantics of argument passing and function value are that of
// initialization. That's how pass-by-reference works.