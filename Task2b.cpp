//program to calculate sum of even and odd num
#include <iostream>
using namespace std;
int main() {
    /*declaring variables*/
    int n;
    int sumEven=0;
   int sumOdd=0;
    cout<<"Enter any positive integer "<<endl;
    cin>>n;
    int i=1;/*initializing loop counter*/
    while(i<=n) {/*loop through numbers from 1 to n*/
        if(i%2==0){/*check if the current number is even*/
            sumEven+=i;/*add the even number to sum of even numbers*/
        }
        else{
            sumOdd+=i;/*add the odd number to sum of odd numbers*/
        }
        i++;/*increment the loop counter*/
    }
    cout<<"The sum of even numbers is"<<sumEven<<endl;
    cout<<"The sum of odd numbers is"<<sumOdd<<endl;
    return 0;
}