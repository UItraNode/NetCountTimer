#pragma once
ref class TimeCalculate
{
public:
	TimeCalculate();
	TimeCalculate(String^TTime);//格式一定是h:m:s,否则失败
	TimeCalculate(int _hour,int _minutes,int _seconds);
	TimeCalculate(TimeCalculate^TTime);

	~TimeCalculate();

	void AddToTime(TimeCalculate^);//与将当前对象相加
	void AddoneSec();
	TimeCalculate^AddTime(TimeCalculate^);

	void CutFromTime(TimeCalculate^);//与将当前对象相减，当前对象为被减数
	void CutoneSec();
	TimeCalculate^CutTime(TimeCalculate^,TimeCalculate^);

	String^ToFileString();//将当前对象转化成为规范的格式

	

	int getHours();
	void SetHours(int _hours);

	int getMinutes();
	void SetMinutes(int _Minutes);

	int getSeconds();
	void SetSeconds(int _Seconds);

	String^getTTime();
private:
	int THours;
	int TMinutes;
	int TSeconds;
	String^TTime;
};



ref class CalculateLogic
{
public:
	CalculateLogic();
	~CalculateLogic();
	void Begin();//开始计算
	void Stop();//停止计算
	TimeCalculate^getSum();//获取套餐总量
	TimeCalculate^getPresentUse();//获取本次使用
	TimeCalculate^getCountUse();//获取累计使用
	TimeCalculate^getResidueTime();//获取剩余量
	void FlushData();//完成设置后更新数据
private:
	NetworkSta*NetSta;//网络状态
	bool isConect;//连接状态
	TimeCalculate^sum;//套餐总量
	TimeCalculate^presentUse;//本次使用
	TimeCalculate^CountUse;//累计使用
	TimeCalculate^ResidueTime;//剩余量
	Timer^tRun;//运行定时器
	Timer^tSave;//数据保存定时器
	FileOp^fileOp;//文件操作对象
	void Run(System::Object ^sender, System::EventArgs ^e);
	void OnTick(System::Object ^sender, System::EventArgs ^e);
};