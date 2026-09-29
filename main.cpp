#include<iostream>
using namespace std;

class Student
{
   string name;
   int roll_no;
   float marks;
   public:
   void set_data(string n,int r,float m)
   { 
   name = n;
   roll_no = r;
   marks = m;
   }
   
   void result(){
   if(marks>=40)
         cout<<name<<" You are Pass";
   else
         cout<<name<<"You are Fail";
         }
};

int main(){
       Student S1;
       string n;
       int r;
       float m;
       cout<<"Enter Your Name ";
       getline(cin,n);
       cout<<"Enter Your Roll No. ";
       cin>>r;
       cout<<"Enter Your Marks ";
       cin>>m;
       S1.set_data(n,r,m);
       S1.result();
       return 0;
       }
