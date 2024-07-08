#pragma once
#include "BaseForm.h"
#include "Util.h"

extern int mode;
extern int id;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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








	private: System::Windows::Forms::Label^ DepartureTimeLabel;
	private: System::Windows::Forms::TextBox^ DepartureTimeTextBox;

	private: System::Windows::Forms::Label^ ArrivalTimeLabel;
	private: System::Windows::Forms::TextBox^ ArrivalTimeTextBox;
	private: System::Windows::Forms::Label^ TicketCostLabel;
	private: System::Windows::Forms::TextBox^ TicketCostTextBox;
	private: System::Windows::Forms::Button^ DoneButton;
	private: System::Windows::Forms::TextBox^ Info;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
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
			this->DepartureTimeLabel = (gcnew System::Windows::Forms::Label());
			this->DepartureTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ArrivalTimeLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TicketCostLabel = (gcnew System::Windows::Forms::Label());
			this->TicketCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DoneButton = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
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
			this->DepartureTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddEdit::DepartureTimeTextBox_Validating);
			this->DepartureTimeTextBox->Validated += gcnew System::EventHandler(this, &AddEdit::DepartureTimeTextBox_Validated);
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
			this->ArrivalTimeTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddEdit::ArrivalTimeTextBox_Validating);
			this->ArrivalTimeTextBox->Validated += gcnew System::EventHandler(this, &AddEdit::ArrivalTimeTextBox_Validated);
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
			this->TicketCostTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddEdit::TicketCostTextBox_Validating);
			this->TicketCostTextBox->Validated += gcnew System::EventHandler(this, &AddEdit::TicketCostTextBox_Validated);
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
			this->Info->Multiline = true;
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(351, 79);
			this->Info->TabIndex = 20;
			this->Info->Text = L"Не все поля ещё заполнены";
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(23, 295);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 21);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Пн";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(77, 295);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 21);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"Вт";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(120, 295);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 21);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"Ср";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(165, 295);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(47, 21);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->Text = L"Чт";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(208, 295);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(47, 21);
			this->checkBox5->TabIndex = 25;
			this->checkBox5->Text = L"Пт";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(86, 320);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(47, 21);
			this->checkBox6->TabIndex = 26;
			this->checkBox6->Text = L"Сб";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(139, 320);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(46, 21);
			this->checkBox7->TabIndex = 27;
			this->checkBox7->Text = L"Вс";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// AddEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 524);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->DoneButton);
			this->Controls->Add(this->TicketCostTextBox);
			this->Controls->Add(this->TicketCostLabel);
			this->Controls->Add(this->ArrivalTimeTextBox);
			this->Controls->Add(this->ArrivalTimeLabel);
			this->Controls->Add(this->DepartureTimeTextBox);
			this->Controls->Add(this->DepartureTimeLabel);
			this->Controls->Add(this->DaysLabel);
			this->Controls->Add(this->ArrivalPointLabel);
			this->Controls->Add(this->ArrivalPointTextBox);
			this->Controls->Add(this->PlaneTypeLabel);
			this->Controls->Add(this->PlaneTypeTextBox);
			this->Controls->Add(this->Label);
			this->Name = L"AddEdit";
			this->Text = L"Добавление строки";
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Activated += gcnew System::EventHandler(this, &AddEdit::AddEdit_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void DoneButton_Click(System::Object^ sender, System::EventArgs^ e) { 
		// проверка, что все поля заполнены корректно, и последующая их запись в файл
		array<TextBox^>^ textBoxes = {PlaneTypeTextBox, ArrivalPointTextBox, DepartureTimeTextBox, ArrivalTimeTextBox, TicketCostTextBox};
		array<CheckBox^>^ checkBoxes = { checkBox1, checkBox2, checkBox3, checkBox4, checkBox5, checkBox6, checkBox7 };
		bool flag1 = true;
		bool flag2 = false;
		String^ days = L"";
		for each (TextBox ^ textBox in textBoxes) {
			if (textBox->TextLength == 0) {
				flag1 = false;
				break;
			}
		}
		for (int i = 0; i < 7; i++) {
			if (checkBoxes[i]->Checked == true) {
				flag2 = true;
			}
		}
		if (flag1 && flag2) {
			for (int i = 0; i < 7; i++) {
				if (checkBoxes[i]->Checked == true) {
					days = String::Concat(days, (i + 1).ToString(), ",");
				}
			}
			if (days->EndsWith(","))
				days = days->Remove(days->Length - 1);
			String^ result = String::Concat(id.ToString(), " ", PlaneTypeTextBox->Text, " ", ArrivalPointTextBox->Text, " ", 
				days, " ", DepartureTimeTextBox->Text, " ", ArrivalTimeTextBox->Text, " ", TicketCostTextBox->Text, "\n");

			if (!mode) // если запущен режим добавления строки
				File::AppendAllText(BASE, result);
			else { // если запущен режим редактирования строки
				array<String^>^ lines = File::ReadAllLines(BASE);
				result = result->Remove(result->Length - 1);
				for (int i = 0; i < lines->Length; i++)
				{
					if (Int32::Parse(lines[i]->Split(L' ')[0]) == id) {
						lines[i] = result;
					}
				}
				File::WriteAllLines(BASE, lines);
			}
			Close();
		}
		else {
			Info->Visible = true;
			Info->Text = "Не все поля были заполнены";
		}
	}

private: System::Void PlaneTypeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidText(PlaneTypeTextBox->Text)) // проверка ввода типа самолёта
	{
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Размер текста должен быть от 2 до 30 символов, и текст не может содержать пробелы";
	}
}

private: System::Void ArrivalPointTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidText(ArrivalPointTextBox->Text)) // проверка ввода города прибытия
	{
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Размер текста должен быть от 2 до 30 символов, и текст не может содержать пробелы";
	}
}

private: System::Void PlaneTypeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false; // если проверка прошла успешно
}

private: System::Void ArrivalPointTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false; 
}

private: System::Void AddEdit_Activated(System::Object^ sender, System::EventArgs^ e) {
	if (mode) { // если запущен режим изменения строки, заполнить все поля информацией из выделенной строки
		Label->Text = "Изменение строки";
		this->Text = L"Изменение строки";
		array<String^>^ lines = File::ReadAllLines(BASE);
		String^ line;
		for each (String ^ str in lines)
		{
			if (Int32::Parse(str->Split(L' ')[0]) == id) {
				line = str;
			}
		}
		PlaneTypeTextBox->Text = line->Split(L' ')[1];
		ArrivalPointTextBox->Text = line->Split(L' ')[2];
		array<String^>^ days;
		array<CheckBox^>^ checkBoxes = { checkBox1, checkBox2, checkBox3, checkBox4, checkBox5, checkBox6, checkBox7 };
		days = line->Split(L' ')[3]->Split(L',');
		for each (String ^ str in days) {
			checkBoxes[Int32::Parse(str) - 1]->Checked = true;
		}
		DepartureTimeTextBox->Text = line->Split(L' ')[4];
		ArrivalTimeTextBox->Text = line->Split(L' ')[5];
		TicketCostTextBox->Text = line->Split(L' ')[6];
	}
}

private: System::Void DepartureTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidTime(DepartureTimeTextBox->Text)) { // проверка ввода времени вылета
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Формат ввода времени: чч:мм или ч:мм";
	}
	else if (!ValidTime(DepartureTimeTextBox->Text, ArrivalTimeTextBox->Text)) {
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Разность между временем вылета и временем прилёта не может составлять больше 19 часов 20 минут";
	}
}

private: System::Void DepartureTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false; // если проверка времени вылета прошла успешно
	String^ text = DepartureTimeTextBox->Text;
	if (text->Length == 4 && text[1] == ':') {
		text = String::Concat("0", text);
	}
	DepartureTimeTextBox->Text = text;
}

private: System::Void ArrivalTimeTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidTime(ArrivalTimeTextBox->Text)) { // проверка ввода времени прибытия
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Формат ввода времени: чч:мм или ч:мм";
	}
	else if (!ValidTime(DepartureTimeTextBox->Text, ArrivalTimeTextBox->Text)) {
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Разность между временем вылета и временем прилёта не может составлять больше 19 часов 20 минут";
	}
}

private: System::Void ArrivalTimeTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false;
	String^ text = ArrivalTimeTextBox->Text;
	if (text->Length == 4 && text[1] == ':') {
		text = String::Concat("0", text);
	}
	ArrivalTimeTextBox->Text = text;
}

private: System::Void TicketCostTextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	Info->Visible = false; 
	String^ text = TicketCostTextBox->Text;
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
	TicketCostTextBox->Text = text;
}

private: System::Void TicketCostTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (!ValidCost(TicketCostTextBox->Text)) { // проверка ввода цены билета
		e->Cancel = true;
		Info->Visible = true;
		Info->Text = "Цена билета должна быть числом больше нуля и меньше 10 млн.";
	}
}
};
}
