/*This is My first project an Atm Simulator 
in 4 months of learning C++. Hope I will enchance 
My code Next year */
  
#include<iostream> //Input Output of the program
#include<cstdbool>//for boolean
#include<iomanip> //for precision and fixed
#include<cstdlib> //For cls, and pause
 
using namespace std;
 
class personal_details //Classes
{
  private:
    string _data; //Private data
    double _bal;//Private data
    public:
     void collect_data(string n) //Setters
     {
       _data = n;
     }
     string get_data() //Getters
     {
       return _data;
     }
     
     void collect_bal(double b)//Setters
     {
       _bal = b;
     }
     double get_b()//Getters
     {
       return _bal;
     }
     void choices() //Menu Of the ATM
     {
       cout<<"============================\n";
       cout<<"     \t Options     "<<endl;
       cout<<"============================\n";
       cout<<" [1]  Check Balance"<<endl;
       cout<<" [2]  Withdraw Money"<<endl;
       cout<<" [3]  Deposit"<<endl;
       cout<<" [4]  Back"<<endl;
       cout<<" [5]  Exit"<<endl;
       cout<<"____________________________\n";
    } 
};
 
int main() //Main body
{
  cout<<"=========================="<<endl;
  cout<<"\tATM SYSTEM"<<endl;
  cout<<"=========================="<<endl;
  
  string _pin;
  personal_details p;
  
  cout<<"Enter you pin: ";
  getline(cin,_pin);
  
  p.collect_data(_pin);
  
  if(_pin=="******" || _pin=="****")
  {
    cout<<"Log in Successfully! "<<endl;
  }
  else
  {
    cout<<"Please Try again!"<<endl;
    return 1;
  }
  cout<<endl;
  
         int option;
         double bal = 1000.00;
         do
         {
           p.choices();
           cout<<"Select Options: ";
           cin>>option;
  
          switch(option) //Switch For Options
         {
             case 1:
                cout<<fixed<<setprecision(2)<<"Your balanced is "<<bal<<endl;
               break;    
              
             case 2: 
               double withdraw_money;
               cout<<"Enter withdraw: ";
               cin>>withdraw_money;
               cout<<"\n";
                   cout<<fixed<<setprecision(2)<<"You withdraw: "<<withdraw_money<<endl;
               cout<<"\n";
                withdraw_money = bal - withdraw_money;
               cout<<"Now your balanced is:"<<withdraw_money<<endl;
                  break;
                 
                 case 3:
                   double dep_money;
                   cout<<"Enter Deposit: ";
                   cin>>dep_money;
                   cout<<"\n";
                   cout<<fixed<<setprecision(2)<<"You deposit: "<<dep_money<<endl;
                   cout<<"\n";
                   bal +=dep_money;
                   cout<<"Now your balance is:"<<bal<<endl;
                   break;
                   
                 case 4:
                   cout<<endl;
                   cout<<"You press Back\n\n "<<endl;
                   break;
                   
                 case 5:
                   cout<<endl;
                   cout<<"You pressed Exit "<<endl;
                   system("pause>0");
                   cout<<endl;
                   cout<<"System terminated."<<endl;
                   system("cls");
                   return 1;  
                   
                 default:
                   cout<<"\n";
                   cout<<"Invalid choices "<<endl;
         } 
     }while(option!=5); 
        
     return 0;
}
 