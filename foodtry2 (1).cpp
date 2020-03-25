#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main()
{
    int a,s,b,pizza,ye,y,c,d,e,f,g,h,option;

    cout<<"                 ************Welcome to our Food Ordering system************"<<endl;
    cout<<"                                    *********Menu*************"<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"1.Pizza =20"<<endl;
    cout<<"2.Burger =15"<<endl;
    cout<<"3.Crispy chicken=39"<<endl;
    cout<<"4.Spaghetti=40"<<endl;
    cout<<"5.Makizushi=50"<<endl;
    cout<<"6.Tetrazzini=50"<<endl;
    cout<<"7.Ice cream=10"<<endl;
    cout<<"6.Coke=2"<<endl;
    cout<<"Enter your order:"<<endl;
    cin>>a;

    switch(a)
    {
        again:

        case 1:
                        cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;

   		a=20;
   		s=a*pizza;
   			cout<<"YOU ORDER  Pizza : 20";
   			cout<<" \n";
   				cout<<"NUMBER OF Pizza IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  PIZZA"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;


            case 2:
                cout<<"\n\n\tHOW MANY BURGER YOU WANT :";
   		cin>>pizza;

   		b=15;
   		s=b*pizza;
   			cout<<"YOU ORDER  Burger : 15";
   			cout<<" \n";
   				cout<<"NUMBER OF Burger IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;


                case 3:
                    cout<<"\n\n\tHOW MANY Chrispy Chicken YOU WANT :";
   		cin>>pizza;

   		c=39;
   		s=c*pizza;
   			cout<<"YOU ORDER  Chrispy Chicken: 39";
   			cout<<" \n";
   				cout<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;


                    case 4:
                        cout<<"\n\n\tHOW MANY Spaghetti YOU WANT :";
   		cin>>pizza;

   		d=40;
   		s=d*pizza;
   			cout<<"YOU ORDER  Spaghetti: 40";
   			cout<<" \n";
   				cout<<"NUMBER OF Spaghetti IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;


                        case 5:
                        cout<<"\n\n\tHOW MANY Makizushi YOU WANT :";
   		cin>>pizza;

   		e=50;
   		s=e*pizza;
   			cout<<"YOU ORDER Makizushi: 50";
   			cout<<" \n";
   				cout<<"NUMBER OF Makizushi IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Makizushi"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;

   	break;

                        case 6:cout<<"\n\n\tHOW MANY Tetrazzini YOU WANT :";
   		cin>>pizza;

   		f=50;
   		s=f*pizza;
   			cout<<"YOU ORDER  Tetrazzini : 50";
   			cout<<" \n";
   				cout<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;

   	break;

                        case 7:cout<<"\n\n\tHOW MANY ICECREAM YOU WANT :";
   		cin>>pizza;

   		g=10;
   		s=g*pizza;
   			cout<<"YOU ORDER  ICECREAM : 10";
   			cout<<" \n";
   				cout<<"NUMBER OF ICECREAM IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER ICECREAM"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;

   	break;
                        case 8:
                            cout<<"\n\n\tHOW MANY COKE YOU WANT :";
   		cin>>pizza;

   		h=2;
   		s=h*pizza;
   			cout<<"YOU ORDER  COKE : 2";
   			cout<<" \n";
   				cout<<"NUMBER OF COKE IS : "<<pizza;
   		cout<<"\n";
   	cout<<"\n\n\n\tYOU ORDER COKE"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;

   	break;


                            default:
                                cout<<"You have entered wrong order";
                                goto again;





    }


  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";

  cin>>y;
  if(option==y)
  {

      goto again;
      return 0;
  }

 else


   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER..GENERATING BILL ";
   	for(int a=1;a<8;a++)
	{

		cout << "...";
	}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : 123"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Rifah"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rm."<<s<<endl;
                        cout<<"\t\t\t\t\t\t\t ";
                        cout<<"\t\t\t TOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;



    getch();




}
