#include <bits/stdc++.h>

using namespace std;

struct emp {
	char name[50];
	char position[50];
	char department[30];
	float salary;	
};

void Output(emp *employee) {
	cout << employee->name << endl;
	cout << employee->position << endl;
	cout << employee->department << endl;
	cout << employee->salary << endl;
}
	
void Accept() {
	emp *employee;
	employee = new emp();
	cin.getline(employee->name, 49);
	cin.getline(employee->position, 49);
	cin.getline(employee->department, 49);
	cin >> employee->salary;
	Output(employee);
}

int main() {
	Accept();
	return 0;
}
