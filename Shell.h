#pragma once
/************************************************************************/
/* 交互解析类：*/
/************************************************************************/

#include <string>
#include <vector>

class Shell
{
public:
	Shell(void);
	~Shell(void);

	//read user input and execute
	bool read(std::string s);

private:
	//获取字符分割后的输入指令信息
	std::vector<std::string>* instruck;
};

