//Alok Chawat
//PRN:23070123016
//EnTC A-1
//Experiment 4.a
//Program to perform bitwise and shifting operations

#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 7;
    int bit_and, bit_or, bit_not, bit_xor,left_shift,right_shift;
    bit_and = a & b;
    bit_or = a | b;
    bit_not = ~b;
    bit_xor = a ^ b;
    left_shift = a<<2;
    right_shift = b>>2;
    cout << "bit_and: " << bit_and << endl;
    cout << "bit_or: " << bit_or << endl;
    cout << "bit_not: " << bit_not << endl;
    cout << "bit_xor: " << bit_xor << endl;
    cout<< "left shift: "<<left_shift<<endl;
    cout<<"right shift: "<<right_shift<<endl;
    return 0;
}

/*
**OUTPUT**
bit_and: 5
bit_or: 7
bit_not: -8
bit_xor: 2
left shift: 20
right shift: 1 
*/
