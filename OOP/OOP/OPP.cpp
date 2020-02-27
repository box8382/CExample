/*
#include <iostream>
using namespace std;


//자료형 정의 : 설계도면 !!
//변수 + 함수를 가진 자료형만드는 문법 : class
class Student
{
private:
	//함수의 입장에서는 전역변수임
	const char* name;
	int kor;
	int eng;
	double aver;
	//Student구조체변수의 멤버를 출력해주는 기능함수
	//멤버함수 - 멤버함수안에서는 멤버변수를 마음대로 사용할 수 있음.
public: //여기서부터 아래 멤버들은 모두 외부에 공개!

	//멤버변수들의 값을 입력해주는 기능함수
	void setMembers(const char*n,int k,int e)
	{
		name = n;
		kor = k;
		eng = e;
		aver = (double)(k+e) / (double)2;
	}

	void show()
	{
		cout << "name : " << name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng : " << eng << endl;
		cout << "aver :" << aver << endl << endl;
	}
};

int main()
{
	//구조체 객체 만들기!! 문법) 자료형(class) 변수명
	Student stu;
	
	//멤버변수값들을 대입해주는 함수를 호출
	stu.setMembers("sam",80,70);

	//구조체 변수 출력하는 기능 호출
	stu.show();
	
	//2번째 학생 데이터
	Student stu2;
	stu2.setMembers("robin", 90, 80);

	//학생 데이터 출력
	stu2.show();

	//3번 학생 데이터 : heap 메모리 사용
	Student* p = new Student;

	//(*p).setMembers("kim", 95, 40);
	//(*p).show();

	p->setMembers("kim", 95, 40);
	p->show();


}*/




#include <iostream>
using namespace std;

class Student
{
private:

	const char* name;
	int kor;
	int eng;
	double aver;

public:

	//객체가 생성될때 자동으로 실행되는 함수
	//멤버변수들의 값을 초기화하기 위한 목적으로 설계된 함수
	//생성자 함수 : constructor

	//생성자 함수 규칙
	//1. 함수명 == 클래스 이름 과 같아야한다
	//2. 리턴타입이 존재 X  
	//파라미터 전달 가능 O
	Student()
	{
		cout << "Student 객체 void 생성!!" << endl;
		name = "익명";
		kor = 0;
		eng = 0;
		aver = 0.0;
	}


	Student(const char* name,int kor,int eng) //매우 중요 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		cout << "student 객체 생성" << endl;
		//전달받은 매개변수의 값들을 멤버변수에 대입하기!!
		//본인객체의 주소를 가리키는 특별한 멤버 포인터변수 : this
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		this->aver = (double)(this->kor + this->eng) / 2.0;
	}

	void setMembers(const char* n, int k, int e)
	{
		name = n;
		kor = k;                                                                                                                                                                                                                                                                                                                   
		eng = e;
		aver = (double)(k + e) / (double)2;
	}

	void show()
	{
		cout << "name : " << name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng : " << eng << endl;
		cout << "aver :" << aver << endl << endl;
	}
};

int main()
{
	//객체 생성!!
	Student* p = new Student("sam",80,70); //자동으로 생성자함수도 호출!!
	p->show();

	Student* p2 = new Student("robin", 90, 85);
	p2->show();

	Student* p3 = new Student();
	p3->show();
}