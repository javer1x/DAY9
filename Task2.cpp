//program to calculate summ of all natural numbers upto given number using while loop
#include <iostream>
using namespace std;
int main() {
    /*declare variable for num,sum and loop counter*/
    int n;
    int sum=0;
    int i=1;
    /*prompt the user to enter a number*/
    cout<<"Enter any number"<<endl;
    cin>>n;
    /*calculate sum of natural number using while loop*/
    while(i<=n) {
        sum+=i;/*add the current value of i to the sum*/
        i++;
    }
    cout<<"Sum of natural num "<<sum<<endl;/*print the calculated sum*/
    return 0;
}