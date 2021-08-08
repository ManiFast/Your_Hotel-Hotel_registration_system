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
	private: System::Windows::Forms::Panel^ panel2;

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
	private: System::Windows::Forms::TextBox^ PhoneNumber;

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
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox4;

private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;























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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->PhoneNumber = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->DocumentNum = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SerialNum = (gcnew System::Windows::Forms::TextBox());
			this->INN = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Registration = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
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
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(858, 180);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Житель                ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
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
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->Registration);
			this->groupBox3->Controls->Add(this->PhoneNumber);
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
			this->PhoneNumber->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PhoneNumber->Location = System::Drawing::Point(119, 32);
			this->PhoneNumber->Multiline = true;
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->Size = System::Drawing::Size(117, 21);
			this->PhoneNumber->TabIndex = 15;
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
			this->textBox5->Size = System::Drawing::Size(21, 21);
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
			this->groupBox7->Controls->Add(this->textBox13);
			this->groupBox7->Controls->Add(this->label33);
			this->groupBox7->Controls->Add(this->textBox12);
			this->groupBox7->Controls->Add(this->label31);
			this->groupBox7->Controls->Add(this->textBox11);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Controls->Add(this->textBox10);
			this->groupBox7->Controls->Add(this->textBox9);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->textBox8);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Controls->Add(this->textBox6);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->textBox4);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->groupBox9);
			this->groupBox7->Controls->Add(this->label32);
			this->groupBox7->Location = System::Drawing::Point(297, 3);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(558, 173);
			this->groupBox7->TabIndex = 21;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Виза";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->DocumentNum);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->SerialNum);
			this->groupBox6->Controls->Add(this->INN);
			this->groupBox6->Location = System::Drawing::Point(3, 3);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(288, 173);
			this->groupBox6->TabIndex = 20;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Паспорт";
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
			this->tabPage4->Location = System::Drawing::Point(4, 23);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(858, 179);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Номер";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Location = System::Drawing::Point(4, 23);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(696, 206);
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
			this->groupBox5->Controls->Add(this->panel2);
			this->groupBox5->Controls->Add(this->treeView1);
			this->groupBox5->Controls->Add(this->monthCalendar1);
			this->groupBox5->Location = System::Drawing::Point(3, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(476, 195);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Управление";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(236, 149);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(234, 38);
			this->panel2->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ClearAll);
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
			this->button2->Location = System::Drawing::Point(148, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = false;
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
			this->treeView1->Size = System::Drawing::Size(234, 118);
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
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label12);
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
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 14);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Дата въезда в гостиницу";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(184, 33);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(184, 59);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 3;
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
			this->label16->Location = System::Drawing::Point(5, 104);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(145, 14);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Дата выезда из гостиницы";
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
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(251, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 14);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Дата рождиния";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(343, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(34, 24);
			this->textBox1->TabIndex = 19;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Январь", L"Февраль", L"Март", L"Апрель", L"Май",
					L"Июнь", L"Июль", L"Август", L"Сентябрь", L"Октябрь", L"Ноябрь", L"Декабрь"
			});
			this->comboBox1->Location = System::Drawing::Point(374, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(85, 24);
			this->comboBox1->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(457, 32);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(54, 24);
			this->textBox2->TabIndex = 21;
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
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(390, 15);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 14);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Месяц";
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
			// label21
			// 
			this->label21->Location = System::Drawing::Point(6, 99);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(133, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"КПП въезда";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(9, 115);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 22);
			this->textBox3->TabIndex = 22;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->richTextBox2);
			this->groupBox9->Controls->Add(this->richTextBox1);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Controls->Add(this->label24);
			this->groupBox9->Location = System::Drawing::Point(268, 19);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(284, 148);
			this->groupBox9->TabIndex = 0;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Дополнительно";
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
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(6, 37);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 22);
			this->textBox4->TabIndex = 23;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(6, 79);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 22);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"00-00-00";
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
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 20);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(72, 14);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Цель въезда";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 85);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(75, 14);
			this->label25->TabIndex = 3;
			this->label25->Text = L"Цель поездки";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 37);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(301, 45);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(6, 102);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(301, 40);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
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
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(254, 80);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(257, 24);
			this->textBox7->TabIndex = 6;
			this->textBox7->Tag = L"NamePer";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(102, 79);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 22);
			this->textBox8->TabIndex = 27;
			this->textBox8->Text = L"00-00-00";
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
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(102, 37);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(149, 22);
			this->textBox9->TabIndex = 29;
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
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(6, 121);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(86, 22);
			this->textBox10->TabIndex = 31;
			this->textBox10->Text = L"00-00-00";
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
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(63, 149);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(29, 20);
			this->textBox11->TabIndex = 33;
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
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(222, 149);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(29, 20);
			this->textBox12->TabIndex = 35;
			this->textBox12->Text = L"01";
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
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(92, 82);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(11, 14);
			this->label32->TabIndex = 23;
			this->label32->Text = L"-";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(102, 121);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(149, 22);
			this->textBox13->TabIndex = 37;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(99, 104);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(73, 14);
			this->label33->TabIndex = 36;
			this->label33->Text = L"Цель выезда";
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
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
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
};
}
