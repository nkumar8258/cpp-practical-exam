#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("Answer 2 output");

    for (int i = 0; i < 2; i++)
    {
        Student obj;
        cout<<"enter roll no\t";
        cin >> obj.RollNo;
        f2 << obj.RollNo <<setw(7);
        
        cout<<"enter name\t";
        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name <<setw(10);

        cout<<"enter class\t";
        cin >> obj.Class;
		f2 << obj.Class <<setw(7);
		
		cout<<"enter year\t";
		cin>> obj.Year;
		f2<< obj.Year<< setw(7);
		
		cout<<"enter total marks\t";
		cin>> obj.TotalMarks;
        f2 << obj.TotalMarks<< setw(5)<< endl;
    }

    return 0;
}