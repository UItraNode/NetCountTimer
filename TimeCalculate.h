#pragma once
ref class TimeCalculate
{
public:
	TimeCalculate();
	TimeCalculate(String^TTime);//��ʽһ����h:m:s,����ʧ��
	TimeCalculate(int _hour,int _minutes,int _seconds);
	TimeCalculate(TimeCalculate^TTime);

	~TimeCalculate();

	void AddToTime(TimeCalculate^);//�뽫��ǰ�������
	void AddoneSec();
	TimeCalculate^AddTime(TimeCalculate^);

	void CutFromTime(TimeCalculate^);//�뽫��ǰ�����������ǰ����Ϊ������
	void CutoneSec();
	TimeCalculate^CutTime(TimeCalculate^,TimeCalculate^);

	String^ToFileString();//����ǰ����ת����Ϊ�淶�ĸ�ʽ

	

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
	void Begin();//��ʼ����
	void Stop();//ֹͣ����
	TimeCalculate^getSum();//��ȡ�ײ�����
	TimeCalculate^getPresentUse();//��ȡ����ʹ��
	TimeCalculate^getCountUse();//��ȡ�ۼ�ʹ��
	TimeCalculate^getResidueTime();//��ȡʣ����
	void FlushData();//������ú��������
private:
	NetworkSta*NetSta;//����״̬
	bool isConect;//����״̬
	TimeCalculate^sum;//�ײ�����
	TimeCalculate^presentUse;//����ʹ��
	TimeCalculate^CountUse;//�ۼ�ʹ��
	TimeCalculate^ResidueTime;//ʣ����
	Timer^tRun;//���ж�ʱ��
	Timer^tSave;//���ݱ��涨ʱ��
	FileOp^fileOp;//�ļ���������
	void Run(System::Object ^sender, System::EventArgs ^e);
	void OnTick(System::Object ^sender, System::EventArgs ^e);
};