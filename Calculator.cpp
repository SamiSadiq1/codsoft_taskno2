#include<iostream>
using namespace std;
int main(){
int num1,num2;
char op;
cout<<"Enter the Numbers "<<endl;
cin>>num1>>num2;
cout<<"Enter the operator"<<endl;
cin>>op;
  switch(op)
    { 
	   case '+':
    cout<<"The sum ="<<num1+num2<<endl;
    break;
      case '-':
	  cout<<"The sub ="<<num1-num2<<endl;
	  break;
	  case '*':
	  cout<<"The mul ="<<num1*num2<<endl;
	  break;
	  case '/':
	  cout<<"The div ="<<num1/num2<<endl;
	  break;
	  case '%':
	  cout<<"The rem ="<<num1%num2<<endl;
	  break;
	  default:
	  	cout<<"Enter valid operator"<<endl;
	
}



}
