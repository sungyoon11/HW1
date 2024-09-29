#include<iostream>
using namespace std;

#include "Ram.h"

int main() {
	Ram ram;//객체 생성
	ram.write(100, 20);//100번지 안에 20 저장
	ram.write(101, 30);//101번지 안에 30 저장
	char res = ram.read(100) + ram.read(101);//20+30=50
	ram.write(102, res);//102번지 안에 50 저장
	cout << "102 ¹øÁöÀÇ °ª = " << (int)ram.read(102) << endl;//102번지 값 출력
}
