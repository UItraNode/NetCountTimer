#pragma once

	using namespace System;
	using namespace System::Net;
	using namespace System::Text;
	ref class CheckNew
	{
	public:
		CheckNew();
		void DownLoadFileFromWeb(String^WebUrl,String^filepath);
		String^GetOldVer();
		void SetOldver(String^ver);
		String^GetVerFromIniFile(String^filename);
		String^GetDownLoadFromIniFile(String^filename);
		String^ver;
		String^DownLoad;
	private:
		String^oldVer;
	};

