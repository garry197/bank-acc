#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class bank
{
private:
    string id;
    double money;
    double accno;
public:
bank()
    {
        cout<<"Welcome To Ashish Jindal Bank..."<<endl;
    }
void display()
{ string name;
  static int am;
  static int no;
   cout<<"Enter Your Name: ";
   cin.ignore();
   getline(cin,name);
   cout<<"Enter Initial Amount You Want To Add: "; cin>>am;
   cout<<"Type Your Favourite Bank Acoount Number(4-Digits): "; cin>>no;
   cout<<"\nCongratulations! Your Account Has Been Created Successfully.."<<endl<<endl;
   cout<<'\t'<<'\t'<<"ACCOUNT SUMMARY: "<<endl<<'\t'<<'\t'<<'\t'<<"NAME: "<<name<<endl<<'\t'<<'\t'<<'\t'<<"ACCOUNT NUMBER: "<<no<<endl<<'\t'<<'\t'<<'\t'<<"CURENT BALANCE: "<<am<<endl<<endl;
 id=name;money=am;accno=no;

}
double add(double x)
{
    money+=x;
    return money;
}
double debmoney(double x)
{
    if(x>money)
{
    cout<<"Not Enough Money..."<<endl;
}
else money-=x;

}
void viewbal()
{
    cout<<"The Current Balance In Your Account Is: "<<money<<endl;
}

};

int main()
{bank b;
char ch;
int choice;
double n,f;
cout<<"Do You Want To Open An Account With Us?(Y/N) ";
cin>>ch;
switch(ch)
{
    case 'N':cout<<"Have A Nice Day!!!"<<endl;
              exit(0);
     case 'n':cout<<"Have A Nice Day!!!"<<endl;
              exit(0);
    case 'Y': cout<<"Thank You For Choosing Us..."<<endl;
           b.display();
              break;
    case 'y': cout<<"Thank You For Choosing Us..."<<endl;
              b.display();
              break;
    default: cout<<"Wrong Entry..Please Type 'Y' or 'N'"<<endl;
}

do
{


cout<<"Enter What You Want To Do Now: "<<endl;
    cout<<"1.CREDIT AMOUNT"<<endl<<"2.DEBIT AMOUNT"<<endl<<"3.VIEW BALANCE"<<endl<<"4.EXIT"<<endl;
cout<<"Enter Your Choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1: cout<<"Enter The Amount You Want to Credit: ";
           cin>>n;
           b.add(n);
           break;
    case 2:
        cout<<"Enter The Amount You Want To Debit: ";
        cin>>f;
        b.debmoney(f);
        break;


    case 3:b.viewbal();
           break;

    case 4: cout<<"YOU HAVE BEEN LOGGED OUT SUCCESSFULLY!!"<<endl<<"SEE YOU! NEXT TIME"<<endl;
            exit(0);
    default:
        cout<<"Wrong Entry..Please Enter Correct Choice.."<<endl;
    }

}
while(choice!=4);

return 0;


}
