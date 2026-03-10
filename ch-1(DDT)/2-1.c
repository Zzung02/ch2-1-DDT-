/* #include <Stdio.h>  // 헤더파일- 표준 라이브러리

int main(void) // 어떤 반환타입인지, (void) 매개변수가 없다

{


	printf("Hello world\n"); // ; 세미콜론 중요
	printf("ddd\n");



	return 0; // 반환값



}

*/





#include <stdio.h>

int main(void)
{
	
	// 변수 선언

	int a = 5;
	int b = 10;


	/* 
	* 여기서는 두 변수 a,b의 합을 계산하고
	* 결과를 화면에 출력합니다.
	* 이 부분은 여러 줄 주석으로 처리되었습니다.
	*/

	
	 printf("a + b = %d\n", (a+b));

	return 0;

}