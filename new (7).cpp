#include<iostream>
#include<cstdlib>
using namespace std ;

void menu() {
cout<<"====================================" <<endl;
cout<<" \t    ARZEL ATM MACHINE" <<endl;
cout<<"====================================" <<endl;
cout<<"1.Balance" <<endl;
cout<<"2.Deposit amount"<<endl;
cout<<"3.Withdraw amount" <<endl;
cout<<"4.Back" <<endl;
cout<<"5.Exit" <<endl;
cout<<"************************************" <<endl;
}

int main() {

float balanced = 1000.00;
int option;
string Pin;
bool tf = true;
cout<<"===================================="<<endl;
cout<<"\t    ARZEL ATM MACHINE" <<endl;
cout<<"===================================="<<endl;


cout<<"Enter your pin: " ;
cin>>Pin;

if(Pin == "****" || Pin == "******" ){
cout<<"Log in Successfully! " <<endl;
}
if(Pin!="****" && Pin!="******" ){
cout<<"Your Pin cannot access! "<<endl ;
cout<<"Please try again! " <<endl;
return false;
}
do{
menu() ;
cout<<"Enter you option: " ;
cin>>option;
switch(option) {
case 1:cout<<"Your balanced is:" << balanced<<endl;
break;
case 2:cout<<"Deposit Amount: ";
float deposit;
cin>>deposit;
balanced+=deposit;
cout<<"Your deposit is " <<deposit<<endl;
cout<<"Your total balanced is:" <<balanced<<endl;
break;
case 3:cout<<"Withdraw amount: " ;
float withdraw;
cin>>withdraw;
if(withdraw>=balanced){
cout<<"You dont have enough balanced to withdraw this amount" <<endl;
}
else{
balanced-=withdraw;
cout<<"You withdraw is "<<withdraw <<endl;
cout<<"Now Your total balanced is " <<balanced <<endl;
} 
break;
case 4: cout<<"You Entered Back"<<endl;
cout<<"SYSTEM TERMINATED DONE >>>>> Please Enter Exit >>>no.5" <<endl;
break;
case 5:cout<<"You Entered Exit"<<endl;
       cout<<"Done Processing >>>> SYSTEM EXIT_SUCCESS" <<endl;
       cout<<"Thank You for using our AUB ATM MACHINE " <<endl;
       system("pause>0" ) ;
}
}
   while(option!=5) ;
   system("cls");
return 0;
}