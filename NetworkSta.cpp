
#include "stdafx.h"
#include "NetworkSta.h"

//#pragma comment(lib,"Ole32.lib")

	NetworkSta::NetworkSta()
	{
		this->Is_conect = false;
		hr = 0;
		iNetList = NULL;
		vb = 0;
	}
	NetworkSta::~NetworkSta()
	{
		iNetList->Release();
		CoUninitialize();
	}
	void NetworkSta::SetSta()
	{
		//this->Is_conect = sta;
	}
	void NetworkSta::Init()
	{
		IConnectionPointContainer*pCpc=NULL;
		IConnectionPoint*m_pConnectionPoint = NULL;
		IUnknown*pSink=NULL;
		/*HRESULT hr;*/
		hr = CoInitialize(NULL);//以单线程方式创建COM对象
		if (FAILED(hr))
		{
			MessageBox::Show("CoInitialize Failed.\r\n" + "ErrorCode:"+hr.ToString());
			return;
		}
		/* INetworkListManager*iNetList*/
		hr = CoCreateInstance(//,用指定的类标识符创建一个未初始化的对象
			__uuidof(NetworkListManager),//CLSID是指windows系统对于不同的应用程序，文件类型，OLE对象，特殊文件夹以及各种系统组件分配一个唯一表示它的ID代码，用于对其身份的标示和与其他对象进行区分
			NULL,
			CLSCTX_ALL,
			__uuidof(INetworkListManager),//指向接口指针
			(void**)&iNetList//记得这里有取址符号
			);
		if (FAILED(hr))//TODO://0x80070057参数有错误由于没有取址符号

		{
			MessageBox::Show(" CoCreateInstance Failed.\r\n"+"ErrorCode:"+hr.ToString());
			CoUninitialize();
			return;
		}
		/*Invoke()方法必要的参数*/
	/*	DISPID _dispid = 0;
		IID _iid = __uuidof(NULL);
		LCID lcid = 0;
		WORD wFlags = 0;
		DISPPARAMS*_dispparams = NULL;
		VARIANT*pvarResult = NULL;
		EXCEPINFO*pExcepinfo = NULL;
		UINT*puArgErr = NULL;
		///////////////////////
		//_dispid = DISPID_UNKNOWN;
		OLECHAR*name = L"SetSta";
		//hr= iNetList->GetIDsOfNames(__uuidof(NULL),&name,1,GetUserDefaultLCID(),&_dispid);
		if (FAILED(hr))
		{
		MessageBox::Show(" GetIDsOfNames Failed.\r\n" + "ErrorCode:" + hr.ToString());
		}
		/////////////////////////
		/*参数配置*/

		////////////////////////
	//	hr=iNetList->Invoke(_dispid, _iid, lcid, wFlags, _dispparams, pvarResult, pExcepinfo, puArgErr);
		/*hr=iNetList->QueryInterface(__uuidof(IConnectionPointContainer),(void**)&pCpc);
		if (SUCCEEDED(hr))
		{
			
			hr = pCpc->FindConnectionPoint(__uuidof(INetworkEvents),&m_pConnectionPoint);
			if (SUCCEEDED(hr))
			{
				
				DWORD m_dwCookie=0;
				hr = iNetEvent->QueryInterface(__uuidof(IUnknown), (void**)&pSink);
				if (SUCCEEDED(hr))
				{
					hr = m_pConnectionPoint->Advise(pSink, &m_dwCookie);
					if (FAILED(hr))
					{
						MessageBox::Show("Advise failed.\r\n"+hr.ToString());
						return;

					}
				}
			}
		}
		else
			MessageBox::Show("QueryInterface failed.");*/
		
	}
	
	