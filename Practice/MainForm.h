#pragma once
#define BASE "base.txt"

extern int admin;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlaneType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalPoint;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Days;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartureTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TicketCost;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::Button^ UpdateDataButton;
	private: System::Windows::Forms::Button^ AddRow;
	private: System::Windows::Forms::Button^ DeleteRow;
	private: System::Windows::Forms::Button^ RequestButton;
	private: System::Windows::Forms::Button^ EditButton;
	private: System::Windows::Forms::Label^ label1;





	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UpdateDataButton = (gcnew System::Windows::Forms::Button());
			this->AddRow = (gcnew System::Windows::Forms::Button());
			this->DeleteRow = (gcnew System::Windows::Forms::Button());
			this->RequestButton = (gcnew System::Windows::Forms::Button());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(65, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(959, 406);
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
			this->PlaneType->HeaderText = L"��� �������";
			this->PlaneType->MinimumWidth = 6;
			this->PlaneType->Name = L"PlaneType";
			this->PlaneType->ReadOnly = true;
			this->PlaneType->Width = 180;
			// 
			// ArrivalPoint
			// 
			this->ArrivalPoint->HeaderText = L"����� ��������";
			this->ArrivalPoint->MinimumWidth = 6;
			this->ArrivalPoint->Name = L"ArrivalPoint";
			this->ArrivalPoint->ReadOnly = true;
			this->ArrivalPoint->Width = 180;
			// 
			// Days
			// 
			this->Days->HeaderText = L"��� ������";
			this->Days->MinimumWidth = 6;
			this->Days->Name = L"Days";
			this->Days->ReadOnly = true;
			this->Days->Width = 125;
			// 
			// DepartureTime
			// 
			this->DepartureTime->HeaderText = L"����� ������";
			this->DepartureTime->MinimumWidth = 6;
			this->DepartureTime->Name = L"DepartureTime";
			this->DepartureTime->ReadOnly = true;
			this->DepartureTime->Width = 125;
			// 
			// ArrivalTime
			// 
			this->ArrivalTime->HeaderText = L"����� ������";
			this->ArrivalTime->MinimumWidth = 6;
			this->ArrivalTime->Name = L"ArrivalTime";
			this->ArrivalTime->ReadOnly = true;
			this->ArrivalTime->Width = 125;
			// 
			// TicketCost
			// 
			this->TicketCost->HeaderText = L"���� ������";
			this->TicketCost->MinimumWidth = 6;
			this->TicketCost->Name = L"TicketCost";
			this->TicketCost->ReadOnly = true;
			this->TicketCost->Width = 125;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(156, 24);
			this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
			// 
			// UpdateDataButton
			// 
			this->UpdateDataButton->Location = System::Drawing::Point(65, 488);
			this->UpdateDataButton->Name = L"UpdateDataButton";
			this->UpdateDataButton->Size = System::Drawing::Size(143, 36);
			this->UpdateDataButton->TabIndex = 2;
			this->UpdateDataButton->Text = L"������� �������";
			this->UpdateDataButton->UseVisualStyleBackColor = true;
			this->UpdateDataButton->Click += gcnew System::EventHandler(this, &MainForm::UpdateButtonClick);
			// 
			// AddRow
			// 
			this->AddRow->Location = System::Drawing::Point(256, 488);
			this->AddRow->Name = L"AddRow";
			this->AddRow->Size = System::Drawing::Size(143, 36);
			this->AddRow->TabIndex = 3;
			this->AddRow->Text = L"������ ������";
			this->AddRow->UseVisualStyleBackColor = true;
			this->AddRow->Click += gcnew System::EventHandler(this, &MainForm::AddRowClick);
			// 
			// DeleteRow
			// 
			this->DeleteRow->Location = System::Drawing::Point(447, 488);
			this->DeleteRow->Name = L"DeleteRow";
			this->DeleteRow->Size = System::Drawing::Size(143, 36);
			this->DeleteRow->TabIndex = 4;
			this->DeleteRow->Text = L"������� ������";
			this->DeleteRow->UseVisualStyleBackColor = true;
			this->DeleteRow->Click += gcnew System::EventHandler(this, &MainForm::DeleteRowClick);
			// 
			// RequestButton
			// 
			this->RequestButton->Location = System::Drawing::Point(647, 488);
			this->RequestButton->Name = L"RequestButton";
			this->RequestButton->Size = System::Drawing::Size(180, 36);
			this->RequestButton->TabIndex = 5;
			this->RequestButton->Text = L"������������� ������";
			this->RequestButton->UseVisualStyleBackColor = true;
			// 
			// EditButton
			// 
			this->EditButton->Location = System::Drawing::Point(883, 488);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(141, 36);
			this->EditButton->TabIndex = 6;
			this->EditButton->Text = L"��������� �����";
			this->EditButton->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(65, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"���� ������";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 587);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EditButton);
			this->Controls->Add(this->RequestButton);
			this->Controls->Add(this->DeleteRow);
			this->Controls->Add(this->AddRow);
			this->Controls->Add(this->UpdateDataButton);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UpdateButtonClick(System::Object^ sender, System::EventArgs^ e) {
	while (!dataGridView1->Rows[0]->IsNewRow) {
		dataGridView1->Rows->RemoveAt(0);
		dataGridView1->Refresh();
	}
	array<String^>^ lines = File::ReadAllLines(BASE);
	for each (String ^ str in lines)
	{
		DataGridViewRow^ row = gcnew DataGridViewRow();
		row->CreateCells(dataGridView1);
		for (int i = 0; i < str->Split(L' ')->Length; i++)
			row->Cells[i]->Value = str->Split(L' ')[i];
		dataGridView1->Rows->Add(row);
	}
}
private: System::Void AddRowClick(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void DeleteRowClick(System::Object^ sender, System::EventArgs^ e) {
	if (!dataGridView1->CurrentRow->IsNewRow) {
		dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
		dataGridView1->Refresh();
	}
}
};
}
