#pragma once
class Ram
{
	char mem[100 * 1024];
	int size;

public:
	Ram();//생성자
	~Ram();//소멸자
	char read(int address);
	void write(int address, char value);//address에 value를 저장


};

