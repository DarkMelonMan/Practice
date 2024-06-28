#define BASE L"base.txt"
#pragma once


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
			this->dataGridView1->Location = System::Drawing::Point(171, 287);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1277, 346);
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
			this->label1->Location = System::Drawing::Point(55, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Универсальный запрос";
			// 
			// IDCheckBox
			// 
			this->IDCheckBox->AutoSize = true;
			this->IDCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->IDCheckBox->Location = System::Drawing::Point(60, 63);
			this->IDCheckBox->Name = L"IDCheckBox";
			this->IDCheckBox->Size = System::Drawing::Size(119, 22);
			this->IDCheckBox->TabIndex = 9;
			this->IDCheckBox->Text = L"Искать по ID";
			this->IDCheckBox->UseVisualStyleBackColor = true;
			this->IDCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::IDCheckBox_CheckedChanged);
			// 
			// PlaneTypeCheckBox
			// 
			this->PlaneTypeCheckBox->AutoSize = true;
			this->PlaneTypeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PlaneTypeCheckBox->Location = System::Drawing::Point(197, 63);
			this->PlaneTypeCheckBox->Name = L"PlaneTypeCheckBox";
			this->PlaneTypeCheckBox->Size = System::Drawing::Size(207, 22);
			this->PlaneTypeCheckBox->TabIndex = 10;
			this->PlaneTypeCheckBox->Text = L"Искать по типу самолёта";
			this->PlaneTypeCheckBox->UseVisualStyleBackColor = true;
			this->PlaneTypeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::PlaneTypeCheckBox_CheckedChanged);
			// 
			// ArrivalPointCheckBox
			// 
			this->ArrivalPointCheckBox->AutoSize = true;
			this->ArrivalPointCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrivalPointCheckBox->Location = System::Drawing::Point(410, 63);
			this->ArrivalPointCheckBox->Name = L"ArrivalPointCheckBox";
			this->ArrivalPointCheckBox->Size = System::Drawing::Size(224, 22);
			this->ArrivalPointCheckBox->TabIndex = 11;
			this->ArrivalPointCheckBox->Text = L"Искать по городу прибытия";
			this->ArrivalPointCheckBox->UseVisualStyleBackColor = true;
			this->ArrivalPointCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::ArrivalPointCheckBox_CheckedChanged);
			// 
			// DepTimeCheckBox
			// 
			this->DepTimeCheckBox->AutoSize = true;
			this->DepTimeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DepTimeCheckBox->Location = System::Drawing::Point(848, 63);
			this->DepTimeCheckBox->Name = L"DepTimeCheckBox";
			this->DepTimeCheckBox->Size = System::Drawing::Size(219, 22);
			this->DepTimeCheckBox->TabIndex = 12;
			this->DepTimeCheckBox->Text = L"Искать по времени вылета";
			this->DepTimeCheckBox->UseVisualStyleBackColor = true;
			this->DepTimeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::DepTimeCheckBox_CheckedChanged);
			// 
			// ArrTimeCheckBox
			// 
			this->ArrTimeCheckBox->AutoSize = true;
			this->ArrTimeCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrTimeCheckBox->Location = System::Drawing::Point(1113, 63);
			this->ArrTimeCheckBox->Name = L"ArrTimeCheckBox";
			this->ArrTimeCheckBox->Size = System::Drawing::Size(224, 22);
			this->ArrTimeCheckBox->TabIndex = 13;
			this->ArrTimeCheckBox->Text = L"Искать по времени прилёта";
			this->ArrTimeCheckBox->UseVisualStyleBackColor = true;
			this->ArrTimeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::ArrTimeCheckBox_CheckedChanged);
			// 
			// TicketCostCheckBox
			// 
			this->TicketCostCheckBox->AutoSize = true;
			this->TicketCostCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->TicketCostCheckBox->Location = System::Drawing::Point(1435, 63);
			this->TicketCostCheckBox->Name = L"TicketCostCheckBox";
			this->TicketCostCheckBox->Size = System::Drawing::Size(190, 22);
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
			this->MinIDLabel->Location = System::Drawing::Point(60, 120);
			this->MinIDLabel->Name = L"MinIDLabel";
			this->MinIDLabel->Size = System::Drawing::Size(126, 18);
			this->MinIDLabel->TabIndex = 16;
			this->MinIDLabel->Text = L"Минимальный ID";
			// 
			// MaxIDLabel
			// 
			this->MaxIDLabel->AutoSize = true;
			this->MaxIDLabel->Enabled = false;
			this->MaxIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxIDLabel->Location = System::Drawing::Point(60, 195);
			this->MaxIDLabel->Name = L"MaxIDLabel";
			this->MaxIDLabel->Size = System::Drawing::Size(134, 18);
			this->MaxIDLabel->TabIndex = 17;
			this->MaxIDLabel->Text = L"Максимальный ID";
			// 
			// PlaneTypeLabel
			// 
			this->PlaneTypeLabel->AutoSize = true;
			this->PlaneTypeLabel->Enabled = false;
			this->PlaneTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PlaneTypeLabel->Location = System::Drawing::Point(242, 151);
			this->PlaneTypeLabel->Name = L"PlaneTypeLabel";
			this->PlaneTypeLabel->Size = System::Drawing::Size(105, 18);
			this->PlaneTypeLabel->TabIndex = 19;
			this->PlaneTypeLabel->Text = L"Тип самолёта";
			// 
			// ArrivalPointLabel
			// 
			this->ArrivalPointLabel->AutoSize = true;
			this->ArrivalPointLabel->Enabled = false;
			this->ArrivalPointLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ArrivalPointLabel->Location = System::Drawing::Point(457, 151);
			this->ArrivalPointLabel->Name = L"ArrivalPointLabel";
			this->ArrivalPointLabel->Size = System::Drawing::Size(123, 18);
			this->ArrivalPointLabel->TabIndex = 21;
			this->ArrivalPointLabel->Text = L"Город прибытия";
			// 
			// MinDepTimeLabel
			// 
			this->MinDepTimeLabel->AutoSize = true;
			this->MinDepTimeLabel->Enabled = false;
			this->MinDepTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinDepTimeLabel->Location = System::Drawing::Point(859, 120);
			this->MinDepTimeLabel->Name = L"MinDepTimeLabel";
			this->MinDepTimeLabel->Size = System::Drawing::Size(208, 18);
			this->MinDepTimeLabel->TabIndex = 23;
			this->MinDepTimeLabel->Text = L"Минимальное время вылета";
			// 
			// MaxDepTimeLabel
			// 
			this->MaxDepTimeLabel->AutoSize = true;
			this->MaxDepTimeLabel->Enabled = false;
			this->MaxDepTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxDepTimeLabel->Location = System::Drawing::Point(859, 195);
			this->MaxDepTimeLabel->Name = L"MaxDepTimeLabel";
			this->MaxDepTimeLabel->Size = System::Drawing::Size(216, 18);
			this->MaxDepTimeLabel->TabIndex = 24;
			this->MaxDepTimeLabel->Text = L"Максимальное время вылета";
			// 
			// MinArrTimeLabel
			// 
			this->MinArrTimeLabel->AutoSize = true;
			this->MinArrTimeLabel->Enabled = false;
			this->MinArrTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinArrTimeLabel->Location = System::Drawing::Point(1151, 120);
			this->MinArrTimeLabel->Name = L"MinArrTimeLabel";
			this->MinArrTimeLabel->Size = System::Drawing::Size(213, 18);
			this->MinArrTimeLabel->TabIndex = 27;
			this->MinArrTimeLabel->Text = L"Минимальное время прилёта";
			// 
			// MaxArrTimeLabel
			// 
			this->MaxArrTimeLabel->AutoSize = true;
			this->MaxArrTimeLabel->Enabled = false;
			this->MaxArrTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxArrTimeLabel->Location = System::Drawing::Point(1151, 195);
			this->MaxArrTimeLabel->Name = L"MaxArrTimeLabel";
			this->MaxArrTimeLabel->Size = System::Drawing::Size(221, 18);
			this->MaxArrTimeLabel->TabIndex = 28;
			this->MaxArrTimeLabel->Text = L"Максимальное время прилёта";
			// 
			// MinTicketCostLabel
			// 
			this->MinTicketCostLabel->AutoSize = true;
			this->MinTicketCostLabel->Enabled = false;
			this->MinTicketCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinTicketCostLabel->Location = System::Drawing::Point(1432, 120);
			this->MinTicketCostLabel->Name = L"MinTicketCostLabel";
			this->MinTicketCostLabel->Size = System::Drawing::Size(194, 18);
			this->MinTicketCostLabel->TabIndex = 31;
			this->MinTicketCostLabel->Text = L"Минимальная цена билета";
			// 
			// MaxTicketCostLabel
			// 
			this->MaxTicketCostLabel->AutoSize = true;
			this->MaxTicketCostLabel->Enabled = false;
			this->MaxTicketCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxTicketCostLabel->Location = System::Drawing::Point(1418, 195);
			this->MaxTicketCostLabel->Name = L"MaxTicketCostLabel";
			this->MaxTicketCostLabel->Size = System::Drawing::Size(202, 18);
			this->MaxTicketCostLabel->TabIndex = 32;
			this->MaxTicketCostLabel->Text = L"Максимальная цена билета";
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(716, 675);
			this->CloseButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(201, 36);
			this->CloseButton->TabIndex = 35;
			this->CloseButton->Text = L"Закончить поиск";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &RequestForm::CloseButton_Click);
			// 
			// Info
			// 
			this->Info->Location = System::Drawing::Point(171, 639);
			this->Info->Margin = System::Windows::Forms::Padding(4);
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			this->Info->Size = System::Drawing::Size(1276, 22);
			this->Info->TabIndex = 36;
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Visible = false;
			// 
			// PlaneTypeComboBox
			// 
			this->PlaneTypeComboBox->Enabled = false;
			this->PlaneTypeComboBox->FormattingEnabled = true;
			this->PlaneTypeComboBox->Location = System::Drawing::Point(223, 181);
			this->PlaneTypeComboBox->Name = L"PlaneTypeComboBox";
			this->PlaneTypeComboBox->Size = System::Drawing::Size(147, 24);
			this->PlaneTypeComboBox->TabIndex = 37;
			// 
			// DaysCheckBox
			// 
			this->DaysCheckBox->AutoSize = true;
			this->DaysCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DaysCheckBox->Location = System::Drawing::Point(640, 63);
			this->DaysCheckBox->Name = L"DaysCheckBox";
			this->DaysCheckBox->Size = System::Drawing::Size(195, 22);
			this->DaysCheckBox->TabIndex = 38;
			this->DaysCheckBox->Text = L"Искать по дням недели";
			this->DaysCheckBox->UseVisualStyleBackColor = true;
			this->DaysCheckBox->CheckedChanged += gcnew System::EventHandler(this, &RequestForm::DaysCheckBox_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(643, 185);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 21);
			this->checkBox1->TabIndex = 39;
			this->checkBox1->Text = L"Пн";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(697, 185);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 21);
			this->checkBox2->TabIndex = 40;
			this->checkBox2->Text = L"Вт";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(749, 185);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 21);
			this->checkBox3->TabIndex = 41;
			this->checkBox3->Text = L"Ср";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(802, 185);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(47, 21);
			this->checkBox4->TabIndex = 42;
			this->checkBox4->Text = L"Чт";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(666, 212);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(47, 21);
			this->checkBox5->TabIndex = 43;
			this->checkBox5->Text = L"Пт";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(719, 212);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(47, 21);
			this->checkBox6->TabIndex = 44;
			this->checkBox6->Text = L"Сб";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(772, 212);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(46, 21);
			this->checkBox7->TabIndex = 45;
			this->checkBox7->Text = L"Вс";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// DaysLabel
			// 
			this->DaysLabel->AutoSize = true;
			this->DaysLabel->Enabled = false;
			this->DaysLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DaysLabel->Location = System::Drawing::Point(694, 151);
			this->DaysLabel->Name = L"DaysLabel";
			this->DaysLabel->Size = System::Drawing::Size(90, 18);
			this->DaysLabel->TabIndex = 46;
			this->DaysLabel->Text = L"Дни недели";
			// 
			// ArrivalPointComboBox
			// 
			this->ArrivalPointComboBox->Enabled = false;
			this->ArrivalPointComboBox->FormattingEnabled = true;
			this->ArrivalPointComboBox->Location = System::Drawing::Point(410, 181);
			this->ArrivalPointComboBox->Name = L"ArrivalPointComboBox";
			this->ArrivalPointComboBox->Size = System::Drawing::Size(206, 24);
			this->ArrivalPointComboBox->TabIndex = 47;
			// 
			// MaxTicketCostTextBox
			// 
			this->MaxTicketCostTextBox->Enabled = false;
			this->MaxTicketCostTextBox->Location = System::Drawing::Point(1421, 229);
			this->MaxTicketCostTextBox->Name = L"MaxTicketCostTextBox";
			this->MaxTicketCostTextBox->Size = System::Drawing::Size(205, 22);
			this->MaxTicketCostTextBox->TabIndex = 34;
			// 
			// MinTicketCostTextBox
			// 
			this->MinTicketCostTextBox->Enabled = false;
			this->MinTicketCostTextBox->Location = System::Drawing::Point(1421, 147);
			this->MinTicketCostTextBox->Name = L"MinTicketCostTextBox";
			this->MinTicketCostTextBox->Size = System::Drawing::Size(205, 22);
			this->MinTicketCostTextBox->TabIndex = 33;
			// 
			// MaxArrTimeTextBox
			// 
			this->MaxArrTimeTextBox->Enabled = false;
			this->MaxArrTimeTextBox->Location = System::Drawing::Point(1159, 229);
			this->MaxArrTimeTextBox->Name = L"MaxArrTimeTextBox";
			this->MaxArrTimeTextBox->Size = System::Drawing::Size(205, 22);
			this->MaxArrTimeTextBox->TabIndex = 30;
			// 
			// MinArrTimeTextBox
			// 
			this->MinArrTimeTextBox->Enabled = false;
			this->MinArrTimeTextBox->Location = System::Drawing::Point(1159, 147);
			this->MinArrTimeTextBox->Name = L"MinArrTimeTextBox";
			this->MinArrTimeTextBox->Size = System::Drawing::Size(205, 22);
			this->MinArrTimeTextBox->TabIndex = 29;
			// 
			// MaxDepTimeTextBox
			// 
			this->MaxDepTimeTextBox->Enabled = false;
			this->MaxDepTimeTextBox->Location = System::Drawing::Point(862, 229);
			this->MaxDepTimeTextBox->Name = L"MaxDepTimeTextBox";
			this->MaxDepTimeTextBox->Size = System::Drawing::Size(205, 22);
			this->MaxDepTimeTextBox->TabIndex = 26;
			// 
			// MinDepTimeTextBox
			// 
			this->MinDepTimeTextBox->Enabled = false;
			this->MinDepTimeTextBox->Location = System::Drawing::Point(870, 147);
			this->MinDepTimeTextBox->Name = L"MinDepTimeTextBox";
			this->MinDepTimeTextBox->Size = System::Drawing::Size(205, 22);
			this->MinDepTimeTextBox->TabIndex = 25;
			// 
			// MaxIDTextBox
			// 
			this->MaxIDTextBox->Enabled = false;
			this->MaxIDTextBox->Location = System::Drawing::Point(60, 229);
			this->MaxIDTextBox->Name = L"MaxIDTextBox";
			this->MaxIDTextBox->Size = System::Drawing::Size(131, 22);
			this->MaxIDTextBox->TabIndex = 18;
			// 
			// MinIDTextBox
			// 
			this->MinIDTextBox->Enabled = false;
			this->MinIDTextBox->Location = System::Drawing::Point(60, 150);
			this->MinIDTextBox->Name = L"MinIDTextBox";
			this->MinIDTextBox->Size = System::Drawing::Size(131, 22);
			this->MinIDTextBox->TabIndex = 15;
			// 
			// RequestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1842, 722);
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
			this->Name = L"RequestForm";
			this->Text = L"RequestForm";
			this->Activated += gcnew System::EventHandler(this, &RequestForm::RequestForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RequestForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ lines = File::ReadAllLines(BASE);
		array<String^>^ planeTypes = gcnew array<String^>(lines->Length);
		array<String^>^ arrivalPoints = gcnew array<String^>(lines->Length);
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
		PlaneTypeComboBox->Items->AddRange(planeTypes);
		ArrivalPointComboBox->Items->AddRange(arrivalPoints);
	}
private: System::Void IDCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (IDCheckBox->Checked) {
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
	}
}
private: System::Void PlaneTypeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (PlaneTypeCheckBox->Checked) {
		PlaneTypeLabel->Enabled = true;
		PlaneTypeComboBox->Enabled = true;
	}
	else {
		PlaneTypeLabel->Enabled = false;
		PlaneTypeComboBox->Enabled = false;
	}
}
private: System::Void ArrivalPointCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ArrivalPointCheckBox->Checked) {
		ArrivalPointLabel->Enabled = true;
		ArrivalPointComboBox->Enabled = true;
	}
	else {
		ArrivalPointLabel->Enabled = false;
		ArrivalPointComboBox->Enabled = false;
	}
}
private: System::Void DaysCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (DaysCheckBox->Checked) {
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
	}
}
private: System::Void DepTimeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (DepTimeCheckBox->Checked) {
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
	}
}
private: System::Void ArrTimeCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ArrTimeCheckBox->Checked) {
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
	}
}
private: System::Void TicketCostCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TicketCostCheckBox->Checked) {
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
	}
}
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
