
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
		hr = CoInitialize(NULL);//�Ե��̷߳�ʽ����COM����
		if (FAILED(hr))
		{
			MessageBox::Show("CoInitialize Failed.\r\n" + "ErrorCode:"+hr.ToString());
			return;
		}
		/* INetworkListManager*iNetList*/
		hr = CoCreateInstance(//,��ָ�������ʶ������һ��δ��ʼ���Ķ���
			__uuidof(NetworkListManager),//CLSID��ָwindowsϵͳ���ڲ�ͬ��Ӧ�ó����ļ����ͣ�OLE���������ļ����Լ�����ϵͳ�������һ��Ψһ��ʾ����ID���룬���ڶ�����ݵı�ʾ�������������������
			NULL,
			CLSCTX_ALL,
			__uuidof(INetworkListManager),//ָ��ӿ�ָ��
			(void**)&iNetList//�ǵ�������ȡַ����
			);
		if (FAILED(hr))//TODO://0x80070057�����д�������û��ȡַ����

		{
			MessageBox::Show(" CoCreateInstance Failed.\r\n"+"ErrorCode:"+hr.ToString());
			CoUninitialize();
			return;
		}
		/*Invoke()������Ҫ�Ĳ���*/
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
		/*��������*/

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
	
	