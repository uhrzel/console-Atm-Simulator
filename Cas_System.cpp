#include<iostream>
#include<stdlib.h>
using namespace std;
 
void menu()
{
    printf("================================================\n");
    cout<<"\t------------- MENU-------------"<<"\n\n";
    
    cout<<"\t1. Hotdog Rolls\t\t10 php"<<endl;
    cout<<"\t2. Siopao Asado\t\t6 php"<<endl;
    cout<<"\t3. Doughnut\t\t15 php"<<endl;
    cout<<"\t4. Coke\t\t\t18 php"<<endl;
    cout<<"\t5. Coffe mocha\t\t12 php"<<endl;
    cout<<"\t6. Lemon Juice\t\t15 php"<<endl;
    printf("================================================\n");
}
 
int main()
{
    string ans;
    int b, n, total = 0;
    
    do
    {
            menu();
            
    cout<<"Choose Number 1-4 to buy: ";
    cin>>n;
      
switch(n)
    {
        case 1:
        cout<<"How many you want to buy: ";
    	cin>>b;
        b*=10;
        break;
        
        case 2:
        cout<<"How many you want to buy: ";
  	  cin>>b;
        b*=6;
        break;
        
        case 3:
        cout<<"How many you want to buy: ";
    	cin>>b;
        b*=15;
        break;
        
        case 4:
        cout<<"How many you want to buy: ";
   	 cin>>b;
        b*=18;
        break;
        
        case 5:
        cout<<"How many you want to buy: ";
  	  cin>>b;
  	  b*=12;
  	  break;
  	  
  	  case 6:
        cout<<"How many you want to buy: ";
  	  cin>>b;
  	  b*=15;
  	  break;
  	
        default:
        system("cls");
        cout<<"Invalid option"<<endl;
        cout<<"Please try again!";
        return 1;
    }
    total  += b;
    menu();
    
    cout<<"You want to buy again?(Y/N): ";
    cin>>ans;
    
    if(ans=="N"||ans=="n")
    {
        
    int mon;
    
    cout<<"total cost: "<<total<<endl;
    while(mon<total)
    {
    cout<<"customers money: ";
    cin>>mon;
    
    if(mon<total)
    {
    	cout<<"Your cash can't paid this items"<<endl;
    }
    else
    {
    int minus = mon - total;
    cout<<"total change: "<<minus<<endl;
    }
    }
    }   
    
    }while(ans=="Y"||ans=="y");
    
    return 0;
    
}