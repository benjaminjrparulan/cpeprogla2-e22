#include<iostream>
#include<iomanip>
using namespace std;

struct customer
{
  int qty1,qty2,qty3,id1,id2,id3,day,month,year;
  char fname[30],lname[30],contact[30],iname1[30],iname2[30],iname3[30];
  double price1,price2,price3,tprice;    
};
void newLine();

int main()
{
    customer info[3];
    int i,n = 1;
    cout<<"Enter 3 Customers "<<endl;
    for(i=0;i<3;i++)
    {
    cout<<"CUSTOMER INFORMATION "<<n<<endl;
    n++;
    if(n<=2)
    {
    cout<<"Please Press ENTER to start input\n";
    }
	 else
       {
           cout<<"";
       } 
	newLine();
    cout<<"First Name: ";
      
    cin.getline(info[i].fname,30);
      
    cout<<"Last Name: ";
    cin.getline(info[i].lname,30);
    cout<<"Contact No: ";
    cin.getline(info[i].contact,30);
    cout<<"Order Date:\n";
    cout<<"Day: ";
    cin>>info[i].day;
    cout<<"Month: ";
	cin>>info[i].month;
    cout<<"Year: ";
    cin>>info[i].year;
    cout<<"Enter 3 Items\n";
    cout<<"ID: ";
    cin>>info[i].id1;
    cout<<"Name: ";
    cin.getline(info[i].iname1,30);
    cin.getline(info[i].iname1,30);
    cout<<"Price: ";
    cin>>info[i].price1;
    cout<<"Quantity: ";
    cin>>info[i].qty1;
      
    cout<<"ID: ";
    cin>>info[i].id2;
    cout<<"Name: ";
    cin.getline(info[i].iname2,30);
    cin.getline(info[i].iname2,30);
    cout<<"Price: ";
    cin>>info[i].price2;
    cout<<"Quantity: ";
    cin>>info[i].qty2;
      
    cout<<"ID: ";
    cin>>info[i].id3;
    cout<<"Name: ";
    cin.getline(info[i].iname3,30);
    cin.getline(info[i].iname3,30);
    cout<<"Price: ";
    cin>>info[i].price3;
    cout<<"Quantity: ";
    cin>>info[i].qty3;
    info[i].tprice = ((info[i].price1*info[i].qty1) + (info[i].price2*info[i].qty2) + (info[i].price3*info[i].qty3));
    cout<<"\n\n";
    }
    
    cout<<"Summary Report\n #"
    <<setw(20)<<"Customer Name"<<setw(18)<<"Order Date"<<setw(14)<<"Items"<<setw(8)<<"Price"<<setw(10)<<"Quantity";
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for(i=0;i<3;i++)
    {
    cout<<endl;
    cout<<setw(2)<<i+1<<setw(14)<<info[i].lname<<", "<<info[i].fname<<setw(13)<<info[i].day<<"/"<<info[i].month<<"/"<<info[i].year
    <<setw(14)<<info[i].iname1<<setw(12)<<info[i].price1<<setw(10)<<info[i].qty1<<endl;
    cout<<setw(54)<<info[i].iname2<<setw(12)<<info[i].price2<<setw(13)<<info[i].qty2<<endl;
    cout<<setw(54)<<info[i].iname3<<setw(12)<<info[i].price3<<setw(13)<<info[i].qty3<<endl;
    cout<<setw(54)<<"Total Price:"<<setw(25)<<info[i].tprice<<endl;
    }
    system("pause");
    return 0;
}
void newLine()
 {
   char s;
   do
   {
    cin.get(s);
   }  
    while(s!='\n');
 }
