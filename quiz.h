//Quiz game//
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<windows.h>
using namespace std;

class student{
	char name[20],rollno[20];
	int marks,random;
   public:
   void cpp();
   void html();
   void java();
   void result();
   void input();
};

void student::cpp(){
	int i=0,arr[6];
	marks=0;
	char choice;
	while(i<5){
	back:
	random=rand()%6;
	for(int j=0;j<=6;j++){
		if(random==arr[j]){
            		goto back;
		}
	}
	arr[i]=random;
	switch(random)
    {
    case 0:
	cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;
	cout<<"A. System.out.println(\"Hello world\");"<<endl;
	cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;
	cout<<"C. print(\"Hello world\");"<<endl;
	cout<<"D. cout<<\"Hello world\";"<<endl;
	choice=getch();
	if(choice=='D'||choice=='d'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
cout<<choice<<" is incorrect Answer"<<endl;
	cout<<"The corrent answer is d"<<endl<<endl;
	}
	break;
	case 1:
	cout<<i+1<<") Which of the following is called address operator?"<<endl;
	cout<<"a) *"<<endl;
	cout<<"b) &"<<endl;
	cout<<"c) _"<<endl;
	cout<<"d) %"<<endl;
	choice=getch();
	if(choice=='B'||choice=='b'){
	cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl<<endl;
	}
break;
	case 2:
	cout<<i+1<<") Which of the following is used for comments in C++?"<<endl;
	cout<<"a) // comment"<<endl;
	cout<<"b) /* comment */"<<endl;
	cout<<"c) both // comment or /* comment */"<<endl;
	cout<<"d) // comment */"<<endl;
	choice=getch();
	if(choice=='c'||choice=='C'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
else{
	cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is c"<<endl<<endl;
	}
	break;
	case 3:
	cout<<i+1<<") Who created C++?"<<endl;
	cout<<"a) Bjarne Stroustrup"<<endl;
	cout<<"b) Dennis Ritchie"<<endl;
	cout<<"c) Ken Thompson"<<endl;
	cout<<"d) Brian Kernighan"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl<<endl;
	}
	break;
	case 4:
	cout<<i+1<<")  A language which has the capability to generate new data types are called"<<endl;
	cout<<"a) Extensible"<<endl;
	cout<<"b) Overloaded"<<endl;
	cout<<"c) Encapsulated"<<endl;
	cout<<"d) Reprehensible"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl<<endl;
	}
	break;
	case 5:
	cout<<i+1<<") Which of the following is called insertion/put to operator?"<<endl;
	cout<<"a) <"<<endl;
	cout<<"b) >"<<endl;
	cout<<"c) <<"<<endl;
	cout<<"d) >>"<<endl;
	choice=getch();
	if(choice=='c'||choice=='C'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl<<endl;
		cout<<"The corrent answer is c"<<endl;
	}
	break;
	case 6:
	cout<<i+1<<") Which of the following is called extraction/get from operator?"<<endl;
	cout<<"a) <"<<endl;
	cout<<"b) >"<<endl;
	cout<<"c) <<"<<endl;
	cout<<"d) >>"<<endl;
	choice=getch();
	if(choice=='d'||choice=='D'){
		cout<<choice<<" is correct Answer"<<endl<<endl;
		marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is d"<<endl<<endl;
	}
	break;
    }
    i++;
}
}

void student::java(){
    //java questions
}

void student::html(){

	//html questions
}

void student::result(){
	float percentage=0;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Roll no: "<<rollno<<endl;
	cout<<"Marks: "<<marks<<" out of 6"<<endl;
	percentage=100*marks/6;
	cout<<"Percentage: "<<percentage<<"%"<<endl;
	if(percentage>=50){
		cout<<"Status: Pass"<<endl;
	}
	else {
	cout<<"Status: Fail"<<endl;
    }
}
void student::input(){
    char press,select;
    system("CLS");
	do
	{
	cout<<"\n\n\t\t****************"<<endl;
	cout<<"\t\t PUZZLE GAME "<<endl;
	cout<<"\t\t****************"<<endl;
	cout<<"\t\tEnter name: ";
	cin>>name;
	cout<<"\n";
	cout<<"\t\tEnter rollno: ";
	cin>>rollno;
	system("CLS");
	cout<<"\t\tMarks less than 50% will be fail"<<endl;
	cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;
	cout<<"1) C++"<<endl;
	cout<<"2) Java"<<endl;
	cout<<"3) Html"<<endl;
	select=getch();
	system("CLS");
	switch(select){
		case '1':
			cout<<"\t\tC++ Quiz"<<endl;
			cpp();
			system("CLS");
			cout<<"\t\tC++ Quiz Result"<<endl;
			result();
			break;
		case '2':
	cout<<"\t\tJava Quiz"<<endl;
		    java();
		    system("CLS");
		    cout<<"\t\tJava Quiz Result"<<endl;
		    result();
		   break;
		case '3':
			cout<<"\t\tHtml Quiz"<<endl;
			html();
			system("CLS");
			cout<<"\t\tHtml Quiz Result"<<endl;
			result();
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
	cout<<"Press y if you want to continue or any key to terminate"<<endl;
	press=getch();
	system("CLS");
   }while(press=='y'||press=='Y');
}


