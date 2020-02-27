
/*#include <stdio.h>

//새로운 자료형 정의 : 설계
struct Student
{
	char name;
	int kor;
	int eng;
	double aver;
}; //설계도 만들기 메모리에는 만들어지지않았음 메인에thㅓ 변수선언을 해야 메모리할당

//구조체 변수의 값을 출력하는 기능함수
void output(struct Student* stu)
{
	printf("name : %c\n", stu.name);
	printf("kor : %d\n", stu.kor);
	printf("eng : %d\n", stu.eng);
	printf("aver : %lf\n", stu.aver);
}

void main()
{
	//구조체 변수 선언 : 이때 메모리 할당 
	struct Student arr[3];

	for (int i = 0; i < 3; i++)
	{
		//키보드에 남아있는 찌꺼기 지우기 
		rewind(stdin);

		printf("%d 번째 학생성적 입력\n", i + 1);
		printf("이름 : ");
		scanf_s("%c", &arr[i].name,1);
		printf("국어 : ");
		scanf_s("%d", &arr[i].kor);
		printf("영어 : ");
		scanf_s("%d", &arr[i].eng);
		arr[i].aver = (double)(arr[i].kor + arr[i].eng) / 2;
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		output(arr[i]);
	}
}*/



/*
#include <stdio.h>

struct Student
{
	char name;
	int kor;
	int eng;
	double aver;
};

void main()
{
	struct Student stu = { 'A',80,60,70.5 };

	struct Student* p=NULL;
	//int* p; << 이거랑 같은형태
	p = &stu;

	printf("%c\n", (*p).name);
	printf("%d\n", (*p).kor);
	printf("%d\n", (*p).eng);
	printf("%lf\n", (*p).aver);

	printf("%c\n", p->name);
	printf("%d\n", p->kor);
	printf("%d\n", p->eng);
	printf("%lf\n", p->aver);
}*/




/*
#include <stdio.h>

struct Student
{
	char name;
	int kor;
	int eng;
	double aver;
};
void output(struct Student* stus)
{
	for (int i = 0; i < 3; i++)
	{
		// stus[i]  == *(stus+i) 같은말 
		printf("%c\n", (*(stus+i)).name);
		printf("%d\n", stus[i].kor);
		printf("%d\n", stus->eng); //3개가 같은말 
		printf("%lf\n", stus->aver);
		stus++;
	}
}

void main()
{
	struct Student stus[3] = { 
		{'A',80,60,70.5},
		{'B',30,60,50.5},
		{'C',10,20,30.3}
	};

	output(&stus);
	//int* p; << 이거랑 같은형태
}*/





/*
#include <stdio.h>

struct Student
{
	char name;
	int kor;
	int eng;
	double aver;
};

void main()
{
	struct Student stus = {'A',80,60,70.5};

	struct Student* p = malloc(sizeof(struct Student));
	p->name = 'A';
	p->kor = 80;
	p->eng = 70;
	p->aver = 50.6;
}*/



/*
#include <stdio.h>

struct Address
{
	char* nation;
	char* city;
};



struct Person
{
	char* name;
	int age;
	struct Address addr;
};

void main()
{
	struct Person p; 
	 

	p.name = "park";
	p.age = 20;
	p.addr.nation = "usa";
	p.addr.city = "ny";

	printf("%s \n", p.name);
	printf("%d \n", p.age);
	printf("%s \n", p.addr.nation);
	printf("%s \n", p.addr.city);
	
}*/




/* 예제 1-1
#include <stdio.h>

struct group
{
	int a;
	double b;
};

void main()
{
	struct group g1;

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %lf \n", g1.b);
}*/



/* 예제 1-2
#include <stdio.h>

struct group
{
	int a;
	double b;
};

void main()
{
	struct group g1;

	scanf_s("%d %lf",&g1.a,&g1.b);

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %lf \n", g1.b);
}*/



/* 예제 1-3
#include <stdio.h>

struct  point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10,20 };


	printf("%d  %d \n", p1.x, p1.y);
}*/




/* 예제 1-4
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };
	struct point p3 = { 0,0 };

	p3.x = p2.x - p1.x;
	p3.y = p2.y - p1.y;

	printf("%d %d \n", p3.x, p3.y);
}*/




/* 예제 1-5
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 0,0 };

	p2 = p1;

	printf("%d %d \n", p1.x, p1.y);
	printf("%d %d \n", p2.x, p2.y);
}*/



/* 예제 1-7
#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;
};

int main()
{
	struct student stu;
	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번 : %d \n", stu.no);
	printf("총점 : %lf \n", stu.s.total);
}*/



/* 예제 1-8
#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;
};


void main()
{
	struct student stu = { 2010323,{90,80,0} };
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번 : %d \n", stu.no);
	printf("총점 : %lf \n", stu.s.total);
}*/




/* 예제 1-10
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};


void main()
{
	struct student stu1 = { "20101323","park",80,80,0 };
	struct student stu2 = { "20101324","kim",95,85,0 };
	struct student stu3 = { "20101325","lee",100,90,0 };


	stu1.total = stu1.math + stu1.english;
	printf("학번 : %s , 이름 : %s \n", stu1.no, stu1.name);
	printf("총점 : %lf \n", stu1.total);

	printf("\n");

	stu2.total = stu2.math + stu2.english;
	printf("학번 : %s , 이름 : %s \n", stu2.no, stu2.name);
	printf("총점 : %lf \n", stu2.total);

	printf("\n");
	stu3.total = stu3.math + stu3.english;
	printf("학번 : %s , 이름 : %s \n", stu3.no, stu3.name);
	printf("총점 : %lf \n", stu3.total);
}*/




/* 예제 1-11
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};


void main()
{
	int i = 0;
	struct student stu[3] = { { "20101323","park",80,80,0 },
{ "20101324","kim",95,85,0 },
{ "20101325","lee",100,90,0 }
	};



	for (int i = 0; i < 3; i++)
	{
		stu[i].total = stu[i].math + stu[i].english;
		printf("학번 : %s , 이름 : %s \n", stu[i].no, stu[i].name);
		printf("총점 : %lf \n", stu[i].total);
	}
}*/



/*
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

void main()
{
	struct student stu[3];
	int i = 0;

	rewind(stdin);

	for (i = 0; i < 3; i++)
	{
		printf("학번 이름 총점 순으로 입력하세요");
		scanf_s("%s", stu[i].no,10);
		scanf_s("%s", stu[i].name,20);
		scanf_s("%lf", &stu[i].total);

	}

	printf("\n");

	printf("학생 정보를 출력합니다 \n");
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}
}*/




/* 예제 1-15
#include <stdio.h>

struct point
{
	int* x;
	int* y;
};

void main()
{
	int num1 = 4;
	int num2 = 5;
	struct point p1;

	p1.x = &num1;
	p1.y = &num2;

	printf("%d %d \n", num1, num2);
	printf("%d %d \n", *p1.x, *p1.y);
}*/



/* 예제 1-17
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 20,30 };
	printf("구조체 변수 p1 의 주소 : %p\n", &p1);
	printf("멤버 변수 p1.x 의 주소 : %p", &p1.x);
}*/



/* 예제 1-18
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;

};

int main()
{
	struct student stu = { "20101323","park",160 };
	struct student* p = NULL;

	p = &stu;
	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n", p->no, p->name, p->total);
}*/


/* 연습문제 1번
#include <stdio.h>

struct people
{
	int num; 학번
	char o; 혈액형
	double p;  시력
	int b;  몸무게
}; */



//연습문제 2번 
#include <stdio.h>

struct people
{
	int num; 
	char q; 
	double d;
	int b;
};

void main()
{

	struct people p[5];

	for (int i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf_s("%d", &p[i].num);
		printf("혈액형 : ");
		scanf_s("%s", &p[i].q,5);
		printf("시력 : ");
		scanf_s("%lf", &p[i].d);
		printf("몸무게 : ");
		scanf_s("%d", &p[i].b);
		printf("\n\n");
	}


	for (int i = 0; i < 5; i++)
	{
		printf("학번 : %d  혈액형 : %c  시력 : %lf  몸무게 : %d\n", p[i].num, p[i].q, p[i].d, p[i].b);
	}
}
