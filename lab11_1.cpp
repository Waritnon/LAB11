#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	string grade;
			int i = 1,A =0,B=0,C=0,D=0,F=0;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		if(grade == "A")	A = A+1;
		else if(grade == "B")	B = B+1; 
		else if(grade == "C")	C = C+1;
		else if(grade == "D")	D = D+1;
		else if(grade == "F")	F = F+1;
		else if(grade == "0")	break;	
		else{
			cout << "Wrong input. Please input again.\n"; 
			continue;
		}	
		i = i+1; 
	}while(grade != "0");
	count[0] = A;
	count[1] = B;
	count[2] = C;
	count[3] = D;
	count[4] = F;
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	return 0;
}
