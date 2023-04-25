#include <iostream>
#include <fstream>
#include <string>
#include<windows.h>
using namespace std;

int DOB,Jdate;
string name;
int address ;
string line;
int id;
int post;
int dept;


void input()
{

	ofstream datafile("myfile.txt", ios::app);
	cout<<"--------------------------------------";
	cout << "Employee Bio_data\n";
	//HANDLE h= GetStdhandle(STD_OUTPUT_HANDLE);
	//SetConsoleTexAttribute(h,13);
	
	cout << "Enter Name of Employee: ";
	cin >> name;
	cout << "Enter Date of Birth of Employee: ";
	cin >> DOB;
	cout << "Enter Employee security Id: ";
	cin >> id;
	cout<<"--------------------------------------"<<endl;
	datafile << name << "\t\t\t\t\t\t\t\t" << DOB << "\t\t\t" << id<<endl; // entring in datafile from user
	cout<<"--------------------------------------"<<endl;
	datafile.close(); // closing datafile

}
void input2()
{
	ofstream datafile("myfile.txt",ios::app);
	cout<<"\n--------------------------------";
	cout<<"\nEmployee Designation: ";
	cout<<"\nWhat is the Post at which employee works? "<<endl;
	cin>>post;
	//cout<<"Departement of Employee: "<<endl;
	//cin>>dept;
	datafile<< post <<"\t "<< dept <<"\t"<<endl;// entering into datafile
	
}
void input3()
{
	ofstream datafile("myfile.txt",ios::app);
	cout<<"\n-------------------------";
	cout<<"Employee Joining Date: ";
	cin>>Jdate;
	datafile<<"\t\t\t\t"<<Jdate<<endl;
	datafile.close();
	
	
}

void display()
{
	ifstream datafile("myfile.txt", ios::in); // reading from myfile.txt
	cout << "\nOUTPUT DATA:\n";
	cout << "Name\t\t\tDOB\t\t\tid\t\t\tdept\t\t\tJdate\n";
	while (!datafile.eof())
	{
		getline(datafile, line); // reading a single line
		cout << line << endl;

	}
	
}

void search()
{
	int search;
	cout << "\nSEARCHING IN FILE:\n";
	cout << "Enter security id of the Employee: ";
	cin >> search;
	ifstream datafile("myfile.txt", ios::app);
	cout << "\nName\tDOB\tid\tpost\tJdate\n";

	while (!datafile.eof())
	{
		datafile >>name>>DOB>>id>>post>>Jdate;
		if (id==search)
		{
			cout << name << "\t" << DOB << "\t" << id << "\t" << post<< "\t" << Jdate<< endl;
			break;
		}
		else continue;
	}
	cout << endl;
	datafile.close();
}
/*void_delete()
{
	string line,id;
	cout<<"Enter Id you want to delete: "<<endl;
	cin>>id;
	ifstream writedata;
	ofstream readdata;
	writedata.open("myfile.txt");
	readdata.open("temp.txt");
	while(getline(writedata,line))
	{
		if(line!=id)
		{
			writedata<<line<<endl;
			cout<<"delete success: ";
			remove("myfile.txt");
			rename("temp.txt","myfile.txt");
			writedata.close();
			readdata.close();
			
		}
	}
	
}*/

int main()
{
	system("color 3f");
	/*for(int FAST_SYSTEM=0;FAST_SYSTEM<=15;FAST_SYSTEM++)
	{
		switch(FAST_SYSTEM)
		{
		
		
			case 1:
				system("color 01");
				break;
		
			
			case 2:
				system("color 02");
				break;
		
			
			case 3:
				system("color 03");
				break;
		
			
			case 4:
				system("color 04");
				break;
		
			
			case 5:
				system("color 05");
				break;
		
			
			case 6:
				system("color 06");
				break;
		
		
			case 7:
				system("color 07");
				break;
		
			
			case 8:
				system("color 08");
				break;
		
			
			case 9:
				system("color 09");
				break;
		
	
			case 10:
				system("color 0A");
				break;
		
			
			case 11:
				system("color 0B");
				break;
			}
		
		cout<<FAST_SYSTEM<<endl;
		Sleep(1000);
	}*/
	
	int choice;
cout<<"\n\t--------------------------------------";
for(int FAST_SYSTEM=0;FAST_SYSTEM<=15;FAST_SYSTEM++)
	{
		switch(FAST_SYSTEM)
		{
		
		
			case 1:
				system("color 01");
				break;
		
			
			case 2:
				system("color 02");
				break;
		
			
			case 3:
				system("color 03");
				break;
		
			
			case 4:
				system("color 04");
				break;
		
			
			case 5:
				system("color 05");
				break;
		
			
			case 6:
				system("color 06");
				break;
		
		
			case 7:
				system("color 07");
				break;
		
			
			case 8:
				system("color 08");
				break;
		
			
			case 9:
				system("color 09");
				break;
		
	
			case 10:
				system("color 0A");
				break;
		
			
			case 11:
				system("color 0B");
				break;
			}
		
		cout<<FAST_SYSTEM<<endl;
		Sleep(1000);
	}

cout<<"\n|Welcome To The FAST-Employee Management System|";
cout<<"\n\t-------------------------------------";
cout<<"\n\t--------Our Services-------------";
cout<<"\n\n\t>>--1.Employee Bio-data Entry: ";
cout<<"\n\n\t>>--2.Employee Designation: ";
cout<<"\n\n\t>>--3.Employee Joining Date: ";
cout<<"\n\n\t>>--4.Display Date: ";
cout<<"\n\n\t>>--5.Search in Data: ";
cout<<"\n\n\t>>--6.Delete data : ";

cout<<"\n-----------------------------";
cout<<"\n\tWhat Do you want to Perform?";
cout<<"\n\nSelect an option---[1][2][3][4][5][6]---";
cin>>choice;
switch(choice)
	system("pause");
	system("cls");
	switch (choice)
	{
	case 1:
	{
		input();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 2:
	{
		input2();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 3: 
	{
		input3();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 4:
		{
			display();
			system("pause");
			system("cls");
			main();
			break;
		}
		case 5:
		{
			search();
			system("pause");
			system("cls");
			main();
			break;
		}
		/*case 6:
			{
				delete();
				system("pause");
				system("cls");
				main();
				break;
				
			}*/
	case 0:
	{
		break;
	}
	default:
	{
		cout << "invalid input";
	}
	}
	system("pause");
	return 0;
}



