
/*#include <stdio.h>

void main()
{
	int a=10; // 일반 정수형변수

	//포인터변수 선언문법
	//자료형 *변수명;
	int *p=&a; //자료형의 기준은 내가 따라가는 변수의 자료형이다  

	//a의 주소값 
	printf("%p\n", &a);
	//p가 가리키는 a의 주소값 
	printf("%p\n", p);
	//이건 p의 주소값
	printf("%p\n", &p);

	//포인터변수 p가 가리키는 대상 a변수의 값에 접근하기
	printf("%d\n", *p); //*p 역참조 연산자

	*p = 500; //포인터변수가 가리키는 주소의 값을 변경 

	printf("%d\n", a);

	(*p)++;

	printf("%d\n", a);

}*/




/*
#include <stdio.h>

//값을 증가시키는 기능함수
void increase(int* p) //a의 주소값을 받음 2
{
	(*p)++; //a의 주소값에 정수값을 바꿈  3
}

void main()
{
	int a = 10;
	
	increase(&a); //a의 주소값을 보냄  1
	 
	printf("a : %d \n", a);  //즉 주소값에 정수값을 바꿨기 때문에 a:11 이 나옴 4 
} */



/*
#include <stdio.h>

//값을 치환하는 기능 함수
void swap(int* a,int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void main()
{
	int a = 10;
	int b = 20;

	printf("변경전 a : %d \n", a);
	printf("변경전 b : %d \n", b);

	// a <-> b의 값을 서로 바꿈
	swap(&a,&b);

	printf("\n");
	printf("변경후 a : %d \n", a);
	printf("변경후 b : %d \n", b);
} */



/*
#include <stdio.h>

void output(int *arr)
{
	arr[0] += 1;
	printf("%d \n", arr[0]);
	printf("%d \n", arr[1]);
	printf("%d \n", arr[2]);
	printf("%d \n", arr[3]);
	printf("%d \n", arr[4]);
}

void main()
{
	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;
	
	output(arr);

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", *p);
		p++;
	}
}  
//   arr[4]=50 이거랑
// *(arr + 4) =50 이거는 같은말임*/ 




/* 예제 3-4
#include <stdio.h>

void main()
{
	int a = 0, b = 0, c = 0;
	int* ip = NULL;

	ip = &a;
	*ip = 10;
	printf("%d %d %d %d \n", a, b, c, *ip);

	ip = &b;
	*ip = 20;
	printf("%d %d %d %d \n", a, b, c, *ip);

	ip = &c;
	*ip = 30;
	printf("%d %d %d %d \n", a, b, c, *ip);
}*/




/* 예제 3-6
#include <stdio.h>

void main()
{
	int num1 = 10;
	int num2 = 0;
	int* ip = NULL;

	ip = &num1;

	num2 = *ip + num1;
	printf("%d %d %d \n", *ip, num1, num2);
}*/



/* 예제 3-14
#include <stdio.h>

void main()
{
	printf("%x %x %x\n", main, printf, scanf_s);
}*/



/* 연습문제 1번 
#include <stdio.h>

void main()
{
	char c = 'B';
	int num = 10;

	char* cp =NULL;
	int * ip = NULL;

	cp = &c;
	ip = &num;

	*cp = 'A';
	*ip = 20;

	printf("%p %d\n", &num, num);
	printf("%p %d\n", ip, *ip);

	printf("%p %d\n", &c, c);
	printf("%p %d\n", cp, *cp);
}*/



/* 연습문제 2번
#include <stdio.h>

void main()
{
	int a = 10;
	int b = 20;
	int temp;

	int* p1 = NULL;
	int* p2 = NULL;

	p1 = &a;
	p2 = &b;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf("%d %d \n", a, b);
}*/



/*
#include <stdio.h>
#include <stdlib.h>


char* InputString()
{
	char str[20];
	printf("이름 입력 :");
	scanf_s("%s", str,20);

	//위 지역변수 str은 함수종료 후 메모리에서 사라짐.
	//그래서 데이터를 온전히 보관하지 못함

	//입력받은 글자수
	int len=0;
	for (int i = 0; i < 20; i++)
	{
		if (str[i] == 0) break;
		len++;
	}

	char* p=malloc(len+1);

	for (int i = 0; i < len+1; i++)
		p[i] = str[i];

	return p;
}

void main()
{
	//문자열 입력을 받는 기능함수 호출
	char* name = InputString();
	printf("\n\n이름 출력 %s 입니다.",name);

	free(name);
}*/


#include <stdio.h>

int main()
{
	int h, m;


}