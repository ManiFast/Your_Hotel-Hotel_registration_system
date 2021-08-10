#pragma once

namespace YourHotelСистемаучетажителейотеля {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NamePer;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ MiddleName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Surname;

	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ Female;



	private: System::Windows::Forms::RadioButton^ Male;

	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ Year;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::CheckBox^ Single;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ SerialNum;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ INN;

	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Country;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ DocumentNum;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Registration;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::TextBox^ BirthDay;














private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ BirthYear;

private: System::Windows::Forms::ComboBox^ BirthMonth;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ KPP;



private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ VisaNum;





private: System::Windows::Forms::TextBox^ Email;

private: System::Windows::Forms::Label^ label26;






private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ VisaPlace;

private: System::Windows::Forms::Label^ label28;


private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ VisaType;

private: System::Windows::Forms::Label^ label30;


private: System::Windows::Forms::Label^ label31;



private: System::Windows::Forms::Label^ label32;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TrackBar^ trackBar1;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ RoomNum;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TabControl^ Addit;


private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::ComboBox^ ComboBoxIn;








private: System::Windows::Forms::RichTextBox^ VisaIn;


private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::RichTextBox^ VisaDrive;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::ComboBox^ ComboBoxDrive;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::MaskedTextBox^ PhoneNumber;
private: System::Windows::Forms::MaskedTextBox^ VisaEnd;
private: System::Windows::Forms::MaskedTextBox^ VisaStart;

private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
private: System::Windows::Forms::MaskedTextBox^ VisaGive;
private: System::Windows::Forms::MaskedTextBox^ VisaDriveOut;





































	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TabControl^ tabControl1;
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"1 номер"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"2 номер"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"3 номер"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"4 номер"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"5 номер"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"5 номер"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"6 номер"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"7 номер"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"8 номер"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"1 этаж", gcnew cli::array< System::Windows::Forms::TreeNode^  >(9) {
				treeNode1,
					treeNode2, treeNode3, treeNode4, treeNode5, treeNode6, treeNode7, treeNode8, treeNode9
			}));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Люкс"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"1 номер"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"2 номер"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"2 этаж", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode11,
					treeNode12, treeNode13
			}));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->PhoneNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->BirthYear = (gcnew System::Windows::Forms::TextBox());
			this->BirthMonth = (gcnew System::Windows::Forms::ComboBox());
			this->BirthDay = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Registration = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Country = (gcnew System::Windows::Forms::TextBox());
			this->Single = (gcnew System::Windows::Forms::CheckBox());
			this->Year = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Female = (gcnew System::Windows::Forms::RadioButton());
			this->Male = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NamePer = (gcnew System::Windows::Forms::TextBox());
			this->Surname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MiddleName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->VisaDriveOut = (gcnew System::Windows::Forms::MaskedTextBox());
			this->VisaGive = (gcnew System::Windows::Forms::MaskedTextBox());
			this->VisaEnd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->VisaStart = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->VisaType = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->VisaPlace = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->VisaNum = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->Addit = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxIn = (gcnew System::Windows::Forms::ComboBox());
			this->VisaIn = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxDrive = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->VisaDrive = (gcnew System::Windows::Forms::RichTextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->KPP = (gcnew System::Windows::Forms::TextBox());
			this->DocumentNum = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SerialNum = (gcnew System::Windows::Forms::TextBox());
			this->INN = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->RoomNum = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			tabControl1 = (gcnew System::Windows::Forms::TabControl());
			tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Year))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->Addit->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			tabControl1->Controls->Add(this->tabPage1);
			tabControl1->Controls->Add(this->tabPage2);
			tabControl1->Controls->Add(this->tabPage4);
			tabControl1->Controls->Add(this->tabPage3);
			tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			tabControl1->Location = System::Drawing::Point(9, 202);
			tabControl1->Name = L"tabControl1";
			tabControl1->SelectedIndex = 0;
			tabControl1->Size = System::Drawing::Size(866, 206);
			tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(858, 179);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основные данные";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(858, 180);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Житель                           ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Snow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(122, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 19);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Пример";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::DefaultFill);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox1->Location = System::Drawing::Point(70, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"VIP";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->PhoneNumber);
			this->groupBox3->Controls->Add(this->Email);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->BirthYear);
			this->groupBox3->Controls->Add(this->BirthMonth);
			this->groupBox3->Controls->Add(this->BirthDay);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->Registration);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->Country);
			this->groupBox3->Controls->Add(this->Single);
			this->groupBox3->Controls->Add(this->Year);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(172, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(680, 154);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Данные";
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->Location = System::Drawing::Point(126, 32);
			this->PhoneNumber->Mask = L"(999) 00-000-00-00";
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->Size = System::Drawing::Size(110, 20);
			this->PhoneNumber->TabIndex = 26;
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::SystemColors::Window;
			this->Email->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email->Location = System::Drawing::Point(254, 80);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(257, 24);
			this->Email->TabIndex = 6;
			this->Email->Tag = L"NamePer";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(251, 63);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(58, 14);
			this->label26->TabIndex = 25;
			this->label26->Text = L"Эл. Почта";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(470, 16);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 14);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Год";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(390, 15);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 14);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Месяц";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(340, 15);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 14);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Число";
			// 
			// BirthYear
			// 
			this->BirthYear->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BirthYear->Location = System::Drawing::Point(457, 32);
			this->BirthYear->Multiline = true;
			this->BirthYear->Name = L"BirthYear";
			this->BirthYear->Size = System::Drawing::Size(54, 24);
			this->BirthYear->TabIndex = 21;
			// 
			// BirthMonth
			// 
			this->BirthMonth->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BirthMonth->FormattingEnabled = true;
			this->BirthMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Январь", L"Февраль", L"Март", L"Апрель", L"Май",
					L"Июнь", L"Июль", L"Август", L"Сентябрь", L"Октябрь", L"Ноябрь", L"Декабрь"
			});
			this->BirthMonth->Location = System::Drawing::Point(374, 32);
			this->BirthMonth->Name = L"BirthMonth";
			this->BirthMonth->Size = System::Drawing::Size(85, 24);
			this->BirthMonth->TabIndex = 20;
			// 
			// BirthDay
			// 
			this->BirthDay->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BirthDay->Location = System::Drawing::Point(343, 32);
			this->BirthDay->Multiline = true;
			this->BirthDay->Name = L"BirthDay";
			this->BirthDay->Size = System::Drawing::Size(34, 24);
			this->BirthDay->TabIndex = 19;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(251, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 14);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Дата рождиния";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(103, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Прописка";
			// 
			// Registration
			// 
			this->Registration->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light SemiCondensed", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Registration->Location = System::Drawing::Point(106, 120);
			this->Registration->Multiline = true;
			this->Registration->Name = L"Registration";
			this->Registration->Size = System::Drawing::Size(130, 24);
			this->Registration->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(106, 32);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"+";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(103, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Номер телефона";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(103, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Гражданство";
			// 
			// Country
			// 
			this->Country->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light SemiCondensed", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Country->Location = System::Drawing::Point(106, 77);
			this->Country->Multiline = true;
			this->Country->Name = L"Country";
			this->Country->Size = System::Drawing::Size(130, 21);
			this->Country->TabIndex = 6;
			// 
			// Single
			// 
			this->Single->AutoSize = true;
			this->Single->BackColor = System::Drawing::SystemColors::Control;
			this->Single->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Single->Location = System::Drawing::Point(6, 91);
			this->Single->Name = L"Single";
			this->Single->Size = System::Drawing::Size(87, 18);
			this->Single->TabIndex = 11;
			this->Single->Text = L"Один / Одна";
			this->Single->UseVisualStyleBackColor = false;
			// 
			// Year
			// 
			this->Year->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(204)));
			this->Year->Location = System::Drawing::Point(39, 18);
			this->Year->Margin = System::Windows::Forms::Padding(0);
			this->Year->Name = L"Year";
			this->Year->Size = System::Drawing::Size(52, 25);
			this->Year->TabIndex = 1;
			this->Year->Click += gcnew System::EventHandler(this, &MyForm::ClearYear);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->Female);
			this->groupBox4->Controls->Add(this->Male);
			this->groupBox4->Location = System::Drawing::Point(6, 45);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(85, 43);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Пол";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Female->ForeColor = System::Drawing::Color::Violet;
			this->Female->Location = System::Drawing::Point(46, 18);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(39, 21);
			this->Female->TabIndex = 12;
			this->Female->TabStop = true;
			this->Female->Text = L"Ж";
			this->Female->UseVisualStyleBackColor = true;
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Male->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Male->Location = System::Drawing::Point(6, 19);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(38, 21);
			this->Male->TabIndex = 11;
			this->Male->TabStop = true;
			this->Male->Text = L"М";
			this->Male->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Год";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->NamePer);
			this->groupBox2->Controls->Add(this->Surname);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->MiddleName);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(6, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox2->Size = System::Drawing::Size(160, 154);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ФИО";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Имя";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// NamePer
			// 
			this->NamePer->BackColor = System::Drawing::SystemColors::Window;
			this->NamePer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NamePer->Location = System::Drawing::Point(6, 33);
			this->NamePer->Multiline = true;
			this->NamePer->Name = L"NamePer";
			this->NamePer->Size = System::Drawing::Size(147, 24);
			this->NamePer->TabIndex = 0;
			this->NamePer->Tag = L"NamePer";
			// 
			// Surname
			// 
			this->Surname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Surname->Location = System::Drawing::Point(6, 76);
			this->Surname->Multiline = true;
			this->Surname->Name = L"Surname";
			this->Surname->Size = System::Drawing::Size(147, 24);
			this->Surname->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 14);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Фамилия";
			// 
			// MiddleName
			// 
			this->MiddleName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MiddleName->Location = System::Drawing::Point(6, 120);
			this->MiddleName->Multiline = true;
			this->MiddleName->Name = L"MiddleName";
			this->MiddleName->Size = System::Drawing::Size(147, 24);
			this->MiddleName->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 14);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Отчество";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(858, 179);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Документы";
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->VisaDriveOut);
			this->groupBox7->Controls->Add(this->VisaGive);
			this->groupBox7->Controls->Add(this->VisaEnd);
			this->groupBox7->Controls->Add(this->VisaStart);
			this->groupBox7->Controls->Add(this->label31);
			this->groupBox7->Controls->Add(this->VisaType);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Controls->Add(this->VisaPlace);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->VisaNum);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->groupBox9);
			this->groupBox7->Controls->Add(this->label32);
			this->groupBox7->Location = System::Drawing::Point(297, 0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(558, 176);
			this->groupBox7->TabIndex = 21;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Виза";
			this->groupBox7->Enter += gcnew System::EventHandler(this, &MyForm::groupBox7_Enter);
			// 
			// VisaDriveOut
			// 
			this->VisaDriveOut->Cursor = System::Windows::Forms::Cursors::Default;
			this->VisaDriveOut->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->VisaDriveOut->Location = System::Drawing::Point(222, 147);
			this->VisaDriveOut->Mask = L"00";
			this->VisaDriveOut->Name = L"VisaDriveOut";
			this->VisaDriveOut->Size = System::Drawing::Size(29, 23);
			this->VisaDriveOut->TabIndex = 40;
			this->VisaDriveOut->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// VisaGive
			// 
			this->VisaGive->Cursor = System::Windows::Forms::Cursors::Default;
			this->VisaGive->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->VisaGive->Location = System::Drawing::Point(6, 121);
			this->VisaGive->Mask = L"00-00-00";
			this->VisaGive->Name = L"VisaGive";
			this->VisaGive->Size = System::Drawing::Size(86, 23);
			this->VisaGive->TabIndex = 39;
			this->VisaGive->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// VisaEnd
			// 
			this->VisaEnd->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->VisaEnd->Location = System::Drawing::Point(102, 79);
			this->VisaEnd->Mask = L"00-00-00";
			this->VisaEnd->Name = L"VisaEnd";
			this->VisaEnd->Size = System::Drawing::Size(86, 23);
			this->VisaEnd->TabIndex = 38;
			this->VisaEnd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// VisaStart
			// 
			this->VisaStart->Cursor = System::Windows::Forms::Cursors::Default;
			this->VisaStart->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->VisaStart->Location = System::Drawing::Point(6, 79);
			this->VisaStart->Mask = L"00-00-00";
			this->VisaStart->Name = L"VisaStart";
			this->VisaStart->Size = System::Drawing::Size(86, 23);
			this->VisaStart->TabIndex = 23;
			this->VisaStart->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(99, 152);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(117, 14);
			this->label31->TabIndex = 34;
			this->label31->Text = L"Количество выездов";
			// 
			// VisaType
			// 
			this->VisaType->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VisaType->Location = System::Drawing::Point(63, 149);
			this->VisaType->Multiline = true;
			this->VisaType->Name = L"VisaType";
			this->VisaType->Size = System::Drawing::Size(29, 20);
			this->VisaType->TabIndex = 33;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 153);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(54, 14);
			this->label30->TabIndex = 32;
			this->label30->Text = L"Тип визы";
			// 
			// VisaPlace
			// 
			this->VisaPlace->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VisaPlace->Location = System::Drawing::Point(102, 37);
			this->VisaPlace->Multiline = true;
			this->VisaPlace->Name = L"VisaPlace";
			this->VisaPlace->Size = System::Drawing::Size(149, 22);
			this->VisaPlace->TabIndex = 29;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(99, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(110, 14);
			this->label28->TabIndex = 28;
			this->label28->Text = L"Место выдачи визы";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 104);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 14);
			this->label29->TabIndex = 30;
			this->label29->Text = L"Дата выдачи";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(99, 62);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 14);
			this->label27->TabIndex = 26;
			this->label27->Text = L"Дата окончания";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 62);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 14);
			this->label23->TabIndex = 24;
			this->label23->Text = L"Дата начала";
			// 
			// VisaNum
			// 
			this->VisaNum->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VisaNum->Location = System::Drawing::Point(6, 37);
			this->VisaNum->Multiline = true;
			this->VisaNum->Name = L"VisaNum";
			this->VisaNum->Size = System::Drawing::Size(86, 22);
			this->VisaNum->TabIndex = 23;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 20);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(69, 14);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Номер визы";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->Addit);
			this->groupBox9->Location = System::Drawing::Point(268, 10);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(284, 157);
			this->groupBox9->TabIndex = 0;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Дополнительно";
			// 
			// Addit
			// 
			this->Addit->Controls->Add(this->tabPage5);
			this->Addit->Controls->Add(this->tabPage6);
			this->Addit->Location = System::Drawing::Point(6, 19);
			this->Addit->Name = L"Addit";
			this->Addit->SelectedIndex = 0;
			this->Addit->Size = System::Drawing::Size(272, 132);
			this->Addit->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage5->Controls->Add(this->label46);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->ComboBoxIn);
			this->tabPage5->Controls->Add(this->VisaIn);
			this->tabPage5->Location = System::Drawing::Point(4, 23);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(264, 105);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Цель въезда";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(3, 10);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(43, 14);
			this->label46->TabIndex = 44;
			this->label46->Text = L"Кратко";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 35);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(56, 14);
			this->label24->TabIndex = 43;
			this->label24->Text = L"Подробно";
			// 
			// ComboBoxIn
			// 
			this->ComboBoxIn->FormattingEnabled = true;
			this->ComboBoxIn->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Частный визит", L"Туризм", L"Учеба", L"Работа",
					L"Гости", L"Спорт", L"Деловая/Бизнес", L"Культура", L"Служебные обязанности", L"Въездная виза"
			});
			this->ComboBoxIn->Location = System::Drawing::Point(61, 6);
			this->ComboBoxIn->Name = L"ComboBoxIn";
			this->ComboBoxIn->Size = System::Drawing::Size(197, 22);
			this->ComboBoxIn->TabIndex = 42;
			// 
			// VisaIn
			// 
			this->VisaIn->Location = System::Drawing::Point(0, 52);
			this->VisaIn->Name = L"VisaIn";
			this->VisaIn->Size = System::Drawing::Size(264, 53);
			this->VisaIn->TabIndex = 40;
			this->VisaIn->Text = L"";
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage6->Controls->Add(this->label47);
			this->tabPage6->Controls->Add(this->ComboBoxDrive);
			this->tabPage6->Controls->Add(this->label25);
			this->tabPage6->Controls->Add(this->VisaDrive);
			this->tabPage6->ForeColor = System::Drawing::Color::Black;
			this->tabPage6->Location = System::Drawing::Point(4, 23);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(264, 105);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Цель поездки";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(3, 10);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(43, 14);
			this->label47->TabIndex = 48;
			this->label47->Text = L"Кратко";
			// 
			// ComboBoxDrive
			// 
			this->ComboBoxDrive->FormattingEnabled = true;
			this->ComboBoxDrive->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Частный визит", L"Туризм", L"Учеба", L"Работа",
					L"Гости", L"Спорт", L"Деловая/Бизнес", L"Культура", L"Служебные обязанности", L"Въездная виза"
			});
			this->ComboBoxDrive->Location = System::Drawing::Point(61, 6);
			this->ComboBoxDrive->Name = L"ComboBoxDrive";
			this->ComboBoxDrive->Size = System::Drawing::Size(197, 22);
			this->ComboBoxDrive->TabIndex = 47;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 35);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 14);
			this->label25->TabIndex = 46;
			this->label25->Text = L"Подробно";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// VisaDrive
			// 
			this->VisaDrive->Location = System::Drawing::Point(0, 52);
			this->VisaDrive->Name = L"VisaDrive";
			this->VisaDrive->Size = System::Drawing::Size(264, 53);
			this->VisaDrive->TabIndex = 44;
			this->VisaDrive->Text = L"";
			this->VisaDrive->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(92, 82);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(11, 14);
			this->label32->TabIndex = 23;
			this->label32->Text = L"-";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->KPP);
			this->groupBox6->Controls->Add(this->DocumentNum);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->SerialNum);
			this->groupBox6->Controls->Add(this->INN);
			this->groupBox6->Location = System::Drawing::Point(3, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(288, 176);
			this->groupBox6->TabIndex = 20;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Паспорт";
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(6, 99);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(133, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"КПП въезда";
			// 
			// KPP
			// 
			this->KPP->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->KPP->Location = System::Drawing::Point(9, 115);
			this->KPP->Multiline = true;
			this->KPP->Name = L"KPP";
			this->KPP->Size = System::Drawing::Size(130, 22);
			this->KPP->TabIndex = 22;
			// 
			// DocumentNum
			// 
			this->DocumentNum->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DocumentNum->Location = System::Drawing::Point(42, 33);
			this->DocumentNum->Multiline = true;
			this->DocumentNum->Name = L"DocumentNum";
			this->DocumentNum->Size = System::Drawing::Size(97, 22);
			this->DocumentNum->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 14);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Серия и номер паспорта";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(6, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ИНН";
			// 
			// SerialNum
			// 
			this->SerialNum->BackColor = System::Drawing::Color::Gainsboro;
			this->SerialNum->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SerialNum->ForeColor = System::Drawing::Color::Black;
			this->SerialNum->Location = System::Drawing::Point(9, 33);
			this->SerialNum->Multiline = true;
			this->SerialNum->Name = L"SerialNum";
			this->SerialNum->Size = System::Drawing::Size(34, 22);
			this->SerialNum->TabIndex = 19;
			this->SerialNum->Text = L"AA";
			this->SerialNum->Click += gcnew System::EventHandler(this, &MyForm::ChColor);
			// 
			// INN
			// 
			this->INN->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->INN->Location = System::Drawing::Point(9, 74);
			this->INN->Multiline = true;
			this->INN->Name = L"INN";
			this->INN->Size = System::Drawing::Size(130, 22);
			this->INN->TabIndex = 17;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage4->Controls->Add(this->label45);
			this->tabPage4->Controls->Add(this->label44);
			this->tabPage4->Controls->Add(this->label43);
			this->tabPage4->Controls->Add(this->label42);
			this->tabPage4->Controls->Add(this->label41);
			this->tabPage4->Controls->Add(this->label40);
			this->tabPage4->Controls->Add(this->label39);
			this->tabPage4->Controls->Add(this->label38);
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->trackBar1);
			this->tabPage4->Controls->Add(this->label35);
			this->tabPage4->Controls->Add(this->RoomNum);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Location = System::Drawing::Point(4, 23);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(858, 179);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Номер";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(61, 154);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(32, 14);
			this->label45->TabIndex = 36;
			this->label45->Text = L"этаж";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(61, 134);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(32, 14);
			this->label44->TabIndex = 35;
			this->label44->Text = L"этаж";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(61, 116);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(32, 14);
			this->label43->TabIndex = 34;
			this->label43->Text = L"этаж";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(61, 97);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(32, 14);
			this->label42->TabIndex = 33;
			this->label42->Text = L"этаж";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(61, 77);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(32, 14);
			this->label41->TabIndex = 32;
			this->label41->Text = L"этаж";
			this->label41->Click += gcnew System::EventHandler(this, &MyForm::label41_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Bookshelf Symbol 7", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(46, 134);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(13, 14);
			this->label40->TabIndex = 31;
			this->label40->Text = L"2";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Bookshelf Symbol 7", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(46, 116);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 14);
			this->label39->TabIndex = 30;
			this->label39->Text = L"3";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Bookshelf Symbol 7", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(45, 77);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 14);
			this->label38->TabIndex = 29;
			this->label38->Text = L"5";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Bookshelf Symbol 7", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(46, 97);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 14);
			this->label37->TabIndex = 28;
			this->label37->Text = L"4";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Bookshelf Symbol 7", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(46, 154);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 14);
			this->label36->TabIndex = 27;
			this->label36->Text = L"1";
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::SystemColors::Control;
			this->trackBar1->Cursor = System::Windows::Forms::Cursors::Default;
			this->trackBar1->Location = System::Drawing::Point(13, 70);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(45, 103);
			this->trackBar1->TabIndex = 26;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(10, 53);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(35, 14);
			this->label35->TabIndex = 25;
			this->label35->Text = L"Этаж";
			// 
			// RoomNum
			// 
			this->RoomNum->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RoomNum->Location = System::Drawing::Point(10, 24);
			this->RoomNum->Multiline = true;
			this->RoomNum->Name = L"RoomNum";
			this->RoomNum->Size = System::Drawing::Size(49, 22);
			this->RoomNum->TabIndex = 24;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(7, 7);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(88, 14);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Номер комнаты";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Location = System::Drawing::Point(4, 23);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(858, 179);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"Маршрут следования (бета)";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(tabControl1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1140, 415);
			this->panel1->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->maskedTextBox1);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->dateTimePicker3);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->dateTimePicker4);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->dateTimePicker2);
			this->groupBox8->Controls->Add(this->dateTimePicker1);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Location = System::Drawing::Point(485, 3);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(390, 195);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Журнал регистрации";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(9, 167);
			this->maskedTextBox1->Mask = L"90:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox1->TabIndex = 27;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(157, 62);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 15);
			this->label12->TabIndex = 11;
			this->label12->Text = L"по";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(184, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(161, 36);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 15);
			this->label13->TabIndex = 10;
			this->label13->Text = L"c";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(157, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 15);
			this->label14->TabIndex = 9;
			this->label14->Text = L"по";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(184, 127);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker3->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(161, 104);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 15);
			this->label15->TabIndex = 7;
			this->label15->Text = L"c";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(184, 101);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Green;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(6, 106);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(145, 14);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Дата выезда из гостиницы";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(184, 59);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(184, 33);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 14);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Дата въезда в гостиницу ";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->listBox1);
			this->panel3->Location = System::Drawing::Point(885, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 403);
			this->panel3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 15);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Жители";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"Коровина Ксения Александровна", L"Алексеева Софья Арсентьевна",
					L"Борисова Маргарита Мироновна", L"Муравьева Александра Глебовна", L"Волков Сергей Денисович", L"Орлов Макар Романович", L"Федоров Ярослав Алексеевич",
					L"Карпов Артём Павлович", L"Васильев Ярослав Сергеевич", L"Петровская Екатерина Константиновна", L"Михайлов Артём Михайлович",
					L"Попова Кристина Матвеевна", L"Сорокин Ярослав Андреевич", L"Полякова Алина Антоновна", L"Дорохов Александр Никитич", L"Кравцова Мария Михайловна",
					L"Лебедев Даниил Романович", L"Лебедев Михаил Максимович", L"Кондратов Тимофей Маркович", L"Никольская Диана Михайловна", L"Дмитриева София Львовна",
					L"Киреев Иван Степанович", L"Сальников Демид Тимурович", L"Бирюков Александр Германович", L"Тарасова Милана Фёдоровна", L"Орехова Полина Фёдоровна",
					L"Лавров Никита Антонович", L"Лосева Василиса Михайловна", L"Богданов Никита Павлович", L"Корнеева Ксения Кирилловна"
			});
			this->listBox1->Location = System::Drawing::Point(3, 18);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(248, 382);
			this->listBox1->TabIndex = 1;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->treeView1);
			this->groupBox5->Controls->Add(this->monthCalendar1);
			this->groupBox5->Controls->Add(this->tableLayoutPanel1);
			this->groupBox5->Location = System::Drawing::Point(3, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(476, 195);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Управление";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::Window;
			this->treeView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->HideSelection = false;
			this->treeView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->treeView1->Location = System::Drawing::Point(236, 25);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Узел3";
			treeNode1->Text = L"1 номер";
			treeNode2->Name = L"Узел4";
			treeNode2->Text = L"2 номер";
			treeNode3->Name = L"Узел5";
			treeNode3->Text = L"3 номер";
			treeNode4->Name = L"Узел11";
			treeNode4->Text = L"4 номер";
			treeNode5->Name = L"Узел12";
			treeNode5->Text = L"5 номер";
			treeNode6->Name = L"Узел13";
			treeNode6->Text = L"5 номер";
			treeNode7->Name = L"Узел14";
			treeNode7->Text = L"6 номер";
			treeNode8->Name = L"Узел15";
			treeNode8->Text = L"7 номер";
			treeNode9->Name = L"Узел16";
			treeNode9->Text = L"8 номер";
			treeNode10->Name = L"Узел0";
			treeNode10->Text = L"1 этаж";
			treeNode11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			treeNode11->ForeColor = System::Drawing::Color::Black;
			treeNode11->Name = L"Люкс";
			treeNode11->Text = L"Люкс";
			treeNode12->Name = L"Узел7";
			treeNode12->Text = L"1 номер";
			treeNode13->Name = L"Узел8";
			treeNode13->Text = L"2 номер";
			treeNode14->Name = L"Узел6";
			treeNode14->Text = L"2 этаж";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode10, treeNode14 });
			this->treeView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->treeView1->ShowNodeToolTips = true;
			this->treeView1->Size = System::Drawing::Size(234, 123);
			this->treeView1->TabIndex = 2;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->monthCalendar1->Location = System::Drawing::Point(6, 25);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button6, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(232, 152);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(245, 38);
			this->tableLayoutPanel1->TabIndex = 37;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(125, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ClearAll);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->Location = System::Drawing::Point(3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 32);
			this->button6->TabIndex = 14;
			this->button6->Text = L"< Вернуть";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 415);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Your Hotel - Система учета жителей отеля (v2.1)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Year))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->Addit->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void ClearAll(System::Object^ sender, System::EventArgs^ e) {
		NamePer->Text = "";
		Surname->Text = "";
		MiddleName->Text = "";
		Country->Text = "";
		INN->Text = "";
		DocumentNum->Text = "";
		Year->Text = "";
	}
	private: System::Void ClearYear(System::Object^ sender, System::EventArgs^ e) {
		Year->Text = "";
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ChColor(System::Object^ sender, System::EventArgs^ e) {
		SerialNum->Text = "";
		//SerialNum->BackColor
	}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DefaultFill(System::Object^ sender, System::EventArgs^ e) {
	// Main

		NamePer->Text = "Станислав";
		Surname->Text = "Кракаш";
		MiddleName->Text = "Xxxxxxxxx";
		Year->Text = "16";
		//Single->Checked->;

		PhoneNumber->Text = "9981231212";
		Country->Text = "Узбекистан";
		Registration->Text = "Узбекистан";
		Email->Text = "karakashstas@gmail.com";
		BirthDay->Text = "14";
		BirthMonth->Text = "Сентябрь";
		BirthYear->Text = "2005";
	// Documents
		DocumentNum->Text = "1234567890";
		INN->Text = "3589105";
		KPP->Text = "9731752";
		VisaNum->Text = "123456789";
		VisaPlace->Text = "Россия";

		VisaStart->Text = "040521";
		VisaEnd->Text = "200822";
		VisaGive->Text = "030621";
		//VisaOut->Text = "";

		VisaType->Text = "C";
		VisaDriveOut->Text = "03";

		VisaIn->Text = "Посетить страну";
		ComboBoxIn->Text = "Учеба";

		VisaDrive->Text = "Обучение в институте";
		ComboBoxDrive->Text = "Учеба";

		//Room
		RoomNum->Text = "23";
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox7_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
