#pragma once
#include<iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string _name;
		int _grade;
		int _classNum;

	public:
		static int count;
		Student()
			:_name(""), _grade(0), _classNum(0)
		{
			count++;
		}

		Student(string name, int grade, int classNum)
			:_name(name), _grade(grade), _classNum(classNum)
		{
			count++;
		}

		~Student() {
			count--;
		}
		inline void SetGrade(int grade);

	
		void info();

		static void printCount();
		
	};

inline void Student::SetGrade(int grade) {
	if (grade > 3) {
		_grade = 3;
	}
	else if (grade < 1) {
		_grade = 1;
	}
	else {
		_grade = grade;
	}
}



