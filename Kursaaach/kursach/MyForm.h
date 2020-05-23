#pragma once

#include "Database.h"
#include "MyFormTeacher.h"

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Database^ db = gcnew Database();

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mainDataGridView->AutoGenerateColumns = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  mainDataGridView;
	private: System::Windows::Forms::Button^ queryTeacherButton;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NamePersonColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnamePersonColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatronymicPersonColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GroupNumberColumn;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->NamePersonColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SurnamePersonColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatronymicPersonColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GroupNumberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->queryTeacherButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// mainDataGridView
			// 
			this->mainDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->mainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mainDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NamePersonColumn,
					this->SurnamePersonColumn, this->PatronymicPersonColumn, this->GroupNumberColumn
			});
			this->mainDataGridView->Location = System::Drawing::Point(12, 12);
			this->mainDataGridView->Name = L"mainDataGridView";
			this->mainDataGridView->Size = System::Drawing::Size(656, 414);
			this->mainDataGridView->TabIndex = 0;
			// 
			// NamePersonColumn
			// 
			this->NamePersonColumn->DataPropertyName = L"name_";
			this->NamePersonColumn->HeaderText = L"Имя";
			this->NamePersonColumn->Name = L"NamePersonColumn";
			this->NamePersonColumn->Width = 160;
			// 
			// SurnamePersonColumn
			// 
			this->SurnamePersonColumn->DataPropertyName = L"surname";
			this->SurnamePersonColumn->HeaderText = L"Фамилия";
			this->SurnamePersonColumn->Name = L"SurnamePersonColumn";
			this->SurnamePersonColumn->Width = 160;
			// 
			// PatronymicPersonColumn
			// 
			this->PatronymicPersonColumn->DataPropertyName = L"patronymic";
			this->PatronymicPersonColumn->HeaderText = L"Отчество";
			this->PatronymicPersonColumn->Name = L"PatronymicPersonColumn";
			this->PatronymicPersonColumn->Width = 160;
			// 
			// GroupNumberColumn
			// 
			this->GroupNumberColumn->DataPropertyName = L"group_number";
			this->GroupNumberColumn->HeaderText = L"Номер группы ";
			this->GroupNumberColumn->Name = L"GroupNumberColumn";
			this->GroupNumberColumn->Width = 130;
			// 
			// queryTeacherButton
			// 
			this->queryTeacherButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->queryTeacherButton->Location = System::Drawing::Point(680, 12);
			this->queryTeacherButton->Name = L"queryTeacherButton";
			this->queryTeacherButton->Size = System::Drawing::Size(188, 34);
			this->queryTeacherButton->TabIndex = 1;
			this->queryTeacherButton->Text = L"Запрос у преподователя";
			this->queryTeacherButton->UseVisualStyleBackColor = true;
			this->queryTeacherButton->Click += gcnew System::EventHandler(this, &MyForm::queryTeacherButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 434);
			this->Controls->Add(this->queryTeacherButton);
			this->Controls->Add(this->mainDataGridView);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void fillDataGridView();
	private: void refreshDataGridView();
	private: void ExceptionMessage(Exception^ ex);
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void queryTeacherButton_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
