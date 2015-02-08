#pragma once

	using namespace System;
	using namespace System::Windows::Forms;

	 class NetworkSta 
	{
	public:
		NetworkSta();
		~NetworkSta();
		void Init();
		INetworkListManager*iNetList;
	private:
		void SetSta();
		bool Is_conect;
		HRESULT hr;
		VARIANT_BOOL vb;

	};

