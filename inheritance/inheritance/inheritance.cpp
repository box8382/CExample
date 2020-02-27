#include <iostream>
using namespace std;

class Robot
{
public:
	//멤버 변수
	int hp;
	int power;

	//멤버함수 
	void attack()
	{
		cout << "주먹발사!!" << endl;
	}
};

//새로운 캐릭터 : 날수있는 로봇 유닛 - Robot 클래스 상속받기!! 
class FlyRobot :public Robot
{
public:
	int wing;

	void fly()
	{
		cout << "날다" << endl;
	}
	//상속받은 공격기능 (attack();이 맘에들지 않으면 기능을수정
	//같은 이름의 함수를 만들기!!
	//상복받은 기능을 바꾸는 함수를 함수 오버라이딩
	//overriding
	void attack()
	{
		cout << "미사일 발사" << endl;
	}
};

//새로운 캐릭터 : 수영할수 있는 로봇 -Robot 클래스 상속받기
class Swimming :public Robot
{
public:
	void swimming()
	{
		cout << "음파 음파" << endl;
	}
	void attack()
	{
		cout << "물싸대기" << endl;
	}
};


int main()
{
	//Robot 객체 생성
	Robot* r=new Robot();
	r ->attack();

	FlyRobot* fr = new FlyRobot();
	fr->fly();
	fr->attack();

	Swimming* sr = new Swimming();
	sr->swimming();
	sr->attack();
}