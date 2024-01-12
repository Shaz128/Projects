#include<iostream>
#include <limits>
#include <string.h>
#include <sstream>
#include <fstream>
using namespace std;
int number = 1;

struct Node{
string name;
string ph_num;
string CNIC;
int acc_num;
int balance;
int code;
string Bank_statment;
Node *next;
};

int Bank_Statement(Node* h)
{
	int pin;
	cout<<"Enter Your PIN for Bank Statement: ";
	cin>>pin;
	Node* current = new Node();
	current = h;
	while(current != NULL){
		if(current->code == pin){
			cout<<current->Bank_statment;
			return 0;
		}else{
			current = current->next;
		}
	}
}
int Cash_Withraw(Node* h)
{
Node* current = new Node();
current = h;
int a;
int with_amount;
cout<<"Enter your PIN: ";
cin>>a;
while(current != NULL){
	if(current->code == a){
cout<<"Enter amount to withdraw: ";
	cin>>with_amount;
if(current->balance < with_amount){
	cout<<"You Have Entered insufficient Balance ";
}else{
current->balance = current->balance - with_amount;	
cout<<"Transaction Succesful";
	string amount;
	stringstream stringwith;
	stringwith<<with_amount;
	stringwith>>amount;
	current->Bank_statment = current->Bank_statment + "\n Amount withdraw | " + amount;

}	

		return 0;
	}else{
		current = current->next;
	}
}	
	
}
int Cash_Deposit(Node* h)
{
Node* current = new Node();
current = h;
int a;
int depo_amount;
cout<<"Enter your PIN: ";
cin>>a;
while(current != NULL){
	if(current->code == a){
cout<<"Enter amount to deposit: ";
cin>>depo_amount;
current->balance = current->balance + depo_amount;	
	cout<<"Transaction Succesful";
	string amount;
	stringstream stringdepo;
	stringdepo<<depo_amount;
	stringdepo>>amount;
	current->Bank_statment = current->Bank_statment + "\n Amount Deposit | " + amount;
	
		return 0;
	}else{
		current = current->next;
	}
}	
}
int Account_Opening(Node* acc)
{
	Node* temp = new Node();
	temp->next = NULL;
	Node* currentnode = new Node();
	currentnode = acc;
	int code2;
	int x;
		
	cout<<"Enter Your Name: ";
	cin>>temp->name;
	cout<<"Enter Your Phone Number: ";
	cin>>temp->ph_num;
	cout<<"Enter Your CNIC Number: ";
	cin>>temp->CNIC;
	while(currentnode != NULL){
		if(temp->CNIC == currentnode->CNIC){
			cout<<"Your Account Exist";
			return 0;
		}else{
			currentnode = currentnode->next;
		}
	}
	cout<<"Enter Your PIN Number: ";
	cin>>temp->code;
	cout<<"Enter Your PIN Number Again: ";
	cin>>code2;
while(temp->code != code2){
	cout<<"Your PIN Doesn't Matched"<<endl;
	cout<<"Enter Your PIN Number: ";
	cin>>temp->code;
	cout<<"Enter Your PIN Number Again: ";
	cin>>code2;
}
temp->balance = 0;
temp->Bank_statment = "\n Account Opened \n";
temp->acc_num = number;
number++;
cout<<"******* Your Information *******"<<endl;
cout<<"Name: "<<temp->name<<endl;
cout<<"Phone Number: "<<temp->ph_num<<endl;
cout<<"CNIC Number: "<<temp->CNIC<<endl;
cout<<"Account Number: "<<temp->acc_num<<endl;
cout<<"Confirmed PIN: "<<temp->code<<endl;
cout<<"********************************"<<endl;
/*
    fstream my_file;
	my_file.open("Account_Number_Generator.txt", ios::in);
	if (!my_file)
	{
		cout << "No such file";
	}
	else
	{
	int ch;

	while (1)
	{
	my_file >> ch;
	if (my_file.eof())
	break;
	}
    x = (int)ch - 0;
	}
	x++;
	ofstream myfile;
    myfile.open ("Account_Number_Generator.txt");
    myfile <<x;
    myfile.close();
*/
currentnode = acc;	

	while(currentnode->next != NULL){
		currentnode = currentnode->next;
	}
	
	currentnode->next = temp;
	

}
int Account_Closing(Node* h)
{
	int pin;
	string name;
	Node* current = new Node();
	Node* prevnode = new Node();
	current = h;
cout<<"Enter your PIN: ";
cin>>pin;

	while(current != NULL){
		if(current->code == pin){
			cout<<"Enter Your Name ";
			cin>>name;
			if(name != current->name){
				cout<<"Account Not Found";
			return 0;
			}else{
				prevnode->next= current->next;
				current->next = NULL;
return 0;				
			}
		}
		else{
			prevnode = current;
			current = current->next;
		}
	}
return 0;
}

int Interbank_Funds_Transfer(Node* h)
{
	Node* t_t = new Node();
t_t = h;
	Node* t_f = new Node();
t_f = h;
	int pin,trans_amount;
	cout<<"Enter your Pin to transfer";
	cin>>pin;
	// find Node_Acc to withdraw amount
	while(t_f != NULL){
		if(t_f->code == pin){
			cout<<"Account found to transfer"<<endl;
			cout<<"Enter amount to Transfer: ";
			cin>>trans_amount;
			if(trans_amount > t_f->balance){
				cout<<"You Have Entered Insufficient Amount";
				break;
			}else{
				t_f->balance = t_f->balance - trans_amount;
			break;
			}
		}else{
			t_f = t_f->next;
		}
	}
	int acc;
	cout<<"Enter the account number to transfer";
	cin>>acc;
// transfer to
while(t_t != NULL){
	if(t_t->acc_num == acc){
		t_t->balance = t_t->balance + trans_amount;
		cout<<"transaction Succesful";
	string amount,acc_num1;
	stringstream stringtrans;
	stringtrans<<trans_amount;
	stringtrans>>amount;
	stringstream stringac;
	stringac<<t_t->acc_num;
	stringac>>acc_num1;
	
t_f->Bank_statment = t_f->Bank_statment+ "\nFund Transfered to "+acc_num1+ " with Amount of " + amount+"\n";
string re_acc;
	stringstream stringtrans2;
	stringtrans2<<t_f->acc_num;
	stringtrans2>>re_acc;
	t_t->Bank_statment = t_t->Bank_statment + "\nFund Recieved from "+ re_acc +" "+ amount+"\n";
	break;

	}else{
		t_t = t_t->next;
	}

}
		
}
int Bill_Payment(Node* h){
	Node* current = new Node();
	int pin;
	int a;
	current = h;
	cout<<"Enter your PIN: ";
	cin>>pin;
	while(current != NULL){
		if(current->code == pin){
	cout<<"Select an option from below"<<endl;
	cout<<"Press 1 for Electricity"<<endl;
	cout<<"Press 2 for Gas"<<endl;
	cout<<"Press 3 for Water"<<endl;
	cout<<"Press 4 for Education"<<endl;
	cin>>a;

	switch(a)
	{
	case 1:{
		int bill_num;
		int pay_amount;
		cout<<"Enter the Bill Number: ";
		cin>>bill_num;
		cout<<"Enter The Payable Amount: ";
		cin>>pay_amount;
if(pay_amount > current->balance || pay_amount < 0){
	cout<<"You have entered Invalid balance";
	break;
}else{
	current->balance = current->balance - pay_amount;
	stringstream bill_no;
	string num;
	bill_no<<bill_num;
	bill_no>>num;
	string am;
	stringstream amo;
	amo<<pay_amount;
	amo<<am;
current->Bank_statment = current->Bank_statment +"\n Electricity bill is paid of number " + num + " of amount " + am +"\n"; 
	cout<<"Your Bill is paid";
}		
		break;
	}
	case 2:{
		int bill_num;
		int pay_amount;
		cout<<"Enter the Bill Number: ";
		cin>>bill_num;
		cout<<"Enter The Payable Amount: ";
		cin>>pay_amount;
if(pay_amount > current->balance || pay_amount < 0){
	cout<<"You have entered incorrect amount";
	break;
}else{
	current->balance = current->balance - pay_amount;
stringstream bill_no;
	string num;
	bill_no<<bill_num;
	bill_no>>num;
	string am;
	stringstream amo;
	amo<<pay_amount;
	amo<<am;
current->Bank_statment = current->Bank_statment +"\n Gas bill is paid of number " + num + " of amount " + am +"\n"; 
	cout<<"Your Bill is paid";
}
		break;
	}
	case 3:{
				int bill_num;
		int pay_amount;
		cout<<"Enter the Bill Number: ";
		cin>>bill_num;
		cout<<"Enter The Payable Amount: ";
		cin>>pay_amount;
if(pay_amount > current->balance || pay_amount < 0 ){
	cout<<"You have entered invalid amount";
	break;
}else{
	current->balance = current->balance - pay_amount;
	stringstream bill_no;
	string num;
	bill_no<<bill_num;
	bill_no>>num;
	string am;
	stringstream amo;
	amo<<pay_amount;
	amo<<am;
current->Bank_statment = current->Bank_statment +"\n Water bill is paid of number " + num + " of amount " + am +"\n"; 
	cout<<"Your Bill is paid";
}
		break;
	}
	case 4:{
				int bill_num;
		int pay_amount;
		cout<<"Enter the Bill Number: ";
		cin>>bill_num;
		cout<<"Enter The Payable Amount: ";
		cin>>pay_amount;
if(pay_amount > current->balance || pay_amount < 0){
	cout<<"You have entered invalid amount";
	break;
}else{
	current->balance = current->balance - pay_amount;
	stringstream bill_no;
	string num;
	bill_no<<bill_num;
	bill_no>>num;
	string am;
	stringstream amo;
	amo<<pay_amount;
	amo>>am;
current->Bank_statment = current->Bank_statment +"\n Education bill is paid of number " + num + " of amount " + am +"\n"; 
	cout<<"Your Bill is paid";
}
		break;
}
	default:{
		cout<<"Invalid Input";
		break;
	}
}
return 0;
}else{
current = current->next;
}
}
cout<<"You have entered wrong input";
}

void Acc_Check(Node* h){
	Node* currentnode = new Node();
	currentnode = h;
	currentnode = currentnode->next;
	while(currentnode != NULL){
		cout<<"Account Holder Name: ";
		cout<<currentnode->name<<endl;
		cout<<"Account Holder CNIC: ";
		cout<<currentnode->CNIC<<endl;
		cout<<"Account Holder PIN: ";
		cout<<currentnode->code<<endl;
		cout<<"Account Holder Phone Number: ";
		cout<<currentnode->ph_num<<endl;
		cout<<"Account Balance: ";
		cout<<currentnode->balance<<endl;
		cout<<"************************************"<<endl;
		currentnode = currentnode->next;
	}
}
int main()
{

Node* account = new Node();
account->next = NULL;
int Acc_num;
	int Input;
	cout<<"****************************************\n";
	cout<<"Press 1 For Bank Statement\n";
	cout<<"Prres 2 For Cash Withraw\n";
	cout<<"Press 3 For Cash Deposit\n";
	cout<<"Press 4 For Bill Payment\n";
	cout<<"Press 5 For Account Opening\n";
	cout<<"Press 6 For Account Closing\n";
	cout<<"Press 7 For Interbank Funds Transfer\n";
	cout<<"Press 8 For Exit From Program\n";
	cout<<"Press 9 For Check All Account\n";
	cout<<"****************************************\n";
	do
	{
	cout<<"\nEnter The Number To Select Option From Above\n";
	cin>>Input;
	switch(Input)
	{
		case 1:
		{
			Bank_Statement(account);
			break;
		}
		case 2:
		{
			Cash_Withraw(account);
			break;
		}
		case 3:
		{
			Cash_Deposit(account);
			break;
		}
		case 4:
		{
			Bill_Payment(account);
			break;
		}
		case 5:
		{
			Account_Opening(account);

			break;
		}
		case 6:
		{
	cout<<"Enter Your Account Number: ";
			Account_Closing(account);
			break;
		}
		case 7:
		{
			Interbank_Funds_Transfer(account);
			break;
		}
		case 8:
		{
			cout<<"Exit Program Successfully\n";
			break;
		}
		case 9:
		{
			Acc_Check(account);
			break;
		}
		default:
		{
			cout<<"You Select Wrong Number Try Again Please\n";
			break;
		}
	}
    }
	while(Input!=8);
	return 0;
}
