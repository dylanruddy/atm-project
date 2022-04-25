//THIS PROGRAM ALLOWS THE USER TO ACCESS, CHECK BALANCE, DEPOSIT, AND MAKE WITHDRAWLS BETWEEN THEIR CHECKING & SAVINGS ACCOUNT
//CREATED BY DYLAN JAMES RUDDY

#include <iostream>

using namespace std;


void mainmenu(){
   cout << "Good morning Dylan, Which account would you like to access?" << endl;
   cout << "1. Checking Account" << endl;
   cout << "2. Savings Account" << endl;
}

void showmenuchecking(){
    cout << " " << endl;
    cout << "*****Checking Account*****" << endl;
     cout << " " << endl;
    cout << "1. Account Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Main Menu" << endl;
    cout << "6. Cancel" << endl;
    cout << "**************" << endl;
  }

void showmenusavings(){
    cout << " " << endl;
    cout << "*****Savings Account*****" << endl;
     cout << " " << endl;
    cout << "1. Account Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Main Menu" << endl;
    cout << "6. Cancel" << endl;
    cout << "**************" << endl;
}

int main(){

  int option;
  int password;
  int trasnfer;
  int account_selection;
  int account_selection_withdrawl;
  double checking_balance = 100;
  double savings_balance = 1000;
  double deposit;
  double withdrawl;
  int withdrawl_confirmation;
  double withdrawl_fee = 3.25;

 // LOGIN SCREEN

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


// Account Selection

mainmenu();
 cin >> account_selection;


//CHECKING ACCOUNT**********CHECKING ACCOUNT**********CHECKING ACCOUNT**********CHECKING ACCOUNT**********

 if (account_selection == 1){


do{
  showmenuchecking();
  cout << "Option: ";
  cin >> option; 

//CHECKING ACCOUNT BALANCE

      if(option == 1){
        cout << "Your checking account balance is $" << checking_balance << endl;
          }


//CHECKING DEPOSIT

      else if (option == 2){
            cout << "Please enter the amount of money you would like to deposit into your checking account:" << endl;
            cin >> deposit;
            cout << "Your checking account avalible balance is now $" << (checking_balance + deposit) << endl;
            checking_balance = checking_balance + deposit;
          }

         

//CHECKING WITHDRAWL

      else if (option == 3){
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

//CHECKING TRANSFER

     else if (option == 4){

       cout << "How much money would you like to transfer to your savings account?" << endl;
       cin >> trasnfer;

      checking_balance = (checking_balance - trasnfer); 

      savings_balance = (savings_balance + trasnfer);

      cout << "Your transfer has been made!" << endl;
      cout << "Your avalible checking account balance is $" << (checking_balance) << endl;
      cout << "Your avalible savings account balance is $" << (savings_balance) << endl;
             }              
      

//CHECKING MAIN MENU

 
     }

     while (option != 5);
     {
       mainmenu();
        cin >> account_selection;
     }
     

 }






//SAVINGS ACCOUNT******SAVINGS ACCOUNT******SAVINGS ACCOUNT******SAVINGS ACCOUNT******SAVINGS ACCOUNT******


 if (account_selection == 2){
   
   do{
  showmenusavings();
  cout << "Option: ";
  cin >> option; 
   
   //SAVINGS ACCOUNT BALANCE

      if(option == 1){
        cout << "Your savings account balance is $" << savings_balance << endl;
          }


//SAVINGS DEPOSIT

      else if (option == 2){
            cout << "Please enter the amount of money you would like to deposit into your savings account:" << endl;
            cin >> deposit;
            cout << "Your savings account avalible balance is now $" << (savings_balance + deposit) << endl;
            savings_balance = savings_balance + deposit;
          }


// SAVINGS WITHDRAWL

   else if (option == 3){
     
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
              
   

//SAVINGS TRANSFER

     else if (option == 4){

       cout << "How much money would you like to transfer to your checking account?" << endl;
       cin >> trasnfer;


      savings_balance = (savings_balance - trasnfer);

      checking_balance = (checking_balance + trasnfer); 

      cout << "Your transfer has been made!" << endl;
      cout << "Your avalible savings account balance is $" << (savings_balance) << endl;
      cout << "Your avalible checking account balance is $" << (checking_balance) << endl;
      
             }       

   }
// SAVINGS MAIN MENU

 
       while (option != 5);
     {
       mainmenu();
        cin >> account_selection;
     }
     
  }







}

