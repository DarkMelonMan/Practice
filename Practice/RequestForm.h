#pragma once
#define BASE L"base.txt"
#include "Util.h"

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для RequestForm
	/// </summary>
	public ref class RequestForm : public System::Windows::Forms::Form
	{
	public:
		RequestForm(void)
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
		~RequestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlaneType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalPoint;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Days;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartureTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TicketCost;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ IDCheckBox;
	private: System::Windows::Forms::CheckBox^ PlaneTypeCheckBox;
	private: System::Windows::Forms::CheckBox^ ArrivalPointCheckBox;
	private: System::Windows::Forms::CheckBox^ DepTimeCheckBox;
	private: System::Windows::Forms::CheckBox^ ArrTimeCheckBox;

	private: System::Windows::Forms::CheckBox^ TicketCostCheckBox;

	private: System::Windows::Forms::Label^ MinIDLabel;
	private: System::Windows::Forms::Label^ MaxIDLabel;
	private: System::Windows::Forms::Label^ PlaneTypeLabel;
	private: System::Windows::Forms::Label^ ArrivalPointLabel;
	private: System::Windows::Forms::Label^ MinDepTimeLabel;
	private: System::Windows::Forms::Label^ MaxDepTimeLabel;
	private: System::Windows::Forms::Label^ MinArrTimeLabel;
	private: System::Windows::Forms::Label^ MaxArrTimeLabel;
	private: System::Windows::Forms::Label^ MinTicketCostLabel;
	private: System::Windows::Forms::Label^ MaxTicketCostLabel;

	private: System::Windows::Forms::Button^ CloseButton;

	private: System::Windows::Forms::TextBox^ Info;

	private: System::Windows::Forms::ComboBox^ PlaneTypeComboBox;

	private: System::Windows::Forms::CheckBox^ DaysCheckBox;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;

	private: System::Windows::Forms::Label^ DaysLabel;

	private: System::Windows::Forms::ComboBox^ ArrivalPointComboBox;

	private: System::Windows::Forms::TextBox^ MaxTicketCostTextBox;
	private: System::Windows::Forms::TextBox^ MinTicketCostTextBox;
	private: System::Windows::Forms::TextBox^ MaxArrTimeTextBox;
	private: System::Windows::Forms::TextBox^ MinArrTimeTextBox;
	private: System::Windows::Forms::TextBox^ MaxDepTimeTextBox;
	private: System::Windows::Forms::TextBox^ MinDepTimeTextBox;
	private: System::Windows::Forms::TextBox^ MaxIDTextBox;
	private: System::Windows::Forms::TextBox^ MinIDTextBox;

	array<bool>^ days = gcnew array<bool>(7);


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
			for (int i = 0; i < 7; i++)
				days[i] = false;

			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlaneType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ArrivalPoint = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Days = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartureTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ArrivalTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TicketCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IDCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->PlaneTypeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ArrivalPointCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DepTimeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ArrTimeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->TicketCostCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->MinIDLabel = (gcnew System::Windows::Forms::Label());
			this->MaxIDLabel = (gcnew System::Windows::Forms::Label());
			this->PlaneTypeLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalPointLabel = (gcnew System::Windows::Forms::Label());
			this->MinDepTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MaxDepTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MinArrTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MaxArrTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MinTicketCostLabel = (gcnew System::Windows::Forms::Label());
			this->MaxTicketCostLabel = (gcnew System::Windows::Forms::Label());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::TextBox());
			this->PlaneTypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->DaysCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->DaysLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalPointComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->MaxTicketCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MinTicketCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxArrTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MinArrTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxDepTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MinDepTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MinIDTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ID, this->PlaneType,
					this->ArrivalPoint, this->Days, this->DepartureTime, this->ArrivalTime, this->TicketCost
			});
			this->dataGridView1->Location = System::Drawing::Point(151, 230);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(958, 281);
			this->dataGridView1->TabIndex = 1;
			// 
			// ID
			// 
			this->ID->Frozen = true;
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 45;
			// 
			// PlaneType
			// 
			this->PlaneType->HeaderText = L"Тип самолёта";
			this->PlaneType->MinimumWidth = 6;
			this->PlaneType->Name = L"PlaneType";
			this->PlaneType->ReadOnly = true;
			this->PlaneType->Width = 180;
			// 
			// ArrivalPoint
			// 
			this->ArrivalPoint->HeaderText = L"Город прибытия";
			this->ArrivalPoint->MinimumWidth = 6;
			this->ArrivalPoint->Name = L"ArrivalPoint";
			this->ArrivalPoint->ReadOnly = true;
			this->ArrivalPoint->Width = 180;
			// 
			// Days
			// 
			this->Days->HeaderText = L"Дни недели";
			this->Days->MinimumWidth = 6;
			this->Days->Name = L"Days";
			this->Days->ReadOnly = true;
			this->Days->Width = 125;
			// 
			// DepartureTime
			// 
			this->DepartureTime->HeaderText = L"Время вылета";
			this->DepartureTime->MinimumWidth = 6;
			this->DepartureTime->Name = L"DepartureTime";
			this->DepartureTime->ReadOnly = true;
			this->DepartureTime->Width = 125;
			// 
			// ArrivalTime
			// 
			this->ArrivalTime->HeaderText = L"Время прилёта";
			this->ArrivalTime->MinimumWidth = 6;
			this->ArrivalTime->Name = L"ArrivalTime";
			this->ArrivalTime->ReadOnly = true;
			this->ArrivalTime->Width = 125;
			// 
			// TicketCost
			// 
			this->TicketCost->HeaderText = L"Цена билета";
			this->TicketCost->MinimumWidth = 6;
			this->TicketCost->Name = L"TicketCost";
			this->TicketCost->ReadOnly = true;
			this->TicketCost->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(44, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Универсальный запрос";
			// 
			// IDCheckBox
			// 
			this->IDCheckBox->AutoSize = true;
			this->IDCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->IDCheckBox->Location = System::Drawing::Point(48, 52);
			this->IDCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->IDCheckBox->Name = L"IDCheckBox";
			this->IDCheckBox->Size = System::Drawing::Size(100, 19);
			this->IDCheckBox->TabIndex = 9;
			this->IDCheckBox->Text = L"Искать по ID";
			this->IDCheckBox->UseVisualStyleBackColor = true;
			this->IDCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::IDCheckBox_CheckedChanged);
			// 
			// PlaneTypeCheckBox
			// 
			this->PlaneTypeCheckBox->AutoSize = true;
			this->PlaneTypeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PlaneTypeCheckBox->Location = System::Drawing::Point(151, 52);
			this->PlaneTypeCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->PlaneTypeCheckBox->Name = L"PlaneTypeCheckBox";
			this->PlaneTypeCheckBox->Size = System::Drawing::Size(174, 19);
			this->PlaneTypeCheckBox->TabIndex = 10;
			this->PlaneTypeCheckBox->Text = L"Искать по типу самолёта";
			this->PlaneTypeCheckBox->UseVisualStyleBackColor = true;
			this->PlaneTypeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::PlaneTypeCheckBox_CheckedChanged);
			// 
			// ArrivalPointCheckBox
			// 
			this->ArrivalPointCheckBox->AutoSize = true;
			this->ArrivalPointCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrivalPointCheckBox->Location = System::Drawing::Point(326, 52);
			this->ArrivalPointCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->ArrivalPointCheckBox->Name = L"ArrivalPointCheckBox";
			this->ArrivalPointCheckBox->Size = System::Drawing::Size(187, 19);
			this->ArrivalPointCheckBox->TabIndex = 11;
			this->ArrivalPointCheckBox->Text = L"Искать по городу прибытия";
			this->ArrivalPointCheckBox->UseVisualStyleBackColor = true;
			this->ArrivalPointCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::ArrivalPointCheckBox_CheckedChanged);
			// 
			// DepTimeCheckBox
			// 
			this->DepTimeCheckBox->AutoSize = true;
			this->DepTimeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DepTimeCheckBox->Location = System::Drawing::Point(684, 52);
			this->DepTimeCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->DepTimeCheckBox->Name = L"DepTimeCheckBox";
			this->DepTimeCheckBox->Size = System::Drawing::Size(186, 19);
			this->DepTimeCheckBox->TabIndex = 12;
			this->DepTimeCheckBox->Text = L"Искать по времени вылета";
			this->DepTimeCheckBox->UseVisualStyleBackColor = true;
			this->DepTimeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::DepTimeCheckBox_CheckedChanged);
			// 
			// ArrTimeCheckBox
			// 
			this->ArrTimeCheckBox->AutoSize = true;
			this->ArrTimeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrTimeCheckBox->Location = System::Drawing::Point(884, 52);
			this->ArrTimeCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->ArrTimeCheckBox->Name = L"ArrTimeCheckBox";
			this->ArrTimeCheckBox->Size = System::Drawing::Size(191, 19);
			this->ArrTimeCheckBox->TabIndex = 13;
			this->ArrTimeCheckBox->Text = L"Искать по времени прилёта";
			this->ArrTimeCheckBox->UseVisualStyleBackColor = true;
			this->ArrTimeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::ArrTimeCheckBox_CheckedChanged);
			// 
			// TicketCostCheckBox
			// 
			this->TicketCostCheckBox->AutoSize = true;
			this->TicketCostCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->TicketCostCheckBox->Location = System::Drawing::Point(1079, 52);
			this->TicketCostCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->TicketCostCheckBox->Name = L"TicketCostCheckBox";
			this->TicketCostCheckBox->Size = System::Drawing::Size(161, 19);
			this->TicketCostCheckBox->TabIndex = 14;
			this->TicketCostCheckBox->Text = L"Искать по цене билета";
			this->TicketCostCheckBox->UseVisualStyleBackColor = true;
			this->TicketCostCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::TicketCostCheckBox_CheckedChanged);
			// 
			// MinIDLabel
			// 
			this->MinIDLabel->AutoSize = true;
			this->MinIDLabel->Enabled = false;
			this->MinIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinIDLabel->Location = System::Drawing::Point(48, 99);
			this->MinIDLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MinIDLabel->Name = L"MinIDLabel";
			this->MinIDLabel->Size = System::Drawing::Size(107, 15);
			this->MinIDLabel->TabIndex = 16;
			this->MinIDLabel->Text = L"Минимальный ID";
			// 
			// MaxIDLabel
			// 
			this->MaxIDLabel->AutoSize = true;
			this->MaxIDLabel->Enabled = false;
			this->MaxIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxIDLabel->Location = System::Drawing::Point(48, 159);
			this->MaxIDLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MaxIDLabel->Name = L"MaxIDLabel";
			this->MaxIDLabel->Size = System::Drawing::Size(112, 15);
			this->MaxIDLabel->TabIndex = 17;
			this->MaxIDLabel->Text = L"Максимальный ID";
			// 
			// PlaneTypeLabel
			// 
			this->PlaneTypeLabel->AutoSize = true;
			this->PlaneTypeLabel->Enabled = false;
			this->PlaneTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PlaneTypeLabel->Location = System::Drawing::Point(209, 128);
			this->PlaneTypeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PlaneTypeLabel->Name = L"PlaneTypeLabel";
			this->PlaneTypeLabel->Size = System::Drawing::Size(88, 15);
			this->PlaneTypeLabel->TabIndex = 19;
			this->PlaneTypeLabel->Text = L"Тип самолёта";
			// 
			// ArrivalPointLabel
			// 
			this->ArrivalPointLabel->AutoSize = true;
			this->ArrivalPointLabel->Enabled = false;
			this->ArrivalPointLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrivalPointLabel->Location = System::Drawing::Point(374, 128);
			this->ArrivalPointLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ArrivalPointLabel->Name = L"ArrivalPointLabel";
			this->ArrivalPointLabel->Size = System::Drawing::Size(103, 15);
			this->ArrivalPointLabel->TabIndex = 21;
			this->ArrivalPointLabel->Text = L"Город прибытия";
			// 
			// MinDepTimeLabel
			// 
			this->MinDepTimeLabel->AutoSize = true;
			this->MinDepTimeLabel->Enabled = false;
			this->MinDepTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinDepTimeLabel->Location = System::Drawing::Point(688, 99);
			this->MinDepTimeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MinDepTimeLabel->Name = L"MinDepTimeLabel";
			this->MinDepTimeLabel->Size = System::Drawing::Size(177, 15);
			this->MinDepTimeLabel->TabIndex = 23;
			this->MinDepTimeLabel->Text = L"Минимальное время вылета";
			// 
			// MaxDepTimeLabel
			// 
			this->MaxDepTimeLabel->AutoSize = true;
			this->MaxDepTimeLabel->Enabled = false;
			this->MaxDepTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxDepTimeLabel->Location = System::Drawing::Point(688, 159);
			this->MaxDepTimeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MaxDepTimeLabel->Name = L"MaxDepTimeLabel";
			this->MaxDepTimeLabel->Size = System::Drawing::Size(182, 15);
			this->MaxDepTimeLabel->TabIndex = 24;
			this->MaxDepTimeLabel->Text = L"Максимальное время вылета";
			// 
			// MinArrTimeLabel
			// 
			this->MinArrTimeLabel->AutoSize = true;
			this->MinArrTimeLabel->Enabled = false;
			this->MinArrTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinArrTimeLabel->Location = System::Drawing::Point(887, 99);
			this->MinArrTimeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MinArrTimeLabel->Name = L"MinArrTimeLabel";
			this->MinArrTimeLabel->Size = System::Drawing::Size(182, 15);
			this->MinArrTimeLabel->TabIndex = 27;
			this->MinArrTimeLabel->Text = L"Минимальное время прилёта";
			// 
			// MaxArrTimeLabel
			// 
			this->MaxArrTimeLabel->AutoSize = true;
			this->MaxArrTimeLabel->Enabled = false;
			this->MaxArrTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxArrTimeLabel->Location = System::Drawing::Point(887, 159);
			this->MaxArrTimeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MaxArrTimeLabel->Name = L"MaxArrTimeLabel";
			this->MaxArrTimeLabel->Size = System::Drawing::Size(187, 15);
			this->MaxArrTimeLabel->TabIndex = 28;
			this->MaxArrTimeLabel->Text = L"Максимальное время прилёта";
			// 
			// MinTicketCostLabel
			// 
			this->MinTicketCostLabel->AutoSize = true;
			this->MinTicketCostLabel->Enabled = false;
			this->MinTicketCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinTicketCostLabel->Location = System::Drawing::Point(1087, 99);
			this->MinTicketCostLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MinTicketCostLabel->Name = L"MinTicketCostLabel";
			this->MinTicketCostLabel->Size = System::Drawing::Size(166, 15);
			this->MinTicketCostLabel->TabIndex = 31;
			this->MinTicketCostLabel->Text = L"Минимальная цена билета";
			// 
			// MaxTicketCostLabel
			// 
			this->MaxTicketCostLabel->AutoSize = true;
			this->MaxTicketCostLabel->Enabled = false;
			this->MaxTicketCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxTicketCostLabel->Location = System::Drawing::Point(1077, 159);
			this->MaxTicketCostLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MaxTicketCostLabel->Name = L"MaxTicketCostLabel";
			this->MaxTicketCostLabel->Size = System::Drawing::Size(171, 15);
			this->MaxTicketCostLabel->TabIndex = 32;
			this->MaxTicketCostLabel->Text = L"Максимальная цена билета";
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(560, 545);
			this->CloseButton->Margin = System::Windows::Forms::Padding(2);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(151, 29);
			this->CloseButton->TabIndex = 35;
			this->CloseButton->Text = L"Закончить поиск";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &RequestForm::CloseButton_Click);
			// 
			// Info
			// 
			this->Info->Location = System::Drawing::Point(151, 516);
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			this->Info->Size = System::Drawing::Size(958, 20);
			this->Info->TabIndex = 36;
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Visible = false;
			// 
			// PlaneTypeComboBox
			// 
			this->PlaneTypeComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PlaneTypeComboBox->Enabled = false;
			this->PlaneTypeComboBox->FormattingEnabled = true;
			this->PlaneTypeComboBox->Location = System::Drawing::Point(194, 152);
			this->PlaneTypeComboBox->Margin = System::Windows::Forms::Padding(2);
			this->PlaneTypeComboBox->Name = L"PlaneTypeComboBox";
			this->PlaneTypeComboBox->Size = System::Drawing::Size(111, 21);
			this->PlaneTypeComboBox->TabIndex = 37;
			this->PlaneTypeComboBox->TextChanged += gcnew System::EventHandler(this, &RequestForm::PlaneTypeComboBox_TextChanged);
			// 
			// DaysCheckBox
			// 
			this->DaysCheckBox->AutoSize = true;
			this->DaysCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DaysCheckBox->Location = System::Drawing::Point(517, 52);
			this->DaysCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->DaysCheckBox->Name = L"DaysCheckBox";
			this->DaysCheckBox->Size = System::Drawing::Size(163, 19);
			this->DaysCheckBox->TabIndex = 38;
			this->DaysCheckBox->Text = L"Искать по дням недели";
			this->DaysCheckBox->UseVisualStyleBackColor = true;
			this->DaysCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::DaysCheckBox_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(524, 155);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(40, 17);
			this->checkBox1->TabIndex = 39;
			this->checkBox1->Text = L"Пн";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(565, 155);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(38, 17);
			this->checkBox2->TabIndex = 40;
			this->checkBox2->Text = L"Вт";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(604, 155);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(39, 17);
			this->checkBox3->TabIndex = 41;
			this->checkBox3->Text = L"Ср";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(644, 155);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(39, 17);
			this->checkBox4->TabIndex = 42;
			this->checkBox4->Text = L"Чт";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(542, 177);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(39, 17);
			this->checkBox5->TabIndex = 43;
			this->checkBox5->Text = L"Пт";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(581, 177);
			this->checkBox6->Margin = System::Windows::Forms::Padding(2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(39, 17);
			this->checkBox6->TabIndex = 44;
			this->checkBox6->Text = L"Сб";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(621, 177);
			this->checkBox7->Margin = System::Windows::Forms::Padding(2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(39, 17);
			this->checkBox7->TabIndex = 45;
			this->checkBox7->Text = L"Вс";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::checkBox7_CheckedChanged);
			// 
			// DaysLabel
			// 
			this->DaysLabel->AutoSize = true;
			this->DaysLabel->Enabled = false;
			this->DaysLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DaysLabel->Location = System::Drawing::Point(562, 128);
			this->DaysLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DaysLabel->Name = L"DaysLabel";
			this->DaysLabel->Size = System::Drawing::Size(75, 15);
			this->DaysLabel->TabIndex = 46;
			this->DaysLabel->Text = L"Дни недели";
			// 
			// ArrivalPointComboBox
			// 
			this->ArrivalPointComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ArrivalPointComboBox->Enabled = false;
			this->ArrivalPointComboBox->FormattingEnabled = true;
			this->ArrivalPointComboBox->Location = System::Drawing::Point(347, 152);
			this->ArrivalPointComboBox->Margin = System::Windows::Forms::Padding(2);
			this->ArrivalPointComboBox->Name = L"ArrivalPointComboBox";
			this->ArrivalPointComboBox->Size = System::Drawing::Size(156, 21);
			this->ArrivalPointComboBox->TabIndex = 47;
			this->ArrivalPointComboBox->TextChanged += gcnew System::EventHandler(this, &RequestForm::ArrivalPointComboBox_TextChanged);
			// 
			// MaxTicketCostTextBox
			// 
			this->MaxTicketCostTextBox->Enabled = false;
			this->MaxTicketCostTextBox->Location = System::Drawing::Point(1079, 187);
			this->MaxTicketCostTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MaxTicketCostTextBox->Name = L"MaxTicketCostTextBox";
			this->MaxTicketCostTextBox->Size = System::Drawing::Size(155, 20);
			this->MaxTicketCostTextBox->TabIndex = 34;
			this->MaxTicketCostTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MaxTicketCostTextBox_Validating);
			this->MaxTicketCostTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MaxTicketCostTextBox_Validated);
			// 
			// MinTicketCostTextBox
			// 
			this->MinTicketCostTextBox->Enabled = false;
			this->MinTicketCostTextBox->Location = System::Drawing::Point(1079, 120);
			this->MinTicketCostTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MinTicketCostTextBox->Name = L"MinTicketCostTextBox";
			this->MinTicketCostTextBox->Size = System::Drawing::Size(155, 20);
			this->MinTicketCostTextBox->TabIndex = 33;
			this->MinTicketCostTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MinTicketCostTextBox_Validating);
			this->MinTicketCostTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MinTicketCostTextBox_Validated);
			// 
			// MaxArrTimeTextBox
			// 
			this->MaxArrTimeTextBox->Enabled = false;
			this->MaxArrTimeTextBox->Location = System::Drawing::Point(893, 187);
			this->MaxArrTimeTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MaxArrTimeTextBox->Name = L"MaxArrTimeTextBox";
			this->MaxArrTimeTextBox->Size = System::Drawing::Size(155, 20);
			this->MaxArrTimeTextBox->TabIndex = 30;
			this->MaxArrTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MaxArrTimeTextBox_Validating);
			this->MaxArrTimeTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MaxArrTimeTextBox_Validated);
			// 
			// MinArrTimeTextBox
			// 
			this->MinArrTimeTextBox->Enabled = false;
			this->MinArrTimeTextBox->Location = System::Drawing::Point(893, 120);
			this->MinArrTimeTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MinArrTimeTextBox->Name = L"MinArrTimeTextBox";
			this->MinArrTimeTextBox->Size = System::Drawing::Size(155, 20);
			this->MinArrTimeTextBox->TabIndex = 29;
			this->MinArrTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MinArrTimeTextBox_Validating);
			this->MinArrTimeTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MinArrTimeTextBox_Validated);
			// 
			// MaxDepTimeTextBox
			// 
			this->MaxDepTimeTextBox->Enabled = false;
			this->MaxDepTimeTextBox->Location = System::Drawing::Point(696, 187);
			this->MaxDepTimeTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MaxDepTimeTextBox->Name = L"MaxDepTimeTextBox";
			this->MaxDepTimeTextBox->Size = System::Drawing::Size(155, 20);
			this->MaxDepTimeTextBox->TabIndex = 26;
			this->MaxDepTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MaxDepTimeTextBox_Validating);
			this->MaxDepTimeTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MaxDepTimeTextBox_Validated);
			// 
			// MinDepTimeTextBox
			// 
			this->MinDepTimeTextBox->Enabled = false;
			this->MinDepTimeTextBox->Location = System::Drawing::Point(696, 120);
			this->MinDepTimeTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MinDepTimeTextBox->Name = L"MinDepTimeTextBox";
			this->MinDepTimeTextBox->Size = System::Drawing::Size(155, 20);
			this->MinDepTimeTextBox->TabIndex = 25;
			this->MinDepTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MinDepTimeTextBox_Validating);
			this->MinDepTimeTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MinDepTimeTextBox_Validated);
			// 
			// MaxIDTextBox
			// 
			this->MaxIDTextBox->Enabled = false;
			this->MaxIDTextBox->Location = System::Drawing::Point(48, 187);
			this->MaxIDTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MaxIDTextBox->Name = L"MaxIDTextBox";
			this->MaxIDTextBox->Size = System::Drawing::Size(99, 20);
			this->MaxIDTextBox->TabIndex = 18;
			this->MaxIDTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MaxIDTextBox_Validating);
			this->MaxIDTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MaxIDTextBox_Validated);
			// 
			// MinIDTextBox
			// 
			this->MinIDTextBox->Enabled = false;
			this->MinIDTextBox->Location = System::Drawing::Point(48, 123);
			this->MinIDTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MinIDTextBox->Name = L"MinIDTextBox";
			this->MinIDTextBox->Size = System::Drawing::Size(99, 20);
			this->MinIDTextBox->TabIndex = 15;
			this->MinIDTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &RequestForm::MinIDTextBox_Validating);
			this->MinIDTextBox->Validated += gcnew System::EventHandler(this, &RequestForm::MinIDTextBox_Validated);
			// 
			// RequestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 604);
			this->Controls->Add(this->ArrivalPointComboBox);
			this->Controls->Add(this->DaysLabel);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->DaysCheckBox);
			this->Controls->Add(this->PlaneTypeComboBox);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->MaxTicketCostTextBox);
			this->Controls->Add(this->MinTicketCostTextBox);
			this->Controls->Add(this->MaxTicketCostLabel);
			this->Controls->Add(this->MinTicketCostLabel);
			this->Controls->Add(this->MaxArrTimeTextBox);
			this->Controls->Add(this->MinArrTimeTextBox);
			this->Controls->Add(this->MaxArrTimeLabel);
			this->Controls->Add(this->MinArrTimeLabel);
			this->Controls->Add(this->MaxDepTimeTextBox);
			this->Controls->Add(this->MinDepTimeTextBox);
			this->Controls->Add(this->MaxDepTimeLabel);
			this->Controls->Add(this->MinDepTimeLabel);
			this->Controls->Add(this->ArrivalPointLabel);
			this->Controls->Add(this->PlaneTypeLabel);
			this->Controls->Add(this->MaxIDTextBox);
			this->Controls->Add(this->MaxIDLabel);
			this->Controls->Add(this->MinIDLabel);
			this->Controls->Add(this->MinIDTextBox);
			this->Controls->Add(this->TicketCostCheckBox);
			this->Controls->Add(this->ArrTimeCheckBox);
			this->Controls->Add(this->DepTimeCheckBox);
			this->Controls->Add(this->ArrivalPointCheckBox);
			this->Controls->Add(this->PlaneTypeCheckBox);
			this->Controls->Add(this->IDCheckBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RequestForm";
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Универсальный запрос";
			this->Activated += gcnew System::EventHandler(this, &RequestForm::RequestForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		private: System::Void RequestForm_Activated(System::Object^ sender, System::EventArgs^ e) {
			FileStream^ file = File::Exists(BASE) ? File::OpenRead(BASE) : File::Create(BASE);
			file->Close(); // если файла не существует, создать и закрыть его
			array<String^>^ lines = File::ReadAllLines(BASE);
			array<String^>^ planeTypes = gcnew array<String^>(lines->Length); // все типы самолёта из файла
			array<String^>^ arrivalPoints = gcnew array<String^>(lines->Length); // все города прибытия из файла
			int flag;
			int i = 0, j = 0;
			for each (String ^ str in lines) {
				flag = 1;
				for each (String ^ planeType in planeTypes) {
					if (str->Split(' ')[1] == planeType) {
						flag = 0;
						break;
					}
				}
				if (flag) {
					planeTypes[i] = str->Split(' ')[1];
					i++;
				}
				flag = 1;
				for each (String ^ arrivalPoint in arrivalPoints) {
					if (str->Split(' ')[2] == arrivalPoint) {
						flag = 0;
						break;
					}
				}
				if (flag) {
					arrivalPoints[j] = str->Split(' ')[2];
					j++;
				}
			}
			for each (String ^ planeType in planeTypes) {
				if (planeType != nullptr)
					PlaneTypeComboBox->Items->Add(planeType);
			}
			PlaneTypeComboBox->Items->Add(L"");
			for each (String ^ arrivalPoint in arrivalPoints) {
				if (arrivalPoint != nullptr)
					ArrivalPointComboBox->Items->Add(arrivalPoint);
			}
			ArrivalPointComboBox->Items->Add(L"");
			UpdateData();
		}
		private: System::Void IDCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (IDCheckBox->Checked) { // если флажок с поиском по ID сменил значение
				MinIDLabel->Enabled = true;
				MinIDTextBox->Enabled = true;
				MaxIDLabel->Enabled = true;
				MaxIDTextBox->Enabled = true;
			}
			else {
				MinIDLabel->Enabled = false;
				MinIDTextBox->Enabled = false;
				MaxIDLabel->Enabled = false;
				MaxIDTextBox->Enabled = false;
				MinIDTextBox->Text = "";
				MaxIDTextBox->Text = "";
			}
			UpdateData();
		}
		private: System::Void PlaneTypeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (PlaneTypeCheckBox->Checked) { // если флажок с поиском по типу самолёта сменил значение
				PlaneTypeLabel->Enabled = true;
				PlaneTypeComboBox->Enabled = true;
			}
			else {
				PlaneTypeComboBox->SelectedItem = PlaneTypeComboBox->Items[PlaneTypeComboBox->Items->Count - 1];
				PlaneTypeLabel->Enabled = false;
				PlaneTypeComboBox->Enabled = false;
			}
			UpdateData();
		}
		private: System::Void ArrivalPointCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (ArrivalPointCheckBox->Checked) { // если флажок с поиском по городу прибытия сменил значение
				ArrivalPointLabel->Enabled = true;
				ArrivalPointComboBox->Enabled = true;
			}
			else {
				ArrivalPointComboBox->SelectedItem = ArrivalPointComboBox->Items[ArrivalPointComboBox->Items->Count - 1];
				ArrivalPointLabel->Enabled = false;
				ArrivalPointComboBox->Enabled = false;
			}
			UpdateData();
		}
		private: System::Void DaysCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (DaysCheckBox->Checked) { // если флажок с поиском по дням вылета сменил значение
				DaysLabel->Enabled = true;
				checkBox1->Enabled = true;
				checkBox2->Enabled = true;
				checkBox3->Enabled = true;
				checkBox4->Enabled = true;
				checkBox5->Enabled = true;
				checkBox6->Enabled = true;
				checkBox7->Enabled = true;
			}
			else {
				DaysLabel->Enabled = false;
				checkBox1->Enabled = false;
				checkBox2->Enabled = false;
				checkBox3->Enabled = false;
				checkBox4->Enabled = false;
				checkBox5->Enabled = false;
				checkBox6->Enabled = false;
				checkBox7->Enabled = false;
				checkBox1->Checked = false;
				checkBox2->Checked = false;
				checkBox3->Checked = false;
				checkBox4->Checked = false;
				checkBox5->Checked = false;
				checkBox6->Checked = false;
				checkBox7->Checked = false;
			}
			UpdateData();
		}
		private: System::Void DepTimeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (DepTimeCheckBox->Checked) { // если флажок с поиском по времени вылета сменил значение
				MinDepTimeLabel->Enabled = true;
				MinDepTimeTextBox->Enabled = true;
				MaxDepTimeLabel->Enabled = true;
				MaxDepTimeTextBox->Enabled = true;
			}
			else {
				MinDepTimeLabel->Enabled = false;
				MinDepTimeTextBox->Enabled = false;
				MaxDepTimeLabel->Enabled = false;
				MaxDepTimeTextBox->Enabled = false;
				MinDepTimeTextBox->Text = "";
				MaxDepTimeTextBox->Text = "";
			}
			UpdateData();
		}
		private: System::Void ArrTimeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (ArrTimeCheckBox->Checked) { // если флажок с поиском по времени прибытия сменил значение
				MinArrTimeLabel->Enabled = true;
				MinArrTimeTextBox->Enabled = true;
				MaxArrTimeLabel->Enabled = true;
				MaxArrTimeTextBox->Enabled = true;
			}
			else {
				MinArrTimeLabel->Enabled = false;
				MinArrTimeTextBox->Enabled = false;
				MaxArrTimeLabel->Enabled = false;
				MaxArrTimeTextBox->Enabled = false;
				MinArrTimeTextBox->Text = L"";
				MaxArrTimeTextBox->Text = L"";
			}
			UpdateData();
		}
		private: System::Void TicketCostCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (TicketCostCheckBox->Checked) { // если флажок с поиском по цене билета сменил значение
				MinTicketCostLabel->Enabled = true;
				MinTicketCostTextBox->Enabled = true;
				MaxTicketCostLabel->Enabled = true;
				MaxTicketCostTextBox->Enabled = true;
			}
			else {
				MinTicketCostLabel->Enabled = false;
				MinTicketCostTextBox->Enabled = false;
				MaxTicketCostLabel->Enabled = false;
				MaxTicketCostTextBox->Enabled = false;
				MinTicketCostTextBox->Text = L"";
				MaxTicketCostTextBox->Text = L"";
			}
			UpdateData();
		}
		private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
			Close(); // закрыть форму
		}
		private: Void UpdateData() { // обновить данные из таблицы
			while (!dataGridView1->Rows[0]->IsNewRow) {
				dataGridView1->Rows->RemoveAt(0);
				dataGridView1->Refresh();
			}
			FileStream^ file = File::Exists(BASE) ? File::OpenRead(BASE) : File::Create(BASE);
			file->Close();
			array<String^>^ lines = File::ReadAllLines(BASE);
			for each (String ^ str in lines)
			{
				if (CheckLine(str)) {
					DataGridViewRow^ row = gcnew DataGridViewRow();
					row->CreateCells(dataGridView1);
					for (int i = 0; i < str->Split(L' ')->Length; i++)
						row->Cells[i]->Value = str->Split(L' ')[i];
					dataGridView1->Rows->Add(row);
				}
			}
			if (dataGridView1->Rows[0]->IsNewRow) {
				this->Info->Visible = true;
				this->Info->Text = "По запросу ничего не найдено";
			}
			else Info->Visible = false;
		}

	private: bool CheckLine(String^ line) { // проверка строки файла на соответствие критериям поиска
		int minID, maxID; 
		Int32::TryParse(MinIDTextBox->Text, minID);
		Int32::TryParse(MaxIDTextBox->Text, maxID);
		String^ planeType = PlaneTypeComboBox->Text;
		String^ arrivalPoint = ArrivalPointComboBox->Text;
		int minDepTime = GetTimeInMinutes(MinDepTimeTextBox->Text);
		int maxDepTime = GetTimeInMinutes(MaxDepTimeTextBox->Text);
		int minArrTime = GetTimeInMinutes(MinArrTimeTextBox->Text);
		int maxArrTime = GetTimeInMinutes(MaxArrTimeTextBox->Text);
		double minTicketCost, maxTicketCost; 
		Double::TryParse(MinTicketCostTextBox->Text, minTicketCost);
		Double::TryParse(MaxTicketCostTextBox->Text, maxTicketCost);

		int lineID = Int32::Parse(line->Split(' ')[0]);
		String^ linePlaneType = line->Split(' ')[1];
		String^ lineArrivalPoint = line->Split(' ')[2];
		array<bool>^ lineDays = gcnew array<bool>(7);
		for (int i = 0; i < 7; i++)
			lineDays[i] = false;
		for each (String ^ day in line->Split(' ')[3]->Split(','))
			lineDays[Int32::Parse(day) - 1] = true;
		int lineDepTime = GetTimeInMinutes(line->Split(' ')[4]);
		int lineArrTime = GetTimeInMinutes(line->Split(' ')[5]);
		double lineTicketCost = Double::Parse(line->Split(' ')[6]);

		if (minID != 0 && maxID != 0 && (lineID > maxID || lineID < minID))
			return false;
		if (planeType != "" && linePlaneType != planeType)
			return false;
		if (arrivalPoint != "" && lineArrivalPoint != arrivalPoint)
			return false;
		if (minDepTime != 0 && maxDepTime != 0) {
			if (minDepTime > maxDepTime) {
				if (lineDepTime < minDepTime && lineDepTime > maxDepTime)
					return false;
			}
			else if (minDepTime < maxDepTime && (lineDepTime < minDepTime || lineDepTime > maxDepTime))
				return false;
			else if (minDepTime == maxDepTime && minDepTime != lineDepTime)
				return false;
		}
		for (int i = 0; i < 7; i++) {
			bool flag1 = days[i];
			if (days[i] && !lineDays[i]) {
				return false;
			}
		}
		if (minArrTime != 0 && maxArrTime != 0) {
			if (minArrTime > maxArrTime) {
				if (lineArrTime < minArrTime && lineArrTime > maxArrTime)
					return false;
			}
			else if (minArrTime < maxArrTime && (lineArrTime < minArrTime || lineArrTime > maxArrTime))
				return false;
			else if (minArrTime == maxArrTime && minArrTime != lineArrTime)
				return false;
		}
		if (minTicketCost != 0 && maxTicketCost != 0 && (lineTicketCost < minTicketCost || lineTicketCost > maxTicketCost))
			return false;
		return true;
	}

		
		private: System::Void MinIDTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidID(MinIDTextBox->Text)) { // проверка ввода минимального ID
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Введите число входящее в диапазон ID номеров таблицы";
			}
			else if (!ValidID(MinIDTextBox->Text, MaxIDTextBox->Text)) {
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Минимальный ID не может быть больше максимального";
			}
		}
		private: System::Void MaxIDTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidID(MaxIDTextBox->Text)) { // проверка ввода максимального ID
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Введите число входящее в диапазон ID номеров таблицы";
			}
			else if (!ValidID(MinIDTextBox->Text, MaxIDTextBox->Text)) {
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Максимальный ID не может быть меньше минимального";
			}
		}
	
		private: System::Void MinDepTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidTime(MinDepTimeTextBox->Text)) { // проверка ввода минимального времени вылета
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Формат ввода времени: чч:мм или ч:мм";
			}
		}
		private: System::Void MaxDepTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidTime(MaxDepTimeTextBox->Text)) { // проверка ввода максимального времени вылета
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Формат ввода времени: чч:мм или ч:мм";
			}
		}
		private: System::Void MinArrTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidTime(MinArrTimeTextBox->Text)) { // проверка ввода минимального времени прибытия
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Формат ввода времени: чч:мм или ч:мм";
			}
		}
		private: System::Void MaxArrTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidTime(MaxArrTimeTextBox->Text)) { // проверка ввода максимального времени прибытия
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Формат ввода времени: чч:мм или ч:мм";
			}
		}
		private: System::Void MinTicketCostTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidCost(MinTicketCostTextBox->Text)) { // проверка ввода минимальной цены билета
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Цена билета должна быть числом больше нуля и меньше 10 млн.";
			}
			else if (!ValidCost(MinTicketCostTextBox->Text, MaxTicketCostTextBox->Text)) { 
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Минимальная цена билета должна быть меньше максимальной";
			}
		}
		private: System::Void MaxTicketCostTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			if (!ValidCost(MaxTicketCostTextBox->Text)) { // проверка ввода максимальной цены билета
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Цена билета должна быть числом больше нуля";
			}
			else if (!ValidCost(MinTicketCostTextBox->Text, MaxTicketCostTextBox->Text)) {
				e->Cancel = true;
				Info->Visible = true;
				Info->Text = "Максимальная цена билета должна быть больше минимальной";
			}
		}
	
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked)
				days[0] = true;
			else days[0] = false;
			UpdateData();
		}
		private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox2->Checked)
				days[1] = true;
			else days[1] = false;
			UpdateData();
		}
		private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox3->Checked)
				days[2] = true;
			else days[2] = false;
			UpdateData();
		}
		private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox4->Checked)
				days[3] = true;
			else days[3] = false;
			UpdateData();
		}
		private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox5->Checked)
				days[4] = true;
			else days[4] = false;
			UpdateData();
		}
		private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox6->Checked)
				days[5] = true;
			else days[5] = false;
			UpdateData();
		}
		private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox7->Checked)
				days[6] = true;
			else days[6] = false;
			UpdateData();
		}
		private: System::Void MinIDTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			if (ValidID(MaxIDTextBox->Text))
				UpdateData();
		}
		private: System::Void MaxIDTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			if (ValidID(MinIDTextBox->Text))
				UpdateData();
		}
		private: System::Void PlaneTypeComboBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			UpdateData();
		}
		private: System::Void ArrivalPointComboBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			UpdateData();
		}
		private: System::Void MinDepTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MinDepTimeTextBox->Text;
			if (text->Length == 4 && text[1] == ':') {
				text = String::Concat("0", text);
			}
			MinDepTimeTextBox->Text = text;
			if (ValidTime(MaxDepTimeTextBox->Text))
				UpdateData();
		}
		private: System::Void MaxDepTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MaxDepTimeTextBox->Text;
			if (text->Length == 4 && text[1] == ':') {
				text = String::Concat("0", text);
			}
			MaxDepTimeTextBox->Text = text;
			if (ValidTime(MinDepTimeTextBox->Text))
				UpdateData();
		}
		private: System::Void MinArrTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MinArrTimeTextBox->Text;
			if (text->Length == 4 && text[1] == ':') {
				text = String::Concat("0", text);
			}
			MinArrTimeTextBox->Text = text;
			if (ValidTime(MaxArrTimeTextBox->Text))
				UpdateData();
		}
		private: System::Void MaxArrTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MaxArrTimeTextBox->Text;
			if (text->Length == 4 && text[1] == ':') {
				text = String::Concat("0", text);
			}
			MaxArrTimeTextBox->Text = text;
			if (ValidTime(MinArrTimeTextBox->Text))
				UpdateData();
		}
		private: System::Void MinTicketCostTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MinTicketCostTextBox->Text;
			if (text->Contains(".")) {
				text = String::Join(",", text->Split('.'));
			}
			if (!text->Contains(",")) {
				text = String::Concat(text, ",00");
			}
			if (text->Contains(",")) {
				if (text->Split(',')[1]->Length > 2) {
					text = text->Remove(text->Split(',')[0]->Length + 3);
				}
			}
			MinTicketCostTextBox->Text = text;
			if (ValidCost(MaxTicketCostTextBox->Text))
				UpdateData();
		}
		private: System::Void MaxTicketCostTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
			Info->Visible = false;
			String^ text = MaxTicketCostTextBox->Text;
			if (text->Contains(".")) {
				text = String::Join(",", text->Split('.'));
			}
			if (!text->Contains(",")) {
				text = String::Concat(text, ",00");
			}
			if (text->Contains(",")) {
				if (text->Split(',')[1]->Length > 2) {
					text = text->Remove(text->Split(',')[0]->Length + 3);
				}
			}
			MaxTicketCostTextBox->Text = text;
			if (ValidCost(MinTicketCostTextBox->Text))
				UpdateData();
		}
	};
}
