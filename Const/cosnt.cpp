#include <iostream>
using namespace std;
int count = 0;
class person{
	private:
		string name;
		int age;
	public:
	person(){
		cout<<"construtor created"<<endl;
		count++;
	}
	
	
	person(string n, int a){
		name = n;
		 age = a;
		cout<<"Paramaterized constructor called"<<endl;
		count++;
	}
	
	person(person &obj){
		name = obj.name;
		age = obj.age;
		cout<<"Meri Marzi\n";
		count++;
	}

    void get_values(){
    	cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl; 
	}
	
	
	~person(){
		cout<<"Destructer called"<<endl;
		count--;
		cout<<"Value of count is: "<<count<<endl;
	}
	
	
	
};

int main(){
	person  p2, p1("ali", 23);
	
	person p3 = p1;
	p1.get_values();
	p3.get_values();
	
	
	
}
