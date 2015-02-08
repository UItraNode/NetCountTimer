#include "stdafx.h"
#include "FileOp.h"


FileOp::FileOp() 
{
	sum = "0";
	CountUse = "";
	CheckFile();
}
FileOp::~FileOp()
{
	sum = nullptr;
	CountUse = nullptr;
}

bool FileOp::CheckFile()
{
	if (!file->Exists("CountTimer.txt"))
	{
		_fileStream = File::Create("CountTimer.txt");
		AddText(_fileStream, "#SUM##0000:00:00#\r\n#COUNTUSE##0000:00:00#");
		_fileStream->Close();
		return false;
	}

	String^CheckData = file->ReadAllText("CountTimer.txt");

	if (CheckData->Length != 41)
		return false;
	return true;
}
String^FileOp::ReadSumFromFile()
{
	if (!CheckFile())
		return nullptr;
	FileStream^_ReadSumfileStream = File::OpenRead("CountTimer.txt");
	if (_ReadSumfileStream->CanSeek)
	{
		_ReadSumfileStream->Seek(6, SeekOrigin::Begin);
		this->sum = ReadText(_ReadSumfileStream, 0,10);
		
	}
	_ReadSumfileStream->Close();
	return sum;
}
void FileOp::WriteSumToFile(String^Sum)
{
	if (!CheckFile())
		return ;
	FileStream^_fileStream = File::OpenWrite("CountTimer.txt");
	if (_fileStream->CanSeek)
	{
		_fileStream->Seek(6, SeekOrigin::Begin);

		AddText(_fileStream, Sum);
		
	}
	_fileStream->Close();
}
String^FileOp::ReadCountUseFromFime()
{
	if (!CheckFile())
		return nullptr;
	FileStream^_ReadCountUsefileStream = File::OpenRead("CountTimer.txt");
	String^temp = "0000:00:00";
	if (_ReadCountUsefileStream->CanRead)
	{
		_ReadCountUsefileStream->Seek(30, SeekOrigin::Begin);
		temp=ReadText(_ReadCountUsefileStream,0,10);
		CountUse = temp;
	}
	_ReadCountUsefileStream->Close();
	return temp;
}
void FileOp::WriteCountUseToFile(String^CountTime)
{
	if (!CheckFile())
		return ;
	FileStream^_WriteCountUsefileStream = File::OpenWrite("CountTimer.txt");
	if (_WriteCountUsefileStream->CanSeek)
	{
		_WriteCountUsefileStream->Seek(30, SeekOrigin::Begin);
		AddText(_WriteCountUsefileStream, CountTime);
	}
	_WriteCountUsefileStream->Close();
}
void FileOp::AddText(FileStream^ fs, String^ value)
{
	array<Byte>^info = (gcnew UTF8Encoding(true))->GetBytes(value);
	fs->Write(info, 0, info->Length);
}
String^ FileOp::ReadText(FileStream^ fs,int offset,int count)
{
	array<Byte>^info=gcnew array<Byte>(128);
	Encoding^ Data=gcnew UTF8Encoding(true) ;
	fs->Read(info, offset, count);
	return Data->GetString(info);
}
