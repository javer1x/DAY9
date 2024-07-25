//program to print all even numbers between 1-20 using while loop
#include <iostream>
using namespace std;
int main() {
    int i=2;/*start with the first even number(2)*/
    while(i<=20){/*loop while number(i)is less than or equal to 20*/
        cout<<"Even number between 1-20 are:"<<i<<endl;/*print the even number*/
        i+=2;/*increment num by 2 to get next even number*/
    }
    return 0;
    }