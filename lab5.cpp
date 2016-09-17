#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

void newLine();
struct fivestud{
       int id;
       char name[50],re[10];;
       double quiz[3];
       };
int main(){
	int num = 5;
    fivestud ss[num];
    int i,a;
    double ave[i];
    
    cout<<"Enter 5 student(s) record"<<endl;
    for(i=0;i<5;i++){
        cout<<"\nStudent  "<<(i+1)<<endl;
    	cout<<"ID : ";
        cin>>ss[i].id;
        newLine();
        cout<<"Name : ";
        cin.get(ss[i].name,49);
        cout<<"Enter 3 quizes(s): ";
        cin>>ss[i].quiz[1]>>ss[i].quiz[2]>>ss[i].quiz[3];
        cout<<"\n";
        ave[i]=(ss[i].quiz[1]+ss[i].quiz[2]+ss[i].quiz[3])/3;
        
        if(ave[i]>74){
        strcpy(ss[i].re,"Passed");}
        else{
        strcpy(ss[i].re,"Failed");}}
                     
        cout<<setw(2)<<"No."<<setw(10)<<"Student No."<<setw(20)<<"Name"<<setw(10)<<"Grade"<<setw(10)<<"Remark";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        for(i=0;i<5;i++){
        cout<<endl;
        cout<<setw(2)<<i+1<<setw(10)<<ss[i].id<<setw(20)<<ss[i].name<<setw(10)<<ave[i]<<setw(10)<<ss[i].re;}
        system("pause>0");

        return 0;
        }
void newLine(){
     char s;
     do{
	 cin.get(s);
	 }
	 while(s!='\n');
	 }
