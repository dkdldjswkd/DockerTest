// Test.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "Test.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	while (1)
	{
		cout << "hello" << endl;
		std::this_thread::sleep_for(std::chrono::seconds(1)); // 1초 대기
	}

	return 0;
}