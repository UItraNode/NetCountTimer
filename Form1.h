#pragma once

#include"stdafx.h"
namespace NetCountTimer {

	using namespace System;
	using namespace System::Net;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Button^  end_count;
	private: System::Windows::Forms::Button^  begin_count;
	private: System::Windows::Forms::TextBox^  m_uses;
	private: System::Windows::Forms::TextBox^  m_usem;
	private: System::Windows::Forms::TextBox^  m_useh;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label5;
	private: System::ComponentModel::IContainer^  components;
	
	private: System::Windows::Forms::TextBox^  m_ResidueUses;

	private: System::Windows::Forms::TextBox^  m_ResidueUsem;

	private: System::Windows::Forms::TextBox^  m_ResidueUseh;



	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  m_CountUses;

	private: System::Windows::Forms::TextBox^  m_CountUsem;

	private: System::Windows::Forms::TextBox^  m_CountUseh;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TabPage^  tabPage4;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  SetCount;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	protected:

	protected:



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		NetworkSta*sta;//网络连接状态
	private: TimeCalculate^presentUse;//本次使用
	private: TimeCalculate^ countUseTime;//累计使用时长
	private: TimeCalculate^  residueTime;//剩余时长
	private: CalculateLogic^Logic;
	private:FileOp^fileOp;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::NumericUpDown^  m_setsum;
	private: System::Windows::Forms::NumericUpDown^  m_setusem;

	private: System::Windows::Forms::NumericUpDown^  m_setuseh;
	private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::LinkLabel^  link;
	private: System::Windows::Forms::LinkLabel^  l_checkNew;
	private: System::Windows::Forms::Button^  b_CheckNew;
	private: System::Windows::Forms::Label^  label19;







	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->m_ResidueUses = (gcnew System::Windows::Forms::TextBox());
			this->m_ResidueUsem = (gcnew System::Windows::Forms::TextBox());
			this->m_ResidueUseh = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->m_CountUses = (gcnew System::Windows::Forms::TextBox());
			this->m_CountUsem = (gcnew System::Windows::Forms::TextBox());
			this->m_CountUseh = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->end_count = (gcnew System::Windows::Forms::Button());
			this->begin_count = (gcnew System::Windows::Forms::Button());
			this->m_uses = (gcnew System::Windows::Forms::TextBox());
			this->m_usem = (gcnew System::Windows::Forms::TextBox());
			this->m_useh = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->m_setusem = (gcnew System::Windows::Forms::NumericUpDown());
			this->m_setuseh = (gcnew System::Windows::Forms::NumericUpDown());
			this->m_setsum = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SetCount = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->link = (gcnew System::Windows::Forms::LinkLabel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->b_CheckNew = (gcnew System::Windows::Forms::Button());
			this->l_checkNew = (gcnew System::Windows::Forms::LinkLabel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setusem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setuseh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setsum))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(1, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(287, 234);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->m_ResidueUses);
			this->tabPage1->Controls->Add(this->m_ResidueUsem);
			this->tabPage1->Controls->Add(this->m_ResidueUseh);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->m_CountUses);
			this->tabPage1->Controls->Add(this->m_CountUsem);
			this->tabPage1->Controls->Add(this->m_CountUseh);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->end_count);
			this->tabPage1->Controls->Add(this->begin_count);
			this->tabPage1->Controls->Add(this->m_uses);
			this->tabPage1->Controls->Add(this->m_usem);
			this->tabPage1->Controls->Add(this->m_useh);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(279, 208);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"计时制";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// m_ResidueUses
			// 
			this->m_ResidueUses->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_ResidueUses->Location = System::Drawing::Point(182, 137);
			this->m_ResidueUses->Name = L"m_ResidueUses";
			this->m_ResidueUses->Size = System::Drawing::Size(37, 21);
			this->m_ResidueUses->TabIndex = 22;
			// 
			// m_ResidueUsem
			// 
			this->m_ResidueUsem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_ResidueUsem->Location = System::Drawing::Point(110, 137);
			this->m_ResidueUsem->Name = L"m_ResidueUsem";
			this->m_ResidueUsem->Size = System::Drawing::Size(33, 21);
			this->m_ResidueUsem->TabIndex = 21;
			// 
			// m_ResidueUseh
			// 
			this->m_ResidueUseh->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_ResidueUseh->Location = System::Drawing::Point(48, 137);
			this->m_ResidueUseh->Name = L"m_ResidueUseh";
			this->m_ResidueUseh->Size = System::Drawing::Size(32, 21);
			this->m_ResidueUseh->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(225, 140);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 12);
			this->label12->TabIndex = 19;
			this->label12->Text = L"秒";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(149, 140);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 12);
			this->label13->TabIndex = 18;
			this->label13->Text = L"分";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(86, 140);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 12);
			this->label14->TabIndex = 17;
			this->label14->Text = L"时";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(15, 117);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 14);
			this->label15->TabIndex = 16;
			this->label15->Text = L"套餐剩余";
			// 
			// m_CountUses
			// 
			this->m_CountUses->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_CountUses->Location = System::Drawing::Point(182, 88);
			this->m_CountUses->Name = L"m_CountUses";
			this->m_CountUses->Size = System::Drawing::Size(37, 21);
			this->m_CountUses->TabIndex = 15;
			// 
			// m_CountUsem
			// 
			this->m_CountUsem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_CountUsem->Location = System::Drawing::Point(110, 88);
			this->m_CountUsem->Name = L"m_CountUsem";
			this->m_CountUsem->Size = System::Drawing::Size(33, 21);
			this->m_CountUsem->TabIndex = 14;
			// 
			// m_CountUseh
			// 
			this->m_CountUseh->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_CountUseh->Location = System::Drawing::Point(48, 88);
			this->m_CountUseh->Name = L"m_CountUseh";
			this->m_CountUseh->Size = System::Drawing::Size(32, 21);
			this->m_CountUseh->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(225, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 12);
			this->label8->TabIndex = 12;
			this->label8->Text = L"秒";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(149, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 12);
			this->label9->TabIndex = 11;
			this->label9->Text = L"分";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(87, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 12);
			this->label10->TabIndex = 10;
			this->label10->Text = L"时";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(15, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 14);
			this->label11->TabIndex = 9;
			this->label11->Text = L"累计使用";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// end_count
			// 
			this->end_count->Location = System::Drawing::Point(158, 168);
			this->end_count->Name = L"end_count";
			this->end_count->Size = System::Drawing::Size(75, 23);
			this->end_count->TabIndex = 8;
			this->end_count->Text = L"停止";
			this->end_count->UseVisualStyleBackColor = true;
			this->end_count->Click += gcnew System::EventHandler(this, &Form1::end_count_Click);
			// 
			// begin_count
			// 
			this->begin_count->Location = System::Drawing::Point(29, 168);
			this->begin_count->Name = L"begin_count";
			this->begin_count->Size = System::Drawing::Size(75, 23);
			this->begin_count->TabIndex = 7;
			this->begin_count->Text = L"开始";
			this->begin_count->UseVisualStyleBackColor = true;
			this->begin_count->Click += gcnew System::EventHandler(this, &Form1::begin_count_Click);
			// 
			// m_uses
			// 
			this->m_uses->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_uses->Location = System::Drawing::Point(182, 33);
			this->m_uses->Name = L"m_uses";
			this->m_uses->Size = System::Drawing::Size(37, 21);
			this->m_uses->TabIndex = 6;
			// 
			// m_usem
			// 
			this->m_usem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_usem->Location = System::Drawing::Point(109, 33);
			this->m_usem->Name = L"m_usem";
			this->m_usem->Size = System::Drawing::Size(34, 21);
			this->m_usem->TabIndex = 5;
			// 
			// m_useh
			// 
			this->m_useh->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_useh->Location = System::Drawing::Point(48, 33);
			this->m_useh->Name = L"m_useh";
			this->m_useh->Size = System::Drawing::Size(32, 21);
			this->m_useh->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(225, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"秒";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"分";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"时";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(15, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"本次已使用";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(279, 208);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"计流量制";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"幼圆", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(19, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 32);
			this->label5->TabIndex = 0;
			this->label5->Text = L"抱歉，该功能预计在不久后诞生\r\n现在暂不支持";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->m_setusem);
			this->tabPage3->Controls->Add(this->m_setuseh);
			this->tabPage3->Controls->Add(this->m_setsum);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->SetCount);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(279, 208);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"设置";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// m_setusem
			// 
			this->m_setusem->Font = (gcnew System::Drawing::Font(L"Georgia", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_setusem->Location = System::Drawing::Point(131, 117);
			this->m_setusem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->m_setusem->Name = L"m_setusem";
			this->m_setusem->Size = System::Drawing::Size(43, 23);
			this->m_setusem->TabIndex = 14;
			// 
			// m_setuseh
			// 
			this->m_setuseh->Font = (gcnew System::Drawing::Font(L"Georgia", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_setuseh->Location = System::Drawing::Point(52, 117);
			this->m_setuseh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->m_setuseh->Name = L"m_setuseh";
			this->m_setuseh->Size = System::Drawing::Size(43, 23);
			this->m_setuseh->TabIndex = 13;
			// 
			// m_setsum
			// 
			this->m_setsum->Font = (gcnew System::Drawing::Font(L"Georgia", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_setsum->Location = System::Drawing::Point(52, 47);
			this->m_setsum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->m_setsum->Name = L"m_setsum";
			this->m_setsum->Size = System::Drawing::Size(100, 23);
			this->m_setsum->TabIndex = 12;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(18, 97);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 12);
			this->label22->TabIndex = 11;
			this->label22->Text = L"已使用";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"幼圆", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(178, 122);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 16);
			this->label21->TabIndex = 10;
			this->label21->Text = L"分";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"幼圆", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(101, 120);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 16);
			this->label20->TabIndex = 9;
			this->label20->Text = L"时";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"幼圆", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(158, 47);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 16);
			this->label18->TabIndex = 5;
			this->label18->Text = L"时";
			// 
			// SetCount
			// 
			this->SetCount->Location = System::Drawing::Point(190, 179);
			this->SetCount->Name = L"SetCount";
			this->SetCount->Size = System::Drawing::Size(75, 23);
			this->SetCount->TabIndex = 4;
			this->SetCount->Text = L"完成设置";
			this->SetCount->UseVisualStyleBackColor = true;
			this->SetCount->Click += gcnew System::EventHandler(this, &Form1::SetCount_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 12);
			this->label16->TabIndex = 0;
			this->label16->Text = L"设置套餐总时长";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->l_checkNew);
			this->tabPage4->Controls->Add(this->b_CheckNew);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->link);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(279, 208);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"关于";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(7, 149);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(273, 28);
			this->label19->TabIndex = 8;
			this->label19->Text = L"有问题欢迎反馈，你的支持是我最大的动力\r\n问题可以发送到906088182@qq.com";
			// 
			// link
			// 
			this->link->ActiveLinkColor = System::Drawing::Color::WhiteSmoke;
			this->link->AutoSize = true;
			this->link->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->link->Location = System::Drawing::Point(6, 188);
			this->link->Name = L"link";
			this->link->Size = System::Drawing::Size(147, 14);
			this->link->TabIndex = 7;
			this->link->TabStop = true;
			this->link->Text = L"欢迎访问我的百度空间";
			this->link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::link_LinkClicked);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"方正舒体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::OliveDrab;
			this->label17->Location = System::Drawing::Point(0, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(276, 25);
			this->label17->TabIndex = 6;
			this->label17->Text = L"无线网卡专用联网计量器";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(60, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 34);
			this->label6->TabIndex = 4;
			this->label6->Text = L"WangWang";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"幼圆", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::DimGray;
			this->label7->Location = System::Drawing::Point(87, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 14);
			this->label7->TabIndex = 3;
			this->label7->Text = L"测试V1.0.0";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 240);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(288, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Click += gcnew System::EventHandler(this, &Form1::toolStripStatusLabel2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// b_CheckNew
			// 
			this->b_CheckNew->Location = System::Drawing::Point(198, 184);
			this->b_CheckNew->Name = L"b_CheckNew";
			this->b_CheckNew->Size = System::Drawing::Size(75, 21);
			this->b_CheckNew->TabIndex = 9;
			this->b_CheckNew->Text = L"检查更新";
			this->b_CheckNew->UseVisualStyleBackColor = true;
			this->b_CheckNew->Click += gcnew System::EventHandler(this, &Form1::b_CheckNew_Click);
			// 
			// l_checkNew
			// 
			this->l_checkNew->AutoSize = true;
			this->l_checkNew->Location = System::Drawing::Point(88, 127);
			this->l_checkNew->Name = L"l_checkNew";
			this->l_checkNew->Size = System::Drawing::Size(89, 12);
			this->l_checkNew->TabIndex = 10;
			this->l_checkNew->TabStop = true;
			this->l_checkNew->Text = L"当前为最新版本";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(288, 262);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"无线网卡专用联网计量器";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setusem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setuseh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_setsum))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripStatusLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->Enabled = true;
			 this->end_count->Enabled = false;
			 toolStripStatusLabel2->Text = "现在是："+DateTime::Now.ToString();
			 toolStripStatusLabel1->Text = "网络状态："+"未连接";
			 m_useh->Text = "0";
			 m_usem->Text = "0";
			 m_uses->Text = "0";
			 sta = new NetworkSta();
			 sta->Init();
			 Logic = gcnew CalculateLogic();

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "现在是：" + DateTime::Now.ToString();
			 VARIANT_BOOL vb=0;
			 sta->iNetList->get_IsConnectedToInternet(&vb);
			 if (vb)
			 {
				 toolStripStatusLabel1->Text = "网络状态：" + "已连接";
			 }
			 else
				 toolStripStatusLabel1->Text = "网络状态：" + "未连接";
	m_useh->Text = Logic->getPresentUse()->getHours().ToString();
	m_usem->Text = Logic->getPresentUse()->getMinutes().ToString();
	m_uses->Text = Logic->getPresentUse()->getSeconds().ToString();

	m_CountUseh->Text = Logic->getCountUse()->getHours().ToString();
	m_CountUsem->Text = Logic->getCountUse()->getMinutes().ToString();
	m_CountUses->Text = Logic->getCountUse()->getSeconds().ToString();
	
	m_ResidueUseh->Text = Logic->getResidueTime()->getHours().ToString();
	m_ResidueUsem->Text = Logic->getResidueTime()->getMinutes().ToString();
	m_ResidueUses->Text = Logic->getResidueTime()->getSeconds().ToString();
}
		 //void OnTick(System::Object ^sender, System::EventArgs ^e);
private: System::Void begin_count_Click(System::Object^  sender, System::EventArgs^  e) {//开始响应
			 this->end_count->Enabled = true;
			 this->begin_count->Enabled = false;
			 Logic->Begin();
}
private: System::Void end_count_Click(System::Object^  sender, System::EventArgs^  e) {//停止计数
			 this->end_count->Enabled = false;
			 this->begin_count->Enabled = true;
			 Logic->Stop();
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void SetCount_Click(System::Object^  sender, System::EventArgs^  e) {
			 int sum = m_setsum->Value.ToInt32(m_setsum->Value);
			 TimeCalculate^Temp = gcnew TimeCalculate(sum,0,0);
			 fileOp->WriteSumToFile(Temp->ToFileString());
			 int useh = m_setuseh->Value.ToInt32(m_setuseh->Value);
			 int usem = m_setusem->Value.ToInt32(m_setusem->Value);
			 Temp = gcnew TimeCalculate(useh,usem,0);
			 fileOp->WriteCountUseToFile(Temp->ToFileString());
			 Logic->FlushData();
}
private: System::Void link_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("iexplore.exe", "http://hi.baidu.com/wangwang_home");
}
private: System::Void b_CheckNew_Click(System::Object^  sender, System::EventArgs^  e) {//检查更新
			 VARIANT_BOOL vb = 0;
			 sta->iNetList->get_IsConnectedToInternet(&vb);
			 if (false)
			 {
				 MessageBox::Show("您的网络未连接哦！/r/n请检查连接后重试吧！");
				 return;
			 }
			 try
			 {
				 String^path = "C:\\Users\\want\\Documents\\";
				 String^filename = "NetCountTimerNew.ini";
				 String^Uri = path + filename;
			 l_checkNew->Text = "正在检查更新……";
			 String^remoteUri = "http://dl.nimitzdev.org/_W_/NetCountTimerNew.ini";
			// WebClient^_webClient = gcnew  WebClient();
			// _webClient->DownloadFile(remoteUri,Uri); 
			 CheckNew^_CheckNew = gcnew CheckNew();
			// _CheckNew->DownLoadFileFromWeb(remoteUri,Uri);
			 String^NewVer = _CheckNew->GetVerFromIniFile(Uri);
			 String^DownLoad = _CheckNew->GetDownLoadFromIniFile(Uri);
			 _CheckNew->SetOldver(Application::ProductVersion);
			 MessageBox::Show(_CheckNew->GetOldVer());
			 }
			 catch(WebException^e)
			 {
				 MessageBox::Show("抱歉，更新过程出现了问题！请点击更新按钮重试吧！"+"\r\nerrorCode:"+e->ToString());
			 }
			

}
};
}
