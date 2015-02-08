#include "stdafx.h"
#include "TimeCalculate.h"


TimeCalculate::TimeCalculate()
{
	this->THours = 0;
	this->TMinutes = 0;
	this->TSeconds = 0;
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
TimeCalculate::TimeCalculate(int _hour, int _minutes, int _seconds)
{
	this->THours = _hour;
	this->TMinutes = _minutes;
	this->TSeconds = _seconds;
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
TimeCalculate::TimeCalculate(TimeCalculate^TTime)
{
	this->THours = TTime->getHours();
	this->TMinutes = TTime->getMinutes();
	this->TSeconds = TTime->getSeconds();
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
TimeCalculate::TimeCalculate(String^TTime)
{
	this->TTime = TTime;
	array<Char>^sep = gcnew array<Char>{
		':'
	};
	array<String^>^result;
	result = TTime->Split(sep, StringSplitOptions::None);
	String^shours =result[0];
	String^sminutes = result[1];
	String^sseconds = result[2];
	this->THours = Convert::ToInt32(shours);
	this->TMinutes = Convert::ToInt32(sminutes);
	this->TSeconds = Convert::ToInt32(sseconds);
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
	sep->Clear(sep, 0, sep->Length);
}

TimeCalculate:: ~TimeCalculate()
{

}
int TimeCalculate::getHours()
{
	return this->THours;
}
void TimeCalculate::SetHours(int _hour)
{
	this->THours = _hour;
}

int TimeCalculate::getMinutes()
{
	return this->TMinutes;
}
void TimeCalculate::SetMinutes(int _Minutes)
{
	this->TMinutes= _Minutes;
}

int TimeCalculate::getSeconds()
{
	return this->TSeconds;
}
void TimeCalculate::SetSeconds(int _Seconds)
{
	this->TSeconds = _Seconds;
}


String^TimeCalculate::getTTime()
{
	return this->TTime;
}
void TimeCalculate::AddToTime(TimeCalculate^Add)
{
	this->TSeconds += Add->getSeconds();
	if (this->TSeconds >= 60)
	{
		this->TMinutes += 1;
		this->TSeconds -=60;
	}
	this->TMinutes += Add->getMinutes();
	if (this->TMinutes >= 60)
	{
		this->THours += 1;
		this->TMinutes -= 60;
	}
	this->THours += Add->THours;
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
void TimeCalculate::AddoneSec()
{
	this->TSeconds += 1;
	if (this->TSeconds >= 60)
	{
		this->TMinutes += 1;
		this->TSeconds -= 60;
	}
	if (this->TMinutes >= 60)
	{
		this->THours += 1;
		this->TMinutes -= 60;
	}
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
TimeCalculate^TimeCalculate::AddTime(TimeCalculate^Add)
{
	this->TSeconds += Add->getSeconds();
	if (this->TSeconds >= 60)
	{
		this->TMinutes += 1;
		this->TSeconds -=60;
	}
	this->TMinutes += Add->getMinutes();
	if (this->TMinutes >= 60)
	{
		this->THours += 1;
		this->TMinutes -= 60;
	}
	this->THours += Add->THours;
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
	return this;
}
void TimeCalculate::CutFromTime(TimeCalculate^Cut)
{
	if (this->TSeconds < Cut->getSeconds())
	{
		this->TMinutes--;
		this->TSeconds += 60;
		TSeconds -= Cut->getSeconds();
	}
	else
	{
		TSeconds -= Cut->getSeconds();
	}

	if (this->TMinutes < Cut->getMinutes())
	{
		this->THours--;
		this->TMinutes += 60;
		TMinutes -= Cut->getMinutes();
	}
	else
	{
		TMinutes -= Cut->getMinutes();
	}
	this->THours -= Cut->getHours();
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}

void TimeCalculate::CutoneSec()
{
	if (this->TSeconds<=0)
	{
		this->TMinutes--;
		this->TSeconds += 60;
		TSeconds -= 1;
		if (this->TMinutes <0)
			{
				this->THours--;
				this->TMinutes += 60;
				//TMinutes -= 1;
			}
	}
	else
	{
		TSeconds -= 1;
	}

	
	this->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
}
TimeCalculate^TimeCalculate::CutTime(TimeCalculate^BCut, TimeCalculate^Cut)
{

	if (BCut->TSeconds < Cut->getSeconds())
	{
		BCut->TMinutes--;
		BCut->TSeconds += 60;
		BCut->TSeconds -= Cut->getSeconds();
	}
	else
	{
		BCut->TSeconds -= Cut->getSeconds();
	}

	if (BCut->TMinutes < Cut->getMinutes())
	{
		BCut->THours--;
		BCut->TMinutes += 60;
		BCut->TMinutes -= Cut->getMinutes();
	}
	else
	{
		BCut->TMinutes -= Cut->getMinutes();
	}
	BCut->THours -= Cut->getHours();
	BCut->TTime = THours.ToString() + ":" + TMinutes + ":" + TSeconds;
	return BCut;
}
String^TimeCalculate::ToFileString()
{
	String^shours = "0000";
	String^sminutes = "00";
	String^sseconds = "00";


	if (this->THours < 10)
		shours = "000" + this->THours.ToString();
	else if(this->THours<100)
		shours = "00" + this->THours.ToString();
	else if (this->THours<1000)
		shours = "0" + this->THours.ToString();

	if (this->TMinutes < 10)
		sminutes = "0" + this->TMinutes.ToString();
	else
		sminutes = TMinutes.ToString();
	if (this->TSeconds < 10)
		sseconds = "0" + this->TSeconds.ToString();
	else
		sseconds = this->TSeconds.ToString();
	String^Result = shours + ":" + sminutes +":"+ sseconds;
	return Result;
}




CalculateLogic::CalculateLogic()
{
	this->sum = gcnew TimeCalculate();
	this->CountUse = gcnew TimeCalculate();
	this->presentUse = gcnew TimeCalculate();
	this->ResidueTime = gcnew TimeCalculate();
	
	NetSta = new NetworkSta();
	NetSta->Init();

	isConect = false;

	fileOp = gcnew FileOp();

	tRun = gcnew Timer();
	tRun->Interval = 1000;
	tRun->Enabled = false;
	tRun->Tick+=gcnew System::EventHandler(this, &CalculateLogic::Run);

	tSave = gcnew Timer();
	tSave->Interval = 1000 * 60;
	tSave->Enabled = false;
	tSave->Tick+=gcnew System::EventHandler(this, &CalculateLogic::OnTick);
}
CalculateLogic::~CalculateLogic()
{

}


TimeCalculate^CalculateLogic::getPresentUse()
{
	return this->presentUse;
}
TimeCalculate^CalculateLogic::getCountUse()
{
	return this->CountUse;
}
TimeCalculate^CalculateLogic::getResidueTime()
{
	return this->ResidueTime;
}
TimeCalculate^CalculateLogic::getSum()
{
	return this->sum;
}

void CalculateLogic::Begin()
{
	
	sum = gcnew TimeCalculate(fileOp->ReadSumFromFile());
	TimeCalculate^temp = gcnew TimeCalculate(sum);
	CountUse = gcnew TimeCalculate(fileOp->ReadCountUseFromFime());
	ResidueTime = sum->CutTime(temp,CountUse);
	tRun->Enabled = true;
	tSave->Enabled = true;

}

void CalculateLogic::Stop()
{
	tSave->Enabled = false;
	tRun->Enabled = false;
	CountUse->SetMinutes(CountUse->getMinutes()+1);
	//fileOp->WriteSumToFile(sum->ToFileString());
	fileOp->WriteCountUseToFile(CountUse->ToFileString());

}

void CalculateLogic::Run(System::Object ^sender, System::EventArgs ^e)
{
	VARIANT_BOOL bisConect;
	NetSta->iNetList->get_IsConnectedToInternet(&bisConect);
	if (bisConect)//测试时加上了！，实际使用把！删掉
	{
		this->isConect = true;
		tSave->Enabled = true;
		presentUse->AddoneSec();
		CountUse->AddoneSec();//BUG每次累计+1

								
		ResidueTime->CutoneSec();//每次减1秒
	}
	else
		tSave->Enabled = false;

}
void CalculateLogic::FlushData()
{
	sum = gcnew TimeCalculate(fileOp->ReadSumFromFile());
	TimeCalculate^temp = gcnew TimeCalculate(sum);
	CountUse = gcnew TimeCalculate(fileOp->ReadCountUseFromFime());
	ResidueTime = sum->CutTime(temp, CountUse);
}
void CalculateLogic::OnTick(System::Object ^sender, System::EventArgs ^e)
{
	//throw gcnew System::NotImplementedException();
	//fileOp->WriteSumToFile(sum->ToFileString());
	fileOp->WriteCountUseToFile(CountUse->ToFileString());
}
