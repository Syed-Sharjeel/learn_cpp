/*
Using for() loops, write a program that displays all possible combination of 6 bit binary number. 
(Hint: You shall need 6 int variables for the six digits)  
Sample Run:   000000, 000001, 000010, 000011, …………….  111111 
*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6;

    for (n1 = 0; n1 <= 1; n1++) {
        for (n2 = 0; n2 <= 1; n2++) {
            for (n3 = 0; n3 <= 1; n3++) {
                for (n4 = 0; n4 <= 1; n4++) {
                    for (n5 = 0 ;n5 <= 1; n5++) {
                        for (n6 = 0; n6 <= 1; n6++) {
                           cout <<n1 <<n2 <<n3 <<n4 <<n5 <<n6 <<endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
