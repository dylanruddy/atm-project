//THIS PROGRAM ALLOWS THE USER TO ACCESS, CHECK BALANCE, DEPOSIT, AND MAKE WITHDRAWLS BETWEEN THEIR CHECKING & SAVINGS ACCOUNT
//CREATED BY DYLAN JAMES RUDDY

#include <iostream>

using namespace std;

void showmenu(){
    cout << "*****MENU*****" << endl;
    cout << "1. Checking Account Balance" << endl;
    cout << "2. Savings Account Balance" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Withdraw" << endl;
    cout << "5. Cancel" << endl;
    cout << "**************" << endl;
}


int main(){

  int option;
  int password;
  int account_selection;
  int account_selection_withdrawl;
  double checking_balance = 100;
  double savings_balance = 1000;
  double deposit;
  double withdrawl;
  int withdrawl_confirmation;
  double withdrawl_fee = 3.25;

 // code under here

  std::cout << "Welcome to Family ATM!:\n";
  cout << "Please enter your password:" << endl;
  cin >> password;
       if (password == 123){
         cout << "Welcome User" << endl;
       }

       while (password != 123){
             cout << "Incorrect password. Please try again" << endl;
             cin >> password;

           }


 do{
  showmenu();
  cout << "Option: ";
  cin >> option; 

//CHECKING ACCOUNT BALANCE

      if(option == 1){
        cout << "Your checking account balance is $" << checking_balance << endl;
          }

// SAVINGS ACCOUNT BALANCE

      else if (option == 2){
        cout << "Your savings account balance is $" << savings_balance << endl;
      }    


//DEPOSIT

      else if (option == 3){
        cout << "Select the account you would like to make the deposit into" << endl;
        cout << "1. Checking Account" << endl;
        cout << "2. Savings Account" << endl;
        cin >> account_selection;
          
          if (account_selection == 1){
            cout << "Please enter the amount of money you would like to deposit into your checking account:" << endl;
            cin >> deposit;
            cout << "Your checking account avalible balance is now $" << (checking_balance + deposit) << endl;
            checking_balance = checking_balance + deposit;
          }

          else if (account_selection == 2){
            cout << "Please enter the amount of money you would like to deposit into your savings account:" << endl;
            cin >> deposit;
            cout << "Your savings account avalible balance is now $" << (savings_balance + deposit) << endl;
            savings_balance = savings_balance + deposit;
          }
      }

//WITHDRAWL

      else if (option == 4){
        cout << "Which account would you like to withdrawl from?" << endl;
        cout << "1. Checking Account" << endl;
        cout << "2. Savings Account" << endl;
        cin >> account_selection_withdrawl;

          if(account_selection_withdrawl == 1){

             cout << "Please enter the amount you would like to withdrawl" << endl;
             cin >> withdrawl;
             cout << "There is a $3.25 transaction fee. Would you like to proceed? (1 = Yes, 2 = No)" << endl;
             cin >> withdrawl_confirmation;
        
               if (withdrawl_confirmation == 1){
                 cout << "You've withdrawn $" << withdrawl << ". Your checking account remaining avalible balance is $" << ((checking_balance - withdrawl) - withdrawl_fee) << endl;

                  checking_balance = ((checking_balance - withdrawl) - withdrawl_fee);
               }
              else if (withdrawl_confirmation == 2){
                  cout << "Your transaction has been canceled" << endl;
                  }
              }
      
             
           else if(account_selection_withdrawl == 2){

             cout << "Please enter the amount you would like to withdrawl" << endl;
             cin >> withdrawl;
             cout << "There is a $3.25 transaction fee. Would you like to proceed? (1 = Yes, 2 = No)" << endl;
             cin >> withdrawl_confirmation;
               if (withdrawl_confirmation == 1){
               cout << "You've withdrawn $" << withdrawl << ". Your  savings account remaining avalible balance is $" << ((savings_balance - withdrawl) - withdrawl_fee) << endl;
               }
               savings_balance = ((savings_balance - withdrawl) - withdrawl_fee);
               }
               else if (withdrawl_confirmation == 2){
               cout << "Your transaction has been canceled" << endl;
              }

      }
 }

 while (option != 5);

}
