#include<iostream>
#include "Ram.h"
using namespace std;

#include "Ram.h"

Ram::Ram() {

	size = 100 * 1024; // 메모리 크기 설정
	for (int i = 0; i < size; ++i)
		mem[i] = 0;// 메모리 초기화
}
Ram::~Ram() {
	cout << "메모리 제거됨";//소멸시 메세지 출력
}
char Ram::read(int address) {
	return mem[address];//주소에 값을 반환
}
void Ram::write(int address, char value) {
	mem[address] = value;//주소에 값을 저장
}
