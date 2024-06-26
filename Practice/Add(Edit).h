#pragma once
#include "BaseForm.h"

extern int mode;
extern int id;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddEdit
	/// </summary>
	public ref class AddEdit : public System::Windows::Forms::Form
	{
	public:
		AddEdit(void)
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
		~AddEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::TextBox^ PlaneTypeTextBox;
	private: System::Windows::Forms::Label^ PlaneTypeLabel;
	private: System::Windows::Forms::TextBox^ ArrivalPointTextBox;
	private: System::Windows::Forms::Label^ ArrivalPointLabel;
	private: System::Windows::Forms::Label^ DaysLabel;

	private: System::Windows::Forms::RadioButton^ RadioButton1;
	private: System::Windows::Forms::RadioButton^ RadioButton2;
	private: System::Windows::Forms::RadioButton^ RadioButton3;
	private: System::Windows::Forms::RadioButton^ RadioButton4;
	private: System::Windows::Forms::RadioButton^ RadioButton5;
	private: System::Windows::Forms::RadioButton^ RadioButton6;
	private: System::Windows::Forms::RadioButton^ RadioButton7;
	private: System::Windows::Forms::Label^ DepartureTimeLabel;
	private: System::Windows::Forms::TextBox^ DepartureTimeTextBox;

	private: System::Windows::Forms::Label^ ArrivalTimeLabel;
	private: System::Windows::Forms::TextBox^ ArrivalTimeTextBox;
	private: System::Windows::Forms::Label^ TicketCostLabel;
	private: System::Windows::Forms::TextBox^ TicketCostTextBox;
	private: System::Windows::Forms::Button^ DoneButton;
	private: System::Windows::Forms::TextBox^ Info;
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
			this->Label = (gcnew System::Windows::Forms::Label());
			this->PlaneTypeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PlaneTypeLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalPointTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ArrivalPointLabel = (gcnew System::Windows::Forms::Label());
			this->DaysLabel = (gcnew System::Windows::Forms::Label());
			this->RadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->DepartureTimeLabel = (gcnew System::Windows::Forms::Label());
			this->DepartureTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ArrivalTimeLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TicketCostLabel = (gcnew System::Windows::Forms::Label());
			this->TicketCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DoneButton = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Label->Location = System::Drawing::Point(145, 18);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(197, 25);
			this->Label->TabIndex = 0;
			this->Label->Text = L"Добавление строки";
			// 
			// PlaneTypeTextBox
			// 
			this->PlaneTypeTextBox->Location = System::Drawing::Point(40, 109);
			this->PlaneTypeTextBox->Name = L"PlaneTypeTextBox";
			this->PlaneTypeTextBox->Size = System::Drawing::Size(185, 22);
			this->PlaneTypeTextBox->TabIndex = 1;
			this->PlaneTypeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PlaneTypeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddEdit::PlaneTypeTextBox_Validating);
			this->PlaneTypeTextBox->Validated += gcnew System::EventHandler(this, &AddEdit::PlaneTypeTextBox_Validated);
			// 
			// PlaneTypeLabel
			// 
			this->PlaneTypeLabel->AutoSize = true;
			this->PlaneTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PlaneTypeLabel->Location = System::Drawing::Point(73, 71);
			this->PlaneTypeLabel->Name = L"PlaneTypeLabel";
			this->PlaneTypeLabel->Size = System::Drawing::Size(125, 20);
			this->PlaneTypeLabel->TabIndex = 2;
			this->PlaneTypeLabel->Text = L"Тип самолёта";
			// 
			// ArrivalPointTextBox
			// 
			this->ArrivalPointTextBox->Location = System::Drawing::Point(40, 188);
			this->ArrivalPointTextBox->Name = L"ArrivalPointTextBox";
			this->ArrivalPointTextBox->Size = System::Drawing::Size(185, 22);
			this->ArrivalPointTextBox->TabIndex = 3;
			this->ArrivalPointTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ArrivalPointTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddEdit::ArrivalPointTextBox_Validating);
			this->ArrivalPointTextBox->Validated += gcnew System::EventHandler(this, &AddEdit::ArrivalPointTextBox_Validated);
			// 
			// ArrivalPointLabel
			// 
			this->ArrivalPointLabel->AutoSize = true;
			this->ArrivalPointLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ArrivalPointLabel->Location = System::Drawing::Point(64, 156);
			this->ArrivalPointLabel->Name = L"ArrivalPointLabel";
			this->ArrivalPointLabel->Size = System::Drawing::Size(148, 20);
			this->ArrivalPointLabel->TabIndex = 4;
			this->ArrivalPointLabel->Text = L"Город прибытия";
			// 
			// DaysLabel
			// 
			this->DaysLabel->AutoSize = true;
			this->DaysLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DaysLabel->Location = System::Drawing::Point(73, 249);
			this->DaysLabel->Name = L"DaysLabel";
			this->DaysLabel->Size = System::Drawing::Size(109, 20);
			this->DaysLabel->TabIndex = 5;
			this->DaysLabel->Text = L"Дни недели";
			// 
			// RadioButton1
			// 
			this->RadioButton1->AutoSize = true;
			this->RadioButton1->Location = System::Drawing::Point(24, 293);
			this->RadioButton1->Name = L"RadioButton1";
			this->RadioButton1->Size = System::Drawing::Size(47, 21);
			this->RadioButton1->TabIndex = 6;
			this->RadioButton1->Text = L"Пн";
			this->RadioButton1->UseVisualStyleBackColor = true;
			// 
			// RadioButton2
			// 
			this->RadioButton2->AutoSize = true;
			this->RadioButton2->Location = System::Drawing::Point(77, 293);
			this->RadioButton2->Name = L"RadioButton2";
			this->RadioButton2->Size = System::Drawing::Size(45, 21);
			this->RadioButton2->TabIndex = 7;
			this->RadioButton2->Text = L"Вт";
			this->RadioButton2->UseVisualStyleBackColor = true;
			// 
			// RadioButton3
			// 
			this->RadioButton3->AutoSize = true;
			this->RadioButton3->Location = System::Drawing::Point(123, 293);
			this->RadioButton3->Name = L"RadioButton3";
			this->RadioButton3->Size = System::Drawing::Size(46, 21);
			this->RadioButton3->TabIndex = 8;
			this->RadioButton3->Text = L"Ср";
			this->RadioButton3->UseVisualStyleBackColor = true;
			// 
			// RadioButton4
			// 
			this->RadioButton4->AutoSize = true;
			this->RadioButton4->Location = System::Drawing::Point(166, 293);
			this->RadioButton4->Name = L"RadioButton4";
			this->RadioButton4->Size = System::Drawing::Size(46, 21);
			this->RadioButton4->TabIndex = 9;
			this->RadioButton4->Text = L"Чт";
			this->RadioButton4->UseVisualStyleBackColor = true;
			// 
			// RadioButton5
			// 
			this->RadioButton5->AutoSize = true;
			this->RadioButton5->Location = System::Drawing::Point(212, 293);
			this->RadioButton5->Name = L"RadioButton5";
			this->RadioButton5->Size = System::Drawing::Size(46, 21);
			this->RadioButton5->TabIndex = 10;
			this->RadioButton5->Text = L"Пт";
			this->RadioButton5->UseVisualStyleBackColor = true;
			// 
			// RadioButton6
			// 
			this->RadioButton6->AutoSize = true;
			this->RadioButton6->Location = System::Drawing::Point(98, 320);
			this->RadioButton6->Name = L"RadioButton6";
			this->RadioButton6->Size = System::Drawing::Size(46, 21);
			this->RadioButton6->TabIndex = 11;
			this->RadioButton6->Text = L"Сб";
			this->RadioButton6->UseVisualStyleBackColor = true;
			// 
			// RadioButton7
			// 
			this->RadioButton7->AutoSize = true;
			this->RadioButton7->Location = System::Drawing::Point(150, 320);
			this->RadioButton7->Name = L"RadioButton7";
			this->RadioButton7->Size = System::Drawing::Size(45, 21);
			this->RadioButton7->TabIndex = 12;
			this->RadioButton7->Text = L"Вс";
			this->RadioButton7->UseVisualStyleBackColor = true;
			// 
			// DepartureTimeLabel
			// 
			this->DepartureTimeLabel->AutoSize = true;
			this->DepartureTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DepartureTimeLabel->Location = System::Drawing::Point(298, 71);
			this->DepartureTimeLabel->Name = L"DepartureTimeLabel";
			this->DepartureTimeLabel->Size = System::Drawing::Size(130, 20);
			this->DepartureTimeLabel->TabIndex = 13;
			this->DepartureTimeLabel->Text = L"Время вылета";
			// 
			// DepartureTimeTextBox
			// 
			this->DepartureTimeTextBox->Location = System::Drawing::Point(271, 109);
			this->DepartureTimeTextBox->Name = L"DepartureTimeTextBox";
			this->DepartureTimeTextBox->Size = System::Drawing::Size(185, 22);
			this->DepartureTimeTextBox->TabIndex = 14;
			this->DepartureTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ArrivalTimeLabel
			// 
			this->ArrivalTimeLabel->AutoSize = true;
			this->ArrivalTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ArrivalTimeLabel->Location = System::Drawing::Point(289, 156);
			this->ArrivalTimeLabel->Name = L"ArrivalTimeLabel";
			this->ArrivalTimeLabel->Size = System::Drawing::Size(150, 20);
			this->ArrivalTimeLabel->TabIndex = 15;
			this->ArrivalTimeLabel->Text = L"Время прибытия";
			// 
			// ArrivalTimeTextBox
			// 
			this->ArrivalTimeTextBox->Location = System::Drawing::Point(271, 188);
			this->ArrivalTimeTextBox->Name = L"ArrivalTimeTextBox";
			this->ArrivalTimeTextBox->Size = System::Drawing::Size(185, 22);
			this->ArrivalTimeTextBox->TabIndex = 16;
			this->ArrivalTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TicketCostLabel
			// 
			this->TicketCostLabel->AutoSize = true;
			this->TicketCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->TicketCostLabel->Location = System::Drawing::Point(298, 249);
			this->TicketCostLabel->Name = L"TicketCostLabel";
			this->TicketCostLabel->Size = System::Drawing::Size(117, 20);
			this->TicketCostLabel->TabIndex = 17;
			this->TicketCostLabel->Text = L"Цена билета";
			// 
			// TicketCostTextBox
			// 
			this->TicketCostTextBox->Location = System::Drawing::Point(271, 293);
			this->TicketCostTextBox->Name = L"TicketCostTextBox";
			this->TicketCostTextBox->Size = System::Drawing::Size(185, 22);
			this->TicketCostTextBox->TabIndex = 18;
			this->TicketCostTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoneButton
			// 
			this->DoneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DoneButton->Location = System::Drawing::Point(176, 375);
			this->DoneButton->Name = L"DoneButton";
			this->DoneButton->Size = System::Drawing::Size(144, 33);
			this->DoneButton->TabIndex = 19;
			this->DoneButton->Tag = L"";
			this->DoneButton->Text = L"Готово";
			this->DoneButton->UseVisualStyleBackColor = true;
			this->DoneButton->Click += gcnew System::EventHandler(this, &AddEdit::DoneButton_Click);
			// 
			// Info
			// 
			this->Info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Info->Location = System::Drawing::Point(77, 421);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(351, 26);
			this->Info->TabIndex = 20;
			this->Info->Text = L"Не все поля ещё заполнены";
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Visible = false;
			// 
			// AddEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 466);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->DoneButton);
			this->Controls->Add(this->TicketCostTextBox);
			this->Controls->Add(this->TicketCostLabel);
			this->Controls->Add(this->ArrivalTimeTextBox);
			this->Controls->Add(this->ArrivalTimeLabel);
			this->Controls->Add(this->DepartureTimeTextBox);
			this->Controls->Add(this->DepartureTimeLabel);
			this->Controls->Add(this->RadioButton7);
			this->Controls->Add(this->RadioButton6);
			this->Controls->Add(this->RadioButton5);
			this->Controls->Add(this->RadioButton4);
			this->Controls->Add(this->RadioButton3);
			this->Controls->Add(this->RadioButton2);
			this->Controls->Add(this->RadioButton1);
			this->Controls->Add(this->DaysLabel);
			this->Controls->Add(this->ArrivalPointLabel);
			this->Controls->Add(this->ArrivalPointTextBox);
			this->Controls->Add(this->PlaneTypeLabel);
			this->Controls->Add(this->PlaneTypeTextBox);
			this->Controls->Add(this->Label);
			this->Name = L"AddEdit";
			this->Text = L"AddEdit";
			this->Activated += gcnew System::EventHandler(this, &AddEdit::AddEdit_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
		array<TextBox^>^ textBoxes = {PlaneTypeTextBox, ArrivalPointTextBox, DepartureTimeTextBox, ArrivalTimeTextBox, TicketCostTextBox};
		array<RadioButton^>^ radioButtons = { RadioButton1, RadioButton2, RadioButton3, RadioButton4, RadioButton5, RadioButton6, RadioButton7 };
		bool flag1 = true;
		bool flag2 = false;
		for each (TextBox ^ textBox in textBoxes) {
			if (textBox->TextLength == 0) {
				flag1 = false;
				break;
			}
		}
		for each (RadioButton ^ radioButton in radioButtons) {
			if (radioButton->Checked) {
				flag2 = true;
			}
		}
		if (flag1 && flag2) {


			Close();
		}
		else {
			Info->Visible = true;
			Info->Text = "Не все поля были заполнены";
		}
	}
private: System::Void PlaneTypeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidText(PlaneTypeTextBox->Text))
	{
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Размер текста должен быть от 2 до 30 символов";
	}
}
	private: bool ValidText(String^ text) {
		return text->Length <= 30 && text->Length > 1;
	}
private: System::Void ArrivalPointTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidText(ArrivalPointTextBox->Text))
	{
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Размер текста должен быть от 2 до 30 символов";
	}
}
private: System::Void PlaneTypeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false;
}
private: System::Void ArrivalPointTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false;
}
private: System::Void AddEdit_Activated(System::Object^ sender, System::EventArgs^ e) {
	if (mode) {
		Label->Text = "Изменение строки";

	}
}
};
}
