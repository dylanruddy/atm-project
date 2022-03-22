#include <iostream>

using namespace std;

void showmenu(){
    cout << "*****MENU*****" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Cancel" << endl;
    cout << "**************" << endl;
}


int main(){

  int option;
  int password;
  double balance = 500;
  double deposit;
  double withdrawl;
  int withdrawl_confirmation;
  double withdrawl_fee = 3.25;

 // code under here

  std::cout << "Welcome to Family ATM!:\n";
  cout << "Please enter your password:" << endl;
  cin >> password;
       if (password == 123){
         cout << "Welcome" << endl;
       }

       while (password != 123){
             cout << "Incorrect password. Please try again" << endl;
             cin >> password;

           }


 do{
  showmenu();
  cout << "Option: ";
  cin >> option; 
      if(option == 1){
        cout << "Your balance is " << balance << endl;
          }

      else if (option == 2){
        cout << "Please enter the amount of money you would like to deposit:" << endl;
        cin >> deposit;
        cout << "Your avalible balance is now " << (balance + deposit) << endl;
        balance = balance + deposit;
         }

      else if (option == 3){
        cout << "Please enter the amount you would like to withdrawl" << endl;
        cin >> withdrawl;
        cout << "There is a $3.25 transaction fee. Would you like to proceed? (1 = Yes, 2 = No)" << endl;
        cin >> withdrawl_confirmation;
             if (withdrawl_confirmation == 1){
               cout << "You've withdrawn $" << withdrawl << ". Your remaining avalible balance is $" << ((balance - withdrawl) - withdrawl_fee) << endl;
             }
            balance = ((balance - withdrawl) - withdrawl_fee);
              }
             else if (withdrawl_confirmation == 2){
               cout << "Your transaction has been canceled" << endl;
              }
 }
 while (option != 4);
  
      
    













}