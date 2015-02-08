#include "stdafx.h"
#include "CheckNew.h"

CheckNew::CheckNew()
{
	this->ver ="";
	this->DownLoad = "";
	this->oldVer = "";
}
String^CheckNew::GetVerFromIniFile(String^filename)
{
	char*fileName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename);
	char _ver[6]="";
	DWORD result = 0;
	result = GetPrivateProfileStringA("new", "ver", "", _ver, sizeof(_ver), fileName);
	this->ver =System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)_ver);
	return this->ver;
}
String^CheckNew::GetDownLoadFromIniFile(String^filename)
{
	char*fileName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename);
	char _downLoad[128]="";
	GetPrivateProfileStringA("new", "download", "", _downLoad, sizeof(_downLoad), fileName);
	this->DownLoad = System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)_downLoad);
	return this->DownLoad;
}
void CheckNew::DownLoadFileFromWeb(String^WebUrl, String^filepath)
{
	WebClient^_webClient = gcnew  WebClient();
	_webClient->DownloadFile(WebUrl, filepath);
}
String^CheckNew::GetOldVer()
{
	if (oldVer != "")
		return this->oldVer;
	else
		return "error";
}
void CheckNew::SetOldver(String^_ver)
{
	this->oldVer = _ver;
}