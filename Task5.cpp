//write a program that asks the user to enter a pass use do-while loop
 #include <iostream>
using namespace std;
int main() {
    /*declare a string variable to store correct password*/
    string pass="password123";/*replace with the actual password*/
    string enteredpass;/*declare a string variable to store enered password*/
    do{/*Start a do-while loop to repeatedly prompt for the password*/
    /*prompt the user to enter a password with atleast 11 characters*/
        cout<<"Enter password containing almost 11 characters"<<endl;
        cin>>enteredpass;/*read the entered password from the user*/
        if(enteredpass==pass){/*check if the entered password matches the correct password*/
            cout<<"Correct password!,Access granted"<<endl;/*if correct,display a success message*/
        }
        else{
            cout<<"Incorrect password.Try again"<<endl;/*if not,display a error message*/
        }
    }
    while(enteredpass!=pass);/*continue the loop untill the correct password is entered*/
    return 0;
}