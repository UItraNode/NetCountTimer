#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Text;
ref class FileOp
{
public:
	FileOp();
	~FileOp();
	String^ ReadSumFromFile();//从文件中读取套餐总量
	void WriteSumToFile(String^Sum);//将套餐总量写入文件中
	String^ReadCountUseFromFime();//从文件中读取已使用量
	void WriteCountUseToFile(String^_CountUse);//将已使用量写入文件中
	void AddText(FileStream^ fs, String^ value);//向文本中添加字符
	String^ReadText(FileStream^ fs, int offset, int count);//向文本读取字符
private:
	String^sum;//套餐总时长
	String^CountUse;//累计使用时长
	File^file;
	FileStream^_fileStream;
	bool CheckFile();
};

