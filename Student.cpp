#include "Student.h"

int Student::count = 0;

void Student::info() { //�Ϲݸ���Լ�
	cout << "�̸�:" << _name << endl;
	cout << "�г�:" << _grade << endl;
	cout << "��:" << _classNum << endl;
}

void Student::printCount() {
	cout << "���� ������� Student ��ü�� ������ : " << count << endl;
}
