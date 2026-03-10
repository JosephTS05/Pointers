#include <iostream>

using namespace std;

int main() {
    int i = 10;
    // int* means pointer to an integer
    // & is an operator that means "THE ADDRESS OF"
    int* iptr = &i;   
    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of iptr: " << iptr << endl;

    //How does const work with ptr variables?
    const int* ciptr = &i;; //Pointer to a const int, we cannot modify it
    // *ciptr = 20; //illegal
    //lets say we want to make the ptr variable itself
    int* const ciptr2 = &i; // const pointer to an int,
    *ciptr2 = 20;
    //ciptr2 = &j; // the ptr is const
    
    // iptr=25; illegal to assign an int to a pointer variable
    cout << "Value of variable that iptr points to: " << *iptr << endl;
    *iptr = 15; // change the value of i through the pointer
    cout << "Value of i: " << i << endl;
    // pointer variable can change like any variable
    int j = 30;
    iptr = &j; // now iptr points to j
    cout << "Value of variable that iptr points to: " << *iptr <<
            endl;

    double d = 3.14;
    double* dptr = &d;
    d=d+1.0;
    cout << "Value of *dptr: " << *dptr << endl;
    *dptr += 1.0;
    cout << "Value of d: " << d << endl;

    // uninitialized pointer -- also called a dangling pointer
    // DANGEROUS -- can cause segmentation faults
    int* iptr2;
    cout << "contents of iptr2: " << *iptr2 << endl;

    // not to be confused with reference variables
    // int& means reference to an integer
    // use reference parameters with functions when you want the function to
    // modify the actual value of the variable
    int& iref = i;
    iref = 20;

    return 0;
}
