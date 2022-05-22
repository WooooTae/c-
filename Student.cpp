#include "Student.h"

int Student::count = 0;

void Student::info() { //일반멤버함수
	cout << "이름:" << _name << endl;
	cout << "학년:" << _grade << endl;
	cout << "반:" << _classNum << endl;
}

void Student::printCount() {
	cout << "현재 만들어진 Student 객체의 갯수는 : " << count << endl;
}
