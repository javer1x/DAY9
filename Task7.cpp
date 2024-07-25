//write a program to print following pattern using nested while loop
#include <iostream>
using namespace std;
int main() {
    int rows=5;/*specify the number of rows for the pattern*/
    int i=1;/*initialize a counter for outer loop(rows)*/
    while(i<=rows){/*outer loop iterates through each row*/
        int j=1;/*initialize a counter for inner loop(columns)*/
        while(j<=i){/*inner loop prints stars in each row*/
            cout<< " *";/*print a star and a space*/
            j++;/*increment the colum counter*/
        }
        cout<<endl;/*move to next line after printing a row*/
        i++;/*increment the row counter*/
    }
    return 0;
}