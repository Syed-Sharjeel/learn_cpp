// Write a void function that generates a precise delay of 2 seconds whenever it is called.
#include <iostream>
#include <ctime>
using namespace std;
void delayTwoSeconds();
int main() 
{
    cout << "Waiting for 2 seconds" <<endl;
    delayTwoSeconds();
    cout<<"Done!"<<endl;
    return 0;
}

void delayTwoSeconds() {
    clock_t start_time = clock();
    while ((clock() - start_time) < 2 * CLOCKS_PER_SEC);
}