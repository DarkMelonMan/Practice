#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Description
	/// </summary>
	public ref class Description : public System::Windows::Forms::Form
	{
	public:
		Description(void)
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
		~Description()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ DescriptionText;
	protected:
	private: System::Windows::Forms::Button^ CloseButton;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Description::typeid));
			this->DescriptionText = (gcnew System::Windows::Forms::TextBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DescriptionText
			// 
			this->DescriptionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DescriptionText->Location = System::Drawing::Point(16, 15);
			this->DescriptionText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DescriptionText->Multiline = true;
			this->DescriptionText->Name = L"DescriptionText";
			this->DescriptionText->ReadOnly = true;
			this->DescriptionText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->DescriptionText->Size = System::Drawing::Size(413, 400);
			this->DescriptionText->TabIndex = 0;
			this->DescriptionText->TabStop = false;
			this->DescriptionText->Text = resources->GetString(L"DescriptionText.Text");
			// 
			// CloseButton
			// 
			this->CloseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CloseButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->CloseButton->Location = System::Drawing::Point(16, 423);
			this->CloseButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(415, 28);
			this->CloseButton->TabIndex = 1;
			this->CloseButton->Text = L"Закрыть";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &Description::CloseButton_Click);
			// 
			// Description
			// 
			this->AcceptButton = this->CloseButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->CloseButton;
			this->ClientSize = System::Drawing::Size(444, 449);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->DescriptionText);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(462, 496);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(462, 496);
			this->Name = L"Description";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	};
}

