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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;


	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel3;
















	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			System::Windows::Forms::TabControl^ tabControl1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel3->SuspendLayout();
			tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(tabControl1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1142, 480);
			this->panel1->TabIndex = 0;
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
			this->listBox1->Size = System::Drawing::Size(248, 354);
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
			this->panel2->Location = System::Drawing::Point(236, 128);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(234, 59);
			this->panel2->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(148, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// treeView1
			// 
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
			this->treeView1->Size = System::Drawing::Size(234, 97);
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
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(689, 193);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Житель     ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox1->Location = System::Drawing::Point(59, 0);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"VIP";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(172, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(483, 154);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Данные";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 91);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(87, 18);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Один / Одна";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(34, 18);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(46, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Controls->Add(this->radioButton4);
			this->groupBox4->Location = System::Drawing::Point(6, 45);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(85, 43);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Пол";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::Color::Violet;
			this->radioButton3->Location = System::Drawing::Point(46, 18);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(39, 21);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ж";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->radioButton4->Location = System::Drawing::Point(6, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(38, 21);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"М";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 14);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Год";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
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
			this->label1->Location = System::Drawing::Point(3, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Имя";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(6, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 24);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(6, 76);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 24);
			this->textBox2->TabIndex = 2;
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
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(6, 119);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 24);
			this->textBox3->TabIndex = 4;
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
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light SemiCondensed", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(6, 127);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 21);
			this->textBox4->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(3, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Гражданство";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(103, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Номер телефона";
			// 
			// textBox5
			// 
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
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(119, 32);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(117, 21);
			this->textBox6->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(103, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ИНН";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(106, 80);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 21);
			this->textBox7->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(103, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 14);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Номер паспорта";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(106, 128);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(130, 21);
			this->textBox8->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->listBox1);
			this->panel3->Location = System::Drawing::Point(885, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(254, 391);
			this->panel3->TabIndex = 6;
			// 
			// tabControl1
			// 
			tabControl1->Controls->Add(this->tabPage1);
			tabControl1->Controls->Add(this->tabPage2);
			tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			tabControl1->Location = System::Drawing::Point(9, 202);
			tabControl1->Name = L"tabControl1";
			tabControl1->SelectedIndex = 0;
			tabControl1->Size = System::Drawing::Size(853, 243);
			tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(845, 216);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основные данные";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(845, 217);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 504);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Your Hotel - Система учета жителей отеля (v1)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
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
};
}
