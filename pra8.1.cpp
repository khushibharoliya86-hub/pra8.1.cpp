//PRACTICAL 8.1
#include<iostream>
using namespace std ;
string en,name,branch ;
char sem;

//Function 1:display header
void displayaHeader()
{
    cout<<"*******************************\n";
    cout<<"STUDENT RECORD MANAGMENT SYSTEM\n";
    cout<<"*******************************\n";
    cout<<endl;
}

//Function 2:Accecpt student details
void acceptStudentDetails()
{

    cout<<"--------------Student Registraton--------------\n";
    cout<<endl;
    cout<<"Enter Enrollment Number:";
    cin>>en;
    cout<<"Enter Student Name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Branch:";
    cin>>branch;
    cout<<"Enter Sem:";
    cin>>sem;
}



//Functioo 4-Display report
void displayStudentReport()
{
    cout<<"------------------------------------------\n";
    cout<<"Academic Report\n";
    cout<<"------------------------------------------\n";
    cout<<"Enrollment Number:"<<en<<endl;
    cout<<"Student Name:"<<name<<endl;
    cout<<"Branch:"<<branch<<endl;
    cout<<"Semester :"<<sem<<endl;
}

//Function 3:Calculate result
void calculateAcademicResult()
{
    int mark[5];
    float per;
    int sum=0;
    bool passed=true;
    for(int i=1; i<=5; i++)
    {
        cout<<"Subject"<<i<<":";
        cin>>mark[i];
        sum+=mark[i];
        if(mark[i]<35){
            passed=false;
        }
    }
       per=(sum/5.0);

    displayStudentReport();
    cout<<"Total Marks:"<<sum<<endl;
    cout<<"Percentage :"<<per<<"%"<<endl;
    if(per>90)
    {
        cout<<"Grade:"<<"A+\n";
    }
    else if(per>80)
    {
        cout<<"Grade:"<<'A'<<endl;
    }
    else if(per>70)
    {
        cout<<"Grade:"<<"B+\n"<<endl;
    }
    else if(per>60)
    {
        cout<<"Grade:"<<'B'<<endl;
    }
    else if(per>50)
    {
        cout<<"Grade:"<<'C'<<endl;
    }
    else if(per>45)
    {
        cout<<"Grade:"<<'D'<<endl;
    }
    else
    {
        cout<<"Grade:"<<'F'<<endl;
    }
    if(passed){
        cout<<"Result:"<<"PASS\n";
    }
    else
    {
        cout<<"Result:"<<"FAIL\n";
    }

    cout<<"-------------------------------------\n";
    cout<<"Program Executed Successfully Using User-defined Functions.\n";
    cout<<"-------------------------------------\n";
}


int main()
{
    displayaHeader();
    acceptStudentDetails();
    calculateAcademicResult();

    return 0;
}

