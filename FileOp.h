#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Text;
ref class FileOp
{
public:
	FileOp();
	~FileOp();
	String^ ReadSumFromFile();//���ļ��ж�ȡ�ײ�����
	void WriteSumToFile(String^Sum);//���ײ�����д���ļ���
	String^ReadCountUseFromFime();//���ļ��ж�ȡ��ʹ����
	void WriteCountUseToFile(String^_CountUse);//����ʹ����д���ļ���
	void AddText(FileStream^ fs, String^ value);//���ı�������ַ�
	String^ReadText(FileStream^ fs, int offset, int count);//���ı���ȡ�ַ�
private:
	String^sum;//�ײ���ʱ��
	String^CountUse;//�ۼ�ʹ��ʱ��
	File^file;
	FileStream^_fileStream;
	bool CheckFile();
};

