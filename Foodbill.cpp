#include <iostream>

using namespace std;
class login{
    char str[20];
    public:
    void read()
    {
        cout<<"USER ID:";
    cin.getline(str,20);
     cout<<"PASSWORD:";
     cout<<"********\n";
     cout<<"Login successful\n";
     }
    void print()
    {
        cout<<"WELCOME TO K&K FOODS  "<<str<<endl;
    }
};
class food{
    public:
    void show()
    {
        cout<<"@@@@@ MENU @@@@@"<<endl;
        cout<<"---->>>VEG<<<----"<<endl;
        cout<<"1.salad      150\n2.pizza      200\n3.veg rice   250"<<endl;
        cout<<"---->>>NON-VEG<<<----"<<endl;
        cout<<"4.Biryani          270\n5.Tanduri          360\n6.chilli chicken   290"<<endl;
    }
};
class choose{
    public:
    int x,p,q,sum=0;
    void display()
    {
        cout<<"NO.OF ITEMS = ";
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>p;
            switch(p)
            {case 1:
            q=150;
            cout<<"salad=150\n";
            break;
            case 2:
            q=200;
            cout<<"pizza=200\n";
            break;
            case 3:
            q=250;
            cout<<"veg rice=250\n";
            break;
            case 4:
            q=270;
            cout<<"Biryani=270\n";
            break;
            case 5:
            q=360;
            cout<<"Tanduri=360\n";
            break;
            case 6:
            q=290;
            cout<<"chilli chicken=290\n";
            break;
                }
                sum=sum+q;
                }
                
        
    }
    
};
class bill:public choose{
    public:
    int subtot;
    float tot;
    void dis()
    {
        cout<<"***********BILL**********"<<endl;
        subtot=sum;
        cout<<"Amount without tax = "<<subtot<<endl;
    }
    void totalamt()
    {
        cout<<"SGST = 18%\nCGST = 18%\n";
        tot=subtot+(2*subtot*0.18);
        cout<<"Amount with tax = "<<tot<<endl;
    }
};
class payment:public bill{
    public:
    int option;
    float amount;
    void pay()
    {cout<<"choose your payment option\n->cards\n->UPI\n";
     cin>>option;
     amount=tot;
     switch(option)
     {
        case 1:
        cout<<"->cards\n";
        break;
        case 2:
        cout<<"->UPI\n";
          break;
           }
      cout<<"Amount of rs "<<amount<<" paid"<<endl;    
      cout<<"Your order will be delivered in 30 minutes"<<endl;
 }
 void logout()
 {
    cout<<"*******Logged out********"<<endl;
 }
};


int main()
{login w;
 food f;
 payment p;
 w.read();
 w.print();
 f.show();
 p.display();
 p.dis();
 p.totalamt();
 p.pay();
 p.logout();
 return 0;
}
