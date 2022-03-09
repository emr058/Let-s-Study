//  main.cpp
//  Assignment
//  Created by Feyzullah Uysal on 3.03.2022.
#include <iostream>

using namespace std;

class student_DATA{                                          // Creating a class
    char name[20];
    int  stdNUM;
    int  mark;
    int  grade;
public:
    void  read_data();                                       // declaring the function
    void  display_data();                                    // declaring the function
};

void student_DATA::read_data()                               // data reading function explanation
{
    cout<<"Enter Student number: "<<endl;
    cin>>stdNUM;
    cout<<"Enter Student's name: "<<endl;
    cin>>name;
    cout<<"Enter Student's mark: "<<endl;
    cin>>mark;
}

void student_DATA::display_data()                            // data display function explanation
{
    cout<<"Student's Number: "<<stdNUM<<endl;;
    cout<<"Student's Name: "<<name<<endl;;
    cout<<"Student's Mark: "<<mark<<endl;;
    cout<<"------------------------------"<<endl;
}


int main()
{
    student_DATA student[20];                                // now we have class of 20 objects
    
    int menu;
    cout<<"Menu"<<endl;
    cout<<"Press one for New Registiration"<<endl;
    cout<<"Press two for Display Students information"<<endl;
    cin>>menu;


    for (int info=0;info<20;info++)
    {
        cout<<"|New Registiration| ["<<info+1<<"]"<<endl;
        student[info].read_data();
    }
    
    cout<<"---------------------------------"<<endl;

    for (int chart=0; chart<20; chart++)
    {
        student[chart].display_data();
    }


    
    return 0;
}
