#include<iostream>
#include<fstream>
using namespace std;
void welcome();
void choices();
void sports();
void science();
void history();
void mixquiz();
class user_data{
	string name;
	string reg_no;
	string degree;
	public:
		void set_data(string _name,	string _reg_no,	string _degree);
		void display();
};



void user_data::set_data(string _name,	string _reg_no,	string _degree){
	name=_name;
	reg_no=_reg_no;
	degree=_degree;
}
void user_data::display(){
cout<<"\n\n\t\t\t\t\tNAME : ";cout<<name<<endl;	
cout<<"\t\t\t\t\tREGISTRATION NO. : ";cout<<reg_no<<endl;	
cout<<"\t\t\t\t\tDEPARTMENT : "<<degree<<endl;	
}


int h_t=0;
	int h_f=0;

int main(){
welcome();
	string name;
	string reg_no;
	string dept;
	cout<<"Enter your name : ";getline(cin,name);
	cout<<"Enter your Registration No. : ";getline(cin,reg_no);
	cout<<"Enter your Department : ";getline(cin,dept);
	user_data s1;
	s1.set_data(name,reg_no,dept);
	cout<<"\n\n\t\t--------------------CHOICES--------------------\t\t\n\n";
choices();

//                display  result


cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\t\tRESULT";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	


s1.display();
	cout<<"\n\n\n\t***** RESULT = The Total Correct Answers are \""<<h_t<<"\" and false are \""<< h_f<<"\" *****"<<endl;
	
	cout<<"\n\n\t\t---------------------THE END--------------------- \n\n";
	return 0;
}
//                             welcome function
void welcome(){
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\tWELCOME TO QUIZ APP";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
}
//                                    choices function
void choices(){
	string choice;
	cout<<"1. For Science Quiz"<<endl<<endl;
	cout<<"2. For History Quiz"<<endl<<endl;
	cout<<"3. For Sports Quiz"<<endl<<endl;
	cout<<"4. For Mix Quiz"<<endl<<endl;
	cout<<"\n\t\tEnter your choice here -->  ";
	print:
		
	cin>>choice;cout<<endl;
	if(choice=="1"){
	science();
	}
	
	
	else if(choice=="2"){
	history();
	}
	
else 	if(choice=="3"){
	sports();
	}
	else if (choice=="4"){
		mixquiz();
	}
	else{
		cout<<"\t\tPlease Enter the correct Choice --> ";
	goto print;
	}
}

//                         MIX QUIZ 


void mixquiz(){
	string mcq_data;
	string h_arr[20];
	string ans_arr[20];
	int i=0;
	int no_of_mcq;
	string start;
	string sq;
	string reg_no;
	string dept;
	string n1;
	
				cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\tWelcome to MIX Quiz";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;
//                                    Taking information from user



//                                   start of function

cout<<"\t\t\t\t  ---------------Press 's' to start Quiz---------------";
	
print:
cin>>start;
if(start =="s"){
	cout<<"\n\n\t\t\t\t\t    -----Your quiz is started----- \n\n\n ";
}
else{
	cout<<"\t\t\t\t-------------Please Enter the correct character----------\n ";
	goto  print;
}
cout<<"\n\t\t\t-----Enter the no. of MCQs you want to solve( between 1 to 20 )-----\n";
print1:
cin>>no_of_mcq;
if(no_of_mcq>=1 && no_of_mcq<=20){
	
//                     real working of functiom
fstream history;
history.open("MixQuiz.txt")	;
if(!history){
	cout<<"\nERROR in opening HISTORY file\n";
}
else{
	for(int x=0;x<no_of_mcq;x++){
		
	
	
		//                 picking up data for one mcq
		cout<<endl;
		getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
		getline (history,mcq_data);
		h_arr[i]=mcq_data;
			
		
	
	cout<<"\nWrite the correct option ";
	cin>>ans_arr[i];
	if(ans_arr[i]==h_arr[i]){
		cout<<"\n-----------------------Your answer is correct---------------------------\n";
		h_t++;
	}
	else{
		cout<<"\n-----------------------Your answer is incorrect---------------------------\n";
		h_f++;
	}

	i++;
}
}

}
else{
	cout<<"\nPlease enter the valid value\n";
	goto print1;
}

	
}
//                         sports function
void sports(){
string mcq_data;
	string h_arr[20];
	string ans_arr[20];
	int i=0;
	int no_of_mcq;
	string start;
	string sq;
	string reg_no;
	string dept;
	string n1;
	
				cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\tWelcome to SPORTS Quiz";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;
//                                    Taking information from user



//                                   start of function

cout<<"\t\t\t\t  ---------------Press 's' to start Quiz---------------";
	
print:
cin>>start;
if(start =="s"){
	cout<<"\n\n\t\t\t\t\t    -----Your quiz is started----- \n\n\n ";
}
else{
	cout<<"\t\t\t\t-------------Please Enter the correct character----------\n ";
	goto  print;
}
cout<<"\n\t\t\t-----Enter the no. of MCQs you want to solve( between 1 to 20 )-----\n";
print1:
cin>>no_of_mcq;
if(no_of_mcq>=1 && no_of_mcq<=20){
	
//                     real working of functiom
fstream history;
history.open("sports.txt")	;
if(!history){
	cout<<"\nERROR in opening HISTORY file\n";
}
else{
	for(int x=0;x<no_of_mcq;x++){
		
	
	
		//                 picking up data for one mcq
		cout<<endl;
		getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
		getline (history,mcq_data);
		h_arr[i]=mcq_data;
			
		
	
	cout<<"\nWrite the correct option ";
	cin>>ans_arr[i];
	if(ans_arr[i]==h_arr[i]){
		cout<<"\n-----------------------Your answer is correct---------------------------\n";
		h_t++;
	}
	else{
		cout<<"\n-----------------------Your answer is incorrect---------------------------\n";
		h_f++;
	}

	i++;
}
}

}
else{
	cout<<"\nPlease enter the valid value\n";
	goto print1;
}

}
//                        Science function
void science(){
string mcq_data;
	string h_arr[20];
	string ans_arr[20];
	int i=0;
	int no_of_mcq;
	string start;
	string sq;
	string reg_no;
	string dept;
	string n1;
	
				cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\tWelcome to SCIENCE Quiz";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;
//                                    Taking information from user



//                                   start of function

cout<<"\t\t\t\t  ---------------Press 's' to start Quiz---------------";
	
print:
cin>>start;
if(start =="s"){
	cout<<"\n\n\t\t\t\t\t    -----Your quiz is started----- \n\n\n ";
}
else{
	cout<<"\t\t\t\t-------------Please Enter the correct character----------\n ";
	goto  print;
}
cout<<"\n\t\t\t-----Enter the no. of MCQs you want to solve( between 1 to 20 )-----\n";
print1:
cin>>no_of_mcq;
if(no_of_mcq>=1 && no_of_mcq<=20){
	
//                     real working of functiom
fstream history;
history.open("science.txt")	;
if(!history){
	cout<<"\nERROR in opening HISTORY file\n";
}
else{
	for(int x=0;x<no_of_mcq;x++){
		
	
	
		//                 picking up data for one mcq
		cout<<endl;
		getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
		getline (history,mcq_data);
		h_arr[i]=mcq_data;
			
		
	
	cout<<"\nWrite the correct option ";
	cin>>ans_arr[i];
	if(ans_arr[i]==h_arr[i]){
		cout<<"\n-----------------------Your answer is correct---------------------------\n";
		h_t++;
	}
	else{
		cout<<"\n-----------------------Your answer is incorrect---------------------------\n";
		h_f++;
	}

	i++;
}
}

}
else{
	cout<<"\nPlease enter the valid value\n";
	goto print1;
}

}
//                         History function
void history(){
	
	
	string mcq_data;
	string h_arr[20];
	string ans_arr[20];
	int i=0;
	int no_of_mcq;
	string start;
	string sq;
	string reg_no;
	string dept;
	string n1;
	
				cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
cout<<endl;	
cout<<endl;	
	cout<<"\t\t\t\t\t\tWelcome to History Quiz";
	cout<<endl;	
	cout<<endl;	
cout<<"\t\t\t\t\t**************************************";
	cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;
//                                    Taking information from user



//                                   start of function

cout<<"\t\t\t\t  ---------------Press 's' to start Quiz---------------";
	
print:
cin>>start;
if(start =="s"){
	cout<<"\n\n\t\t\t\t\t    -----Your quiz is started----- \n\n\n ";
}
else{
	cout<<"\t\t\t\t-------------Please Enter the correct character----------\n ";
	goto  print;
}
cout<<"\n\t\t\t-----Enter the no. of MCQs you want to solve( between 1 to 20 )-----\n";
print1:
cin>>no_of_mcq;
if(no_of_mcq>=1 && no_of_mcq<=20){
	
//                     real working of functiom
fstream history;
history.open("history.txt")	;
if(!history){
	cout<<"\nERROR in opening HISTORY file\n";
}
else{
	for(int x=0;x<no_of_mcq;x++){
		
	
	
		//                 picking up data for one mcq
		cout<<endl;
		getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
			getline (history,mcq_data);
		cout<<mcq_data<<endl;
		
		getline (history,mcq_data);
		h_arr[i]=mcq_data;
			
		
	
	cout<<"\nWrite the correct option ";
	cin>>ans_arr[i];
	if(ans_arr[i]==h_arr[i]){
		cout<<"\n-----------------------Your answer is correct---------------------------\n";
		h_t++;
	}
	else{
		cout<<"\n-----------------------Your answer is incorrect---------------------------\n";
		h_f++;
	}

	i++;
}
}

}
else{
	cout<<"\nPlease enter the valid value\n";
	goto print1;
}


}
