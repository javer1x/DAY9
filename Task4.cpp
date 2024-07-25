//write a program to check if a given number is prime using a while loop
#include <iostream>
using namespace std;
int main() {
    int n;/*declare variable to store input value*/
    cout<<"Enter any positive integer"<<endl;
    cin>>n;
    int i=2;/*initialize a loop counter starting from 2*/
    while(i<=n/2){/*loop through numbers from 2 to half of n*/
        if(n%i==0){/*check if n is divisible by i*/
            cout<<n<<"is not a prime number"<<endl;/*if divisible, print that n is not a prime number*/
        }
        else{
            cout<<n<<"is a prime number"<<endl;/*if not,print that n is a prime number*/
        }
     i++;/*increment the loop counter*/
    }
    
}