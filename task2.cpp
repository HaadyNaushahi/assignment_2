#include <iostream>
using namespace std;

int main() {
    
    // declaring variables 
    int option;
    
    // declaring and declaring  book variables and their availability
    int catcher = 3, nineteen = 2, mockingbird = 1, gatsby = 0, moby = 5;

    // initialializing and declaring variables for user's data
    int user_catcher = 0, user_nineteen = 0, user_mockingbird = 0, user_gatsby = 0, user_moby = 0, book_option;

    // initializing and declaring flag variable for while loop to keep the program running
    int flag = 0;

    // initializing variable for yes or no choices
    char choice;
    

    while (flag == 0) {
        // outputting options for the user
        cout << "Welcome to the Library System!" << endl;
        cout << "Please select an option: -" << endl;
        cout << "1. Borrow a book" << endl;
        cout << "2. Return a book" << endl;
        cout << "3. Exit" << endl;
        cout << "Please select an option: ";
        cin >> option;

        // Borrowing a book
        if (option == 1) {
            // displaying book options for the user 
            cout << "1. The Catcher in the Rye - Available: 3 copies" << endl;
            cout << "2. 1984                   - Available: 2 copies" << endl;
            cout << "3. To Kill a Mockingbird  - Available: 1 copy" << endl;
            cout << "4. The Great Gatsby       - Available: 0 copies" << endl;
            cout << "5. Moby Dick              - Available: 5 copies" << endl;
            cout << "Please select an option for the book you want to borrow: ";
            cin >> book_option;
            
            // nested if statements for book borrowing system
            // checking which book was selected
            if (book_option == 1) {
                // checking if book is available and not borrowed by the user already
                if (catcher > 0 && user_catcher == 0) { 
                    cout << "Book borrowed!" << endl;
                    user_catcher++;
                    catcher--;
                }
                else if (catcher <= 0) {
                   cout <<  "Book unavailable" << endl;
                }
                else {
                    cout <<  "Book already borrowed" << endl;
                }
            }
            else if (book_option == 2) {
                if (nineteen > 0 && user_nineteen == 0) { 
                    cout << "Book borrowed!" << endl;
                    user_nineteen++;
                    nineteen--;
                }
                else if (nineteen <= 0) {
                    cout <<  "Book unavailable" << endl;
                }
                else {
                    cout <<  "Book already borrowed" << endl;
                }
            }
            else if (book_option == 3) {
                if (mockingbird > 0 && user_mockingbird == 0) { 
                    cout << "Book borrowed!" << endl;
                    user_mockingbird++;
                    mockingbird--;
                } 
                else if (mockingbird <= 0) {
                    cout <<  "Book unavailable" << endl;
                }
                else {
                    cout <<  "Book already borrowed" << endl;
                }   
            }
            else if (book_option == 4) {
                if (gatsby > 0 && user_gatsby == 0) { 
                    cout << "Book borrowed!" << endl;
                    user_gatsby++;
                    gatsby--;
                }
                else if (gatsby <= 0) {
                    cout <<  "Book unavailable" << endl;
                }
                else {
                    cout <<  "Book already borrowed" << endl;
                }    
            }
            else if (book_option == 5) {
                if (moby > 0 && user_moby == 0) { 
                    cout << "Book borrowed!" << endl;
                    user_moby++;
                    moby--;
                } 
                else if (moby <= 0) {
                    cout <<  "Book unavailable" << endl;
                }
                else {
                    cout <<  "Book already borrowed" << endl;
                }   
            }
            else {
                cout << "Invalid input" << endl;
            }
            cout << "Would you like to return to main menu?" << endl;
            cout << "Y or y for Yes || N or n for No" << endl;
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
               flag = 0; 
            }
            else if (choice == 'n' || choice == 'N'){
                flag = 1;
            }
            else {
                flag = 0;
            }
                
            
        
        } // Returning a book
        else if (option == 2) {
            // displaying book options for the user 
            cout << "1. The Catcher in the Rye - Available: 3 copies" << endl;
            cout << "2. 1984                   - Available: 2 copies" << endl;
            cout << "3. To Kill a Mockingbird  - Available: 1 copy" << endl;
            cout << "4. The Great Gatsby       - Available: 0 copies" << endl;
            cout << "5. Moby Dick              - Available: 5 copies" << endl;
            cout << "Please select an option for the book you want to return: ";
            cin >> book_option;
            
            // nested if statements for book returning system
            // checking which book was selected
            if (book_option == 1) {
                // checking if book is available and not returned by the user already
                if ( user_catcher == 1) { 
                    cout << "Book returned!" << endl;
                    user_catcher--;
                    catcher++;
                }
                else if (catcher == 3){
                    cout <<  "Book cannot be  returned" << endl;
                }
            }
            else if (book_option == 2) {
                if (user_nineteen == 1) { 
                    cout << "Book returned!" << endl;
                    user_nineteen--;
                    nineteen++;
                }
                else {
                    cout <<  "Book cannot be returned" << endl;
                }
            }
            else if (book_option == 3) {
                if (user_mockingbird == 1) { 
                    cout << "Book returned!" << endl;
                    user_mockingbird--;
                    mockingbird++;
                } 
                else {
                    cout <<  "Book cannot be returned" << endl;
                }   
            }
            else if (book_option == 4) {
                if (user_gatsby == 1) { 
                    cout << "Book returned!" << endl;
                    user_gatsby--;
                    gatsby++;
                }
                else {
                    cout <<  "Book cannot be returned" << endl;
                }    
            }
            else if (book_option == 5) {
                if (user_moby == 1) { 
                    cout << "Book returned!" << endl;
                    user_moby--;
                    moby++;
                } 
                else {
                    cout <<  "Book cannot be returned" << endl;
                }   
            }
            else {
                cout << "Invalid input" << endl;
            }
            // asking the user if they want to return to main menu
            cout << "Would you like to return to main menu?" << endl;
            cout << "Y or y for Yes || N or n for No" << endl;
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
               flag = 0; 
            }
            else if (choice == 'n' || choice == 'N'){
                flag = 1;
            }
            else {
                flag = 0;
            }
           
           

        } // Exiting the program
        else if (option == 3) {
            break;

        } // condition for invalid input
        else {
            cout << "Invalid input" << endl;
        }
    }
    
    // displaying final message
    cout << "Thank you for using library management system" << endl;

    return 0;
}

// REQUIREMENTS
// 1. Selecting between borrowing and returning

// BORROWING 
// 1. When borrowing, system should ask from a list
// 2. Check availability and if the user has borrowed it
// 3. if available and not borrowed, go through borrowing process
// 4. if already borrowed, don't allow to borrow

// RETURNING
// 1. Check if book is already returned and ask which book they have to return
// 2. update the availability of the book

// PROGRAM REQUIREMENTS
// 1. Exception handling  
