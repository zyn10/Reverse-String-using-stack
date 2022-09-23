#include<iostream>
#include<string>
#include<string.h>
using namespace std;
const int MAX_SIZE = 30;
class Stack {
private:
    char items[MAX_SIZE];
    int top;
public:
    Stack();
        bool IsEmpty()const;
        bool IsFull()const;
        void Push(char a);
        char Pop();
        char Top()const;
        void Reverse(string line);
};
Stack::Stack() {
    top = -1;
}bool Stack::IsEmpty()const {
    return (top == -1);
}
bool Stack::IsFull()const {
    return (top == MAX_SIZE-1);
}
void Stack::Push(char a) {
    if (IsFull()) {
        cout << "stack is overloaded\n";
    }
    else
    {
    	  top++;
    items[top] = a;
    
	}
  
}
char Stack::Pop() {
    if (IsEmpty()) {
        cout << "stack is empty\n";
        return -1;
    }
    return items[top--];
}
char Stack::Top()const {
    if (IsEmpty()) {
        cout << "stack is empty no value on top\n";
        return -1;
    }
    return items[top];
}
void Stack::Reverse(string line)
{
	int length=line.length();
	for (int i=0;i<length;i++)
	{
		Push(line[i])
		
	}
	cout<<"Reversed String = ";
	for (int i=0;i<length;i++)
	{
		line[i]=Pop();
		cout<<line[i];
	}
}
int main()
{
string input;
	char choice='y';
	Stack obj;
	while(choice=='y'||choice=='Y')
	{
	cout<<"Enter String to Reverse "<<endl;
	cin>>input;
    cout<<"Actual   String = "<< input << endl<<endl;
	obj.Reverse(input);
	cout<<endl<<endl;
	cout <<"You want to check another number y/n"<<endl;
	cin>>choice;
    }
	system("pause>0");
}
