//GROUP PROJECT ONLINE ORDERING SYSTEM FOR THE DELIVERY SERVICE

#include<iostream> // header file in for input and output stream
#include <cstdlib> // general utilities (system())
#include<conio.h> //includes inbuilt functions like getch() and clrscr()
#include <windows.h> // declarations for all of the functions in the Windows (sleep())
#include <string.h> //<string.h> is standard library include
#include<iomanip> //helps us in manipulating the output of program
using namespace std;

void intro();//shows title and lecturer name
void price();//show the price of delivery 
void account();	//to create new account
void calc(); //this function is to calculate price by weight,place and quantity	
void credit();//Shows the creater of this program

//***************************************MAIN PROGRAM**************************************************
int main()
{
	 system("title POS LAJU Sdn.Bhd"); //(our delivery company) //this will shows our company name on the file program
	char cont='y';
	intro();
	Sleep(0); //delay the program by 5 seconds
	system("cls"); //used to pass the commands that can be executed in the command processor or the terminal of the operating system, and finally returns the command after it has been completed.
					   //clears the out screen
	do{ //do while loop (to do the repeatition on program until user put wrong answer into the program)
	price();	
	account();
	calc();
	cout<<"\n";
 	cout<<"\t PLEASE WAIT 5 SECOND FOR ANOTHER PROCESS"<<std::flush; //(std::flush)  program termination forces
	Sleep(0); //The execution is suspended, for this period of time. The execution will be resumed back when the time interval of sleep expires
	cout<<"\n";
	cout << "\t Do You Want To Process Another Delivery [y/n] : ";//need to know if customer want to do another delivery
	cin >> cont;
	cout<<"\n*********************************************************************************";
	cout<<"\n";
	system("cls");
}while((cont=='y') || (cont == 'Y')); // if the user enter "y" the program will repeat the proccess, and if user enter other letter it will stop the program and reach the credit() function
	credit();
	return 0;
}

//**********************************intro****************************************************************	
void intro()
{	
    system("color F5"); //this function is function in window and it will change the color of the text
    char intro[3][100]={{"\t\t  ONLINE ORDERING SYSTEM FOR THE DELIVERY SERVICE"}, 
	                   {"\t\t\t          GROUP PROJECT      "},
	                   {"\t\t          \3 MADAM MAHFUDZHAH OTHMAN \3  "}};
cout<<"\n\n";
cout<<"\t\t***************************************************"<<endl;
cout<<"\t\t\t    WELCOME TO POS LAJU Sdn.Bhd "<<endl;
cout<<"\t\t***************************************************"<<endl;

for(int x=0;x<3;x++)
{
        for(int y=0;y<100;y++)
        {
        cout<<intro[x][y]; //this for loop is for the intro to appeared one by one according to sleep() function 
        Sleep(0); //it will delay the word to appeared 
        }
        cout<<"\n";
        }
cout<<"\t\t**************************************************"<<endl;

}
//***************************************price********************************************************
void price()
{
cout<<"\t";
cout<<"\t\t       POSLAJU NATIONAL COURIER"<<endl;
cout<<"\t\t   ------------------------------------------------"<<endl;
cout<<"\t\t   |Parcel weight|West Malaysia|Sarawak  |Sabah   |"<<endl;
cout<<"\t\t   ------------------------------------------------"<<endl;
cout<<"\t\t   |<0.50 kg     | RM 6.00     |RM 8.50  |RM 9.00 |"<<endl;
cout<<"\t\t   |<1.00 kg     | RM 8.50     |RM 12.50 |RM 14.50|"<<endl;
cout<<"\t\t   |<1.50 kg     | RM 11.00    |RM 16.50 |RM 20.00|"<<endl;
cout<<"\t\t   |<2.00 kg     | RM 14.00    |RM 20.50 |RM 25.00|"<<endl;
cout<<"\t\t   |<2.50 kg     | RM 21.00    |RM 34.50 |RM 41.00|"<<endl;
cout<<"\t\t   |<3.00 kg     | RM 24.00    |RM 39.00 |RM 46.00|"<<endl;
}
//*****************************account*******************************
void account()
{

	string name,address,recieverName,recieverAdd;
	int phone,recieverPhone;
	{
	cout<<"\n";
	cout<<"\t  ***********************Delivering Details*************************"<<endl;
	cout<<"\t     Your Name: ";
	getline(cin,name);
	cout<<"\t     Your Address:";   //to company know customer/sender detials 
	getline(cin,address);
	cout<<"\t     Reciever Name: ";
	getline(cin,recieverName);
	cout<<"\t     Reciever Address : ";   //to company know reciver of parcel detials 
	getline(cin,recieverAdd);
	cout<<"\t     Reciever Phone Number : ";
	cin>>recieverPhone;
	cout<<"\t     Your Phone Number: ";
	cin>>phone;
	cout<<"\t  ****************************************************************"<<endl;
	}
	system("cls");
	
	cout<<"\t  _________________________________________________________________"<<endl;
	cout<<"\t  ___________________________Reciever______________________________"<<endl;
	cout<<"\t  Sender Name : "<<name<<endl;
	cout<<"\t  Sender Address : "<<address<<endl;
	cout<<"\t  Sender Phone Number : "<<phone<<endl;
	cout<<"\t  _________________________________________________________________"<<endl;
	cout<<"\t  ____________________________Sender_______________________________"<<endl;	
	cout<<"\t  Reciever Name : "<<recieverName<<endl;
	cout<<"\t  Reciever Address : "<<recieverAdd<<endl;
	cout<<"\t  Reciever Number : "<<recieverPhone<<endl;
	cout<<"\n";
	
	

	
}
//*******************************calc***********************************************************
void calc()
{
	int code,quantity;
	float weight,price,Nprice;
	
	cout<<"\n";
	cout << "\t-Please enter destination code (1-west malaysia, 2-sarawak, 3-sabah) : ";
	cin >> code; //for customer put their parcel where they want to send and the price is diff
	
	
	if(code==1)
 	{
 	cout<<"\t-Weight of Parcel (KG) : "; //to determine parcel price by weight
	cin>>weight;
	cout<<"\t-Enter the quantity of the parcel :"; //for customer put the quantity of their parcel
	cin>>quantity;
 		if(weight<=0.50) //multi-ways selection (if else statement)
 		{
 		price=6.00;
 		Nprice=price*quantity;
 		}
 		else
 		if(weight<=1.00){
 		price=8.50;
 		Nprice=price*quantity;
 	}
 		else if(weight<=1.50)
 		{
 			price=11.00;
 			Nprice=price*quantity;
 		}
 		else if (weight<=2.00)
 		{
 			price=14.00;
 			Nprice=price*quantity;
 		}
 		else if (weight<=2.50)
 		{
 			price=21.00;
 			Nprice=price*quantity;
 		}
 		else if(weight<=3.00)
 		{
 			price=24.00;
 			Nprice=price*quantity;
 		}
 	}
 	if(code==2)
 	{
 	cout<<"\t-Weight of Parcel (KG) : ";
	cin>>weight;
	cout<<"\t-Enter the quantity of the parcel :";
	cin>>quantity;
 		if(weight<=0.50)
 		{
 		price=8.50;
 		Nprice=price*quantity;
 		}
 		else
 		if(weight<=1.00){
 		price=12.50;
 		Nprice=price*quantity;
 	}
 		else if(weight<=1.50)
 		{
 			price=16.50;
 			Nprice=price*quantity;
 		}
 		else if(weight<=2.00)
 		{
 			price=20.50;
 			Nprice=price*quantity;
 		}
 		else if (weight<=2.50)
 		{
 			price=34.50;
 			Nprice=price*quantity;
 		}
 		else if (weight<=3.00)
 		{
 			price=39.00;
 			Nprice=price*quantity;
 		}
 	}
 	if(code==3)
 	{
 	cout<<"\t-Weight of Parcel (KG) : ";
	cin>>weight;
	cout<<"\t-Enter the quantity of the parcel :";
	cin>>quantity;
 		if(weight<=0.50)
 		{
 		price=9.00;
 		Nprice=price*quantity;
 		}
 		else
 		if(weight<=1.00){
 		price=14.50;
 		Nprice=price*quantity;
 	}
 		else if(weight<=1.50)
 		{
 			price=20.00;
 			Nprice=price*quantity;
 		}
 		else if(weight<=2.00)
 		{
 			price=25.00;
 			Nprice=price*quantity;
 		}
 		else if (weight<=2.50)
 		{
 			price=41.00;
 			Nprice=price*quantity;
 		}
 		else if (weight<=3.00)
 		{
 			price=46.00;
 			Nprice=price*quantity;
 		}
}												//to set the decimal of number
	cout<<"\t-Price for One Parcel= RM"<< fixed<<setprecision(2) <<price<<endl;; //calling or print price for one item
	cout<<"\t-Total Price= RM"<<fixed<<Nprice<<endl;//to calling or print the total price that customer need to pay

}
//**********************************CREDIT****************************************************
void credit()
{	
  
    system("color F5"); //this function is function in window and it will change the color of the text
    char intro[10][100]={{"\t\t  Online ordering system for the delivery service"},
	                   {"\n\t\t MADE BY : MOHAMAD IKHWAN BIN MOHAMAD ROSDI"},
	                   {"\t\t           MUHAMMAD HARITH DANIAL BIN MOHD ZUHAIRI"},
	                   {"\t\t           MUHAMAD SYAZWAN BIN YUNUS"},
	                   {"\t\t           MUHAMMAD IKHWAN BIN OMAR"},
	                   {"\t\t  COURSE : CSC415   "},
	                   {"\t\t  GROUP  : RCS2401A"},
	                   {"\n\t\t\t    \3THANK YOU MADAM MAHFUDZAH\3"},	                   
	                   {"   I enjoyed every minute of your lecture as well as your marvelous sense of humor"}}; 
	                   
system("cls");//used to pass the commands that can be executed in the command processor or the terminal of the operating system, and finally returns the command after it has been completed.
					   //clears the out screen
cout<<"\n\n";
cout<<"\t\t**************************************************"<<endl;
cout<<"\t\t\t THANK YOU FOR USING THIS PROGRAM"<<endl;
cout<<"\t\t**************************************************"<<endl;
for(int x=0;x<10;x++)
{
        for(int y=0;y<100;y++)
        {
        cout<<intro[x][y];
        Sleep(15); //delay the letter to appeared by 0.015 seconds
        }
        cout<<"\n";
        }
cout<<"\t\t**************************************************"<<endl;

}

	

