#include <iostream>
using namespace std;

int main() {
    
    // declaring variables
    int balance, amount, flag, pin, upin, userflag;
    pin = 0; 
    // initializing balance variable
    balance = 0;

    // declaring char variable to use for choices
    char choice;

    // initializing flag variable for main while loop
    userflag = 0;

    // initializing flag variable for various while loops
    flag = 0;

    // declaring a variable for user input
    int userinput;

    // while loop to keep the program running
    while (userflag == 0) {
        // giving the user options to use to perform functions accordingly 
        cout << "1. Create an account" << endl;
        cout << "2. Cash withdrawl" << endl;
        cout << "3. Cash deposit" << endl;
        cout << "4. Check balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Please select an option: ";
        cin >> userinput;
        
        // using different options from user input to perform different functions 
        // Creating an account
        if (userinput == 1) {
            
            // welcome page
            cout << "Welcome!" << endl;
            cout << "Enter a new pin please: ";
            cin >> pin;
            
            // asking for user to input a valid pin
            while (flag == 0) { 
                if (pin > 9999 || pin < 1000) {
                    cout << "Enter a valid pin in 4 digits: ";
                    cin >> pin;
                    flag = 0;
                }
                else {
                    flag = 1;        
                }
            }
            // initializing balance to $1000
            balance = 1000;
            // re initializing flag for further use
            flag = 0;
            
            // asking the user if they want to make another transaction
            cout << "Do you want to make another transaction?" << endl;
            cout << "Y for yes || N for no" << endl;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') { 
                userflag = 0;
            }
            else if (choice == 'N' || choice == 'n') { 
                userflag = 1;
            }
            else {
                cout << "Invalid input" << endl;
                userflag = 0;
            }

        } // Withdrawing an amount
        else if (userinput == 2) {
            
            // if pin account wasn't created, exit the program
            if (pin == 0) { 
                cout << "Account isn't created" << endl;
                flag = 0;
            }
            else {
                // taking input from user for pin
                cout << "Enter your pin please: " << endl;
                cin >> upin;

                // verifying if the entered pin is correct or not
                while (flag == 0) {
                    if (upin != pin) {
                        cout << "Please enter correct pin: " << endl;
                        cin >> upin;
                        flag = 0;
                    }
                    else {
                        cout << "Welcome!" << endl;
                        flag = 1;
                    }
                }
               // asking the user for the amount they was to withdraw 
                cout << "Please enter the amount you want to withdraw: ";
                cin >> amount;
                
                //checking if the entered value by the user is valid or not
                if (amount < 0) {
                    cout << "Please enter a valid positive amount" << endl;
                }
                else if (amount > balance) { 
                    cout << "Limit exceeded" << endl;
                }
                else {
                    balance = balance - amount;
                    cout << "Your remaining balance is " << balance << endl;
                }
                // re initializing flag for further use
                flag = 0;

                // asking the user if they want to make another transaction
                cout << "Do you want to make another transaction?" << endl;
                cout << "Y for yes || N for no" << endl;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') { 
                    userflag = 0;
                }
                else if (choice == 'N' || choice == 'n') { 
                    userflag = 1;
                }
                else {
                    cout << "Invalid input" << endl;
                    userflag = 0;
                }
            }

        } // depositing an amount
        else if (userinput == 3) {
             // if pin account wasn't created, exit the program
            if (pin == 0) { 
                cout << "Account isn't created" << endl;
                flag = 0;
            }
            else {
                // taking input from user for pin
                cout << "Enter your pin please: " << endl;
                cin >> upin;

                // asking the user for the amount they want to deposit
                cout << "Please enter the amount you want to deposit: ";
                cin >> amount;
                
                // checking if the value entered by the user is valid or not
                if (amount < 0) {
                    cout << "Please enter a valid positive amount" << endl;
                }     
                else {
                    balance = balance + amount;
                    cout << "Your new balance is " << balance << endl;
                }
                // re initializing flag for further use
                flag = 0;

                // asking the user if they want to make another transaction
                cout << "Do you want to make another transaction?" << endl;
                cout << "Y for yes || N for no" << endl;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') { 
                    userflag = 0;
                }
                else if (choice == 'N' || choice == 'n') { 
                    userflag = 1;
                }
                else {
                    cout << "Invalid input" << endl;
                    userflag = 0;
                }
            }

        } // Checking balance
        else if (userinput == 4){
             // if pin account wasn't created, exit the program
            if (pin == 0) { 
                cout << "Account isn't created" << endl;
                break;
            }

            // verifying if the entered pin is correct or not
            while (flag == 0) {
                if (upin != pin) {
                    cout << "Please enter correct pin: " << endl;
                    cin >> upin;
                    flag = 0;
                }
                else {
                    cout << "Welcome!" << endl;
                    flag = 1;
                }
            }
            // outputting the balance of the user    
            cout << "Your current balance is " << balance << endl;

            // asking the user if they want to make another transaction
            cout << "Do you want to make another transaction?" << endl;
            cout << "Y for yes || N for no" << endl;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') { 
                userflag = 0;
            }
            else if (choice == 'N' || choice == 'n') { 
                userflag = 1;
            }
            else {
                cout << "Invalid input" << endl;
                userflag = 0;
            }
        }
        else if (userinput == 5) { // exiting the program
            cout << "Exiting program..." << endl;
            break;
        } 
        else { // exception for invalid input
            cout << "Invalid input" << endl;

            // asking the user if they want to make another transaction
            cout << "Do you want to make another transaction?" << endl;
            cout << "Y for yes || N for no" << endl;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') { 
                userflag = 0;
            }
            else if (choice == 'N' || choice == 'n') { 
                userflag = 1;
            }
            else {
                cout << "Invalid input" << endl;
                userflag = 0;
            }
        }
    }
    // final goodbye message
    cout << "Thank you for using our ATM service!" << endl;
        
    return 0;
}

