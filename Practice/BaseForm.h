#pragma once
#define BASE "base.txt"
#include "Add(Edit).h"

extern int admin;
int mode;
int id;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Сводка для BaseForm
	/// </summary>
	public ref class BaseForm : public System::Windows::Forms::Form
	{
	public:
		BaseForm(void)
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
		~BaseForm()
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
	private: System::Windows::Forms::Button^ CloseButton;

	private: System::Windows::Forms::Button^ AddRow;
	private: System::Windows::Forms::Button^ DeleteRow;
	private: System::Windows::Forms::Button^ RequestButton;
	private: System::Windows::Forms::Button^ EditButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Info;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlaneType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ArrivalPoint = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Days = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartureTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ArrivalTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TicketCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->AddRow = (gcnew System::Windows::Forms::Button());
			this->DeleteRow = (gcnew System::Windows::Forms::Button());
			this->RequestButton = (gcnew System::Windows::Forms::Button());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Info = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1->Location = System::Drawing::Point(56, 52);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1277, 430);
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
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(591, 571);
			this->CloseButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(201, 36);
			this->CloseButton->TabIndex = 2;
			this->CloseButton->Text = L"Выйти из таблицы";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &BaseForm::ExitButtonClick);
			// 
			// AddRow
			// 
			this->AddRow->Location = System::Drawing::Point(56, 498);
			this->AddRow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddRow->Name = L"AddRow";
			this->AddRow->Size = System::Drawing::Size(239, 36);
			this->AddRow->TabIndex = 3;
			this->AddRow->Text = L"Ввести строку";
			this->AddRow->UseVisualStyleBackColor = true;
			this->AddRow->Click += gcnew System::EventHandler(this, &BaseForm::AddRowClick);
			// 
			// DeleteRow
			// 
			this->DeleteRow->Location = System::Drawing::Point(403, 498);
			this->DeleteRow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteRow->Name = L"DeleteRow";
			this->DeleteRow->Size = System::Drawing::Size(239, 36);
			this->DeleteRow->TabIndex = 4;
			this->DeleteRow->Text = L"Удалить строку";
			this->DeleteRow->UseVisualStyleBackColor = true;
			this->DeleteRow->Click += gcnew System::EventHandler(this, &BaseForm::DeleteRowClick);
			// 
			// RequestButton
			// 
			this->RequestButton->Location = System::Drawing::Point(750, 498);
			this->RequestButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RequestButton->Name = L"RequestButton";
			this->RequestButton->Size = System::Drawing::Size(239, 36);
			this->RequestButton->TabIndex = 5;
			this->RequestButton->Text = L"Универсальный запрос";
			this->RequestButton->UseVisualStyleBackColor = true;
			// 
			// EditButton
			// 
			this->EditButton->Location = System::Drawing::Point(1093, 498);
			this->EditButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(239, 36);
			this->EditButton->TabIndex = 6;
			this->EditButton->Text = L"Изменение полей";
			this->EditButton->UseVisualStyleBackColor = true;
			this->EditButton->Click += gcnew System::EventHandler(this, &BaseForm::EditButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(65, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"База данных";
			// 
			// Info
			// 
			this->Info->Location = System::Drawing::Point(56, 543);
			this->Info->Margin = System::Windows::Forms::Padding(4);
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			this->Info->Size = System::Drawing::Size(1276, 22);
			this->Info->TabIndex = 8;
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Visible = false;
			// 
			// BaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1397, 615);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EditButton);
			this->Controls->Add(this->RequestButton);
			this->Controls->Add(this->DeleteRow);
			this->Controls->Add(this->AddRow);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BaseForm";
			this->Text = L"BaseForm";
			this->Activated += gcnew System::EventHandler(this, &BaseForm::BaseForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: Void UpdateData() {
		while (!dataGridView1->Rows[0]->IsNewRow) {
			dataGridView1->Rows->RemoveAt(0);
			dataGridView1->Refresh();
		}
		FileStream^ file = File::Exists(BASE) ? File::OpenRead(BASE) : File::Create(BASE);
		file->Close();
		array<String^>^ lines = File::ReadAllLines(BASE);
		for each (String ^ str in lines)
		{
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);
			for (int i = 0; i < str->Split(L' ')->Length; i++)
				row->Cells[i]->Value = str->Split(L' ')[i];
			dataGridView1->Rows->Add(row);
		}
		if (dataGridView1->Rows[0]->IsNewRow) {
			this->Info->Visible = true;
			this->Info->Text = "Файл пуст";
		}
	}

	private: System::Void AddRowClick(System::Object^ sender, System::EventArgs^ e) {
		mode = 0;
		AddEdit^ form = gcnew(AddEdit);
		form->ShowDialog();
	}

	private: System::Void DeleteRowClick(System::Object^ sender, System::EventArgs^ e) {
		if (!dataGridView1->CurrentRow->IsNewRow) {
			int local_id = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
			dataGridView1->Refresh();
			cli::array<String^>^ lines = File::ReadAllLines(BASE);
			cli::array<String^>^ new_lines = gcnew array<String^>(lines->Length - 1);
			int i = 0;
			for each (String ^ str in lines)
			{
				String^ new_str;
				if (Int32::Parse(str->Split(L' ')[0]) < local_id) {
					new_lines[i] = str;
					i++;
				}
				else if (Int32::Parse(str->Split(L' ')[0]) > local_id) {
					int new_index = Int32::Parse(str->Split(L' ')[0]) - 1;
					new_str = String::Concat(new_index.ToString(), " ", str->Split(L' ')[1], " ", str->Split(L' ')[2], " ", str->Split(L' ')[3], " ", str->Split(L' ')[4], " ", str->Split(L' ')[5], " ", str->Split(L' ')[6]);
					new_lines[i] = new_str;
					i++;
				}
			}
			File::WriteAllLines(BASE, new_lines);
			UpdateData();
		}
		else {
			this->Info->Visible = true;
			this->Info->Text = "Выберите не пустую строку для удаления";
		}
	}
	private: System::Void BaseForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		if (admin == 0) {
			this->DeleteRow->Enabled = false;
			this->EditButton->Enabled = false;
			this->RequestButton->Enabled = false;
			this->AddRow->Enabled = false;
		}
		UpdateData();
	}
	private: System::Void EditButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!dataGridView1->CurrentRow->IsNewRow) {
			id = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
			mode = 1;
			AddEdit^ form = gcnew(AddEdit);
			form->ShowDialog();
		}
		else {
			this->Info->Visible = true;
			this->Info->Text = "Выберите не пустую строку для изменения";
		}
	}
private: System::Void ExitButtonClick(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
