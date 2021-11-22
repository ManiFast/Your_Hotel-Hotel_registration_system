#pragma once
#include <iostream>
#include "Module.h"
#include <string>
#include <typeinfo>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace msclr::interop;

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
	private: System::Windows::Forms::Panel^ Panel;
	protected:



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
	private: System::Windows::Forms::CheckBox^ vipbox;


<<<<<<< Updated upstream
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel2;
=======

	private: System::Windows::Forms::Button^ Save;


>>>>>>> Stashed changes

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
<<<<<<< Updated upstream
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
=======
	private: System::Windows::Forms::TreeView^ TreeView;

	private: System::Windows::Forms::CheckBox^ Single;

>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
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
>>>>>>> Stashed changes



	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ VisaNum;





	private: System::Windows::Forms::TextBox^ Email;

<<<<<<< Updated upstream
=======
	private: System::Windows::Forms::Label^ label26;
>>>>>>> Stashed changes






	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ VisaPlace;

<<<<<<< Updated upstream
=======
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ PhoneCode;
	private: System::Windows::Forms::ListBox^ ListPeople;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ StatusLabel;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ button2;


>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
=======
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->vipbox = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Country = (gcnew System::Windows::Forms::TextBox());
			this->Single = (gcnew System::Windows::Forms::CheckBox());
			this->Year = (gcnew System::Windows::Forms::NumericUpDown());
>>>>>>> Stashed changes
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PhoneCode = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
<<<<<<< Updated upstream
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
=======
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
			this->Panel = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->StatusLabel = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Save = (gcnew System::Windows::Forms::Button());
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
			this->ListPeople = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->TreeView = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
>>>>>>> Stashed changes
			tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
<<<<<<< Updated upstream
=======
			this->tabPage2->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->Addit->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->Panel->SuspendLayout();
			this->groupBox8->SuspendLayout();
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			this->groupBox1->Controls->Add(this->checkBox1);
=======
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->vipbox);
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			// checkBox1
=======
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
			// vipbox
>>>>>>> Stashed changes
			// 
			this->vipbox->AutoSize = true;
			this->vipbox->BackColor = System::Drawing::SystemColors::ControlDark;
			this->vipbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
<<<<<<< Updated upstream
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
=======
			this->vipbox->ForeColor = System::Drawing::Color::Yellow;
			this->vipbox->Location = System::Drawing::Point(70, 2);
			this->vipbox->Name = L"vipbox";
			this->vipbox->Size = System::Drawing::Size(46, 17);
			this->vipbox->TabIndex = 9;
			this->vipbox->Text = L"VIP";
			this->vipbox->UseVisualStyleBackColor = false;
			this->vipbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button2);
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
>>>>>>> Stashed changes
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->PhoneCode);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(172, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(483, 154);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Данные";
			// 
<<<<<<< Updated upstream
			// checkBox2
=======
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(654, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 20);
			this->button2->TabIndex = 28;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::MorzeDown4);
			// 
			// PhoneNumber
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			this->numericUpDown1->Location = System::Drawing::Point(34, 18);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(46, 20);
			this->numericUpDown1->TabIndex = 9;
=======
			this->Email->BackColor = System::Drawing::SystemColors::Window;
			this->Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
			this->textBox5->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(106, 32);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"+";
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
			// PhoneCode
			// 
			this->PhoneCode->AutoSize = true;
			this->PhoneCode->Location = System::Drawing::Point(197, 15);
			this->PhoneCode->Name = L"PhoneCode";
			this->PhoneCode->Size = System::Drawing::Size(44, 18);
			this->PhoneCode->TabIndex = 27;
			this->PhoneCode->Text = L"998";
			this->PhoneCode->UseVisualStyleBackColor = true;
			this->PhoneCode->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(103, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Номер телефона";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(106, 80);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 21);
			this->textBox7->TabIndex = 17;
=======
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
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(46, 134);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(14, 13);
			this->label40->TabIndex = 31;
			this->label40->Text = L"2";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(46, 116);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(14, 13);
			this->label39->TabIndex = 30;
			this->label39->Text = L"3";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(45, 77);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(14, 13);
			this->label38->TabIndex = 29;
			this->label38->Text = L"5";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(46, 97);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(14, 13);
			this->label37->TabIndex = 28;
			this->label37->Text = L"4";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(46, 154);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(14, 13);
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
			// Panel
			// 
			this->Panel->BackColor = System::Drawing::Color::Transparent;
			this->Panel->Controls->Add(this->groupBox8);
			this->Panel->Controls->Add(tabControl1);
			this->Panel->Controls->Add(this->panel3);
			this->Panel->Controls->Add(this->groupBox5);
			this->Panel->Location = System::Drawing::Point(0, 0);
			this->Panel->Name = L"Panel";
			this->Panel->Size = System::Drawing::Size(1140, 415);
			this->Panel->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->StatusLabel);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->maskedTextBox2);
			this->groupBox8->Controls->Add(this->maskedTextBox1);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->Save);
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
			// StatusLabel
			// 
			this->StatusLabel->AutoSize = true;
			this->StatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StatusLabel->ForeColor = System::Drawing::Color::SeaGreen;
			this->StatusLabel->Location = System::Drawing::Point(48, 165);
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Size = System::Drawing::Size(35, 15);
			this->StatusLabel->TabIndex = 30;
			this->StatusLabel->Text = L"good";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(6, 165);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(44, 15);
			this->label33->TabIndex = 29;
			this->label33->Text = L"Status:";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(116, 125);
			this->maskedTextBox2->Mask = L"90:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox2->TabIndex = 28;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(116, 55);
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
			// Save
			// 
			this->Save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Save->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Save->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Save->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save->Location = System::Drawing::Point(184, 155);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(200, 32);
			this->Save->TabIndex = 1;
			this->Save->Text = L"Сохранить";
			this->Save->UseVisualStyleBackColor = false;
			this->Save->Click += gcnew System::EventHandler(this, &MyForm::BSave);
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
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
			this->textBox8->Location = System::Drawing::Point(106, 128);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(130, 21);
			this->textBox8->TabIndex = 19;
=======
			this->label11->Location = System::Drawing::Point(6, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(144, 14);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Дата въезда в гостиницу  ";
>>>>>>> Stashed changes
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->ListPeople);
			this->panel3->Location = System::Drawing::Point(885, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(254, 391);
			this->panel3->TabIndex = 6;
			// 
<<<<<<< Updated upstream
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
=======
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
			// ListPeople
			// 
			this->ListPeople->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ListPeople->ItemHeight = 14;
			this->ListPeople->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"Коровина Ксения Александровна", L"Алексеева Софья Арсентьевна",
					L"Борисова Маргарита Мироновна", L"Муравьева Александра Глебовна", L"Волков Сергей Денисович", L"Орлов Макар Романович", L"Федоров Ярослав Алексеевич",
					L"Карпов Артём Павлович", L"Васильев Ярослав Сергеевич", L"Петровская Екатерина Константиновна", L"Михайлов Артём Михайлович",
					L"Попова Кристина Матвеевна", L"Сорокин Ярослав Андреевич", L"Полякова Алина Антоновна", L"Дорохов Александр Никитич", L"Кравцова Мария Михайловна",
					L"Лебедев Даниил Романович", L"Лебедев Михаил Максимович", L"Кондратов Тимофей Маркович", L"Никольская Диана Михайловна", L"Дмитриева София Львовна",
					L"Киреев Иван Степанович", L"Сальников Демид Тимурович", L"Бирюков Александр Германович", L"Тарасова Милана Фёдоровна", L"Орехова Полина Фёдоровна",
					L"Лавров Никита Антонович", L"Лосева Василиса Михайловна", L"Богданов Никита Павлович", L"Корнеева Ксения Кирилловнаaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
					L"aaaaaaaaaaaaaaaa"
			});
			this->ListPeople->Location = System::Drawing::Point(3, 18);
			this->ListPeople->Name = L"ListPeople";
			this->ListPeople->Size = System::Drawing::Size(248, 382);
			this->ListPeople->TabIndex = 1;
			this->ListPeople->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ListPeople_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Controls->Add(this->TreeView);
			this->groupBox5->Controls->Add(this->monthCalendar1);
			this->groupBox5->Controls->Add(this->tableLayoutPanel1);
			this->groupBox5->Location = System::Drawing::Point(3, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(476, 195);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Управление                                  ";
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox5_Enter);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(125, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 20);
			this->button5->TabIndex = 29;
			this->button5->Text = L"B";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ToBlack);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(75, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 20);
			this->button4->TabIndex = 28;
			this->button4->Text = L"W";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// TreeView
			// 
			this->TreeView->BackColor = System::Drawing::SystemColors::Window;
			this->TreeView->Cursor = System::Windows::Forms::Cursors::Default;
			this->TreeView->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TreeView->ForeColor = System::Drawing::SystemColors::WindowText;
			this->TreeView->HideSelection = false;
			this->TreeView->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->TreeView->Location = System::Drawing::Point(236, 25);
			this->TreeView->Name = L"TreeView";
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
			this->TreeView->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode10, treeNode14 });
			this->TreeView->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TreeView->ShowNodeToolTips = true;
			this->TreeView->Size = System::Drawing::Size(234, 123);
			this->TreeView->TabIndex = 2;
			this->TreeView->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
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
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(125, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ClearAll);
>>>>>>> Stashed changes
			// 
			// tabPage2
			// 
<<<<<<< Updated upstream
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(845, 217);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
=======
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 32);
			this->button6->TabIndex = 14;
			this->button6->Text = L"< Вернуть";
			this->button6->UseVisualStyleBackColor = false;
>>>>>>> Stashed changes
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< Updated upstream
			this->ClientSize = System::Drawing::Size(1145, 504);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
=======
			this->ClientSize = System::Drawing::Size(1141, 415);
			this->Controls->Add(this->Panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
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
			this->Panel->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
>>>>>>> Stashed changes
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") // hide console window


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//extern vector<string> inform;
	}
				 //==========================================
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
<<<<<<< Updated upstream
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
=======
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void ClearAll(System::Object^ sender, System::EventArgs^ e) {
		// Main

		NamePer->Text = "";
		Surname->Text = "";
		MiddleName->Text = "";
		Year->Text = "";
		//Single->Checked->;

		PhoneNumber->Text = "";
		Country->Text = "";
		Registration->Text = "";
		Email->Text = "";
		BirthDay->Text = "";
		BirthMonth->Text = "";
		BirthYear->Text = "";
		// Documents
		DocumentNum->Text = "";
		INN->Text = "";
		KPP->Text = "";
		VisaNum->Text = "";
		VisaPlace->Text = "";

		VisaStart->Text = "";
		VisaEnd->Text = "";
		VisaGive->Text = "";
		//VisaOut->Text = "";

		VisaType->Text = "";
		VisaDriveOut->Text = "";

		VisaIn->Text = "Посетить ";
		ComboBoxIn->Text = "";

		VisaDrive->Text = "Обучение в ";
		ComboBoxDrive->Text = "";

		//Room
		RoomNum->Text = "";
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

		PhoneNumber->Text = "998121234567";
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

	private: System::Void BSave(System::Object^ sender, System::EventArgs^ e) {
		//Beep(400, 100);

		//vector<String^> NamePerStr(4);

		//inform[0] = System::Convert::ToString(NamePer->Text);

		//string NamePerStr = System::Convert::ToString(NamePer->Text);
		//string NamePerStr = "SSS";
		//string NamePerStr = "SSS";
		//String^ NamePerStr = System::Convert::ToString(NamePer->Text);
		//string NamePerStr = System::Convert::ToString(aaa);

		//
		String^ NamePerSysStr = System::Convert::ToString(NamePer->Text);

		std::wstring NamePerStr = marshal_as<std::wstring>(NamePerSysStr);

		sum();

		bool vipboxCheck = 0;

		if (vipbox->Checked == true)
			vipboxCheck = 1;

		SaveToFile(vipboxCheck, NamePerSysStr);

		ListPeople->Text = "Stas";

	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (PhoneCode->Checked == true)
		{
			PhoneNumber->Text = "998";
		}
	}
	private: System::Void ListPeople_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ToBlack(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MorzeDown(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	}
	private: System::Void MorzeDown4(System::Object^ sender, System::EventArgs^ e) {
		giveSound();
	}
	};
}
>>>>>>> Stashed changes
