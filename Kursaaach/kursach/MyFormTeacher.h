#pragma once

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
	public ref class MyFormTeacher : public System::Windows::Forms::Form
	{
		Database^ db = gcnew Database();

	public:
		MyFormTeacher(void)
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
		~MyFormTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ mainDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NamePersonColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnamePersonColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubjectColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LimTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColQuestionColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MinAssessmentColumn;
	private: System::Windows::Forms::Button^ queryMathButton;
	private: System::Windows::Forms::Button^ queryProgButton;
	private: System::Windows::Forms::Button^ queryEconButton;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->SubjectColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LimTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColQuestionColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MinAssessmentColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->queryMathButton = (gcnew System::Windows::Forms::Button());
			this->queryProgButton = (gcnew System::Windows::Forms::Button());
			this->queryEconButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// mainDataGridView
			// 
			this->mainDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->mainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mainDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->NamePersonColumn,
					this->SurnamePersonColumn, this->SubjectColumn, this->LimTimeColumn, this->ColQuestionColumn, this->MinAssessmentColumn
			});
			this->mainDataGridView->Location = System::Drawing::Point(12, 12);
			this->mainDataGridView->Name = L"mainDataGridView";
			this->mainDataGridView->Size = System::Drawing::Size(854, 414);
			this->mainDataGridView->TabIndex = 0;
			// 
			// NamePersonColumn
			// 
			this->NamePersonColumn->DataPropertyName = L"name_t";
			this->NamePersonColumn->HeaderText = L"Имя";
			this->NamePersonColumn->Name = L"NamePersonColumn";
			this->NamePersonColumn->Width = 160;
			// 
			// SurnamePersonColumn
			// 
			this->SurnamePersonColumn->DataPropertyName = L"surname_t";
			this->SurnamePersonColumn->HeaderText = L"Фамилия";
			this->SurnamePersonColumn->Name = L"SurnamePersonColumn";
			this->SurnamePersonColumn->Width = 160;
			// 
			// SubjectColumn
			// 
			this->SubjectColumn->DataPropertyName = L"subject_";
			this->SubjectColumn->HeaderText = L"Предмет";
			this->SubjectColumn->Name = L"SubjectColumn";
			// 
			// LimTimeColumn
			// 
			this->LimTimeColumn->DataPropertyName = L"lim_time";
			this->LimTimeColumn->HeaderText = L"Лимит времени на тест";
			this->LimTimeColumn->Name = L"LimTimeColumn";
			this->LimTimeColumn->Width = 160;
			// 
			// ColQuestionColumn
			// 
			this->ColQuestionColumn->DataPropertyName = L"col_question";
			this->ColQuestionColumn->HeaderText = L"Количество вопросов";
			this->ColQuestionColumn->Name = L"ColQuestionColumn";
			this->ColQuestionColumn->Width = 130;
			// 
			// MinAssessmentColumn
			// 
			this->MinAssessmentColumn->DataPropertyName = L"min_assessment";
			this->MinAssessmentColumn->HeaderText = L"Минимальная оценка";
			this->MinAssessmentColumn->Name = L"MinAssessmentColumn";
			// 
			// queryMathButton
			// 
			this->queryMathButton->Location = System::Drawing::Point(873, 12);
			this->queryMathButton->Name = L"queryMathButton";
			this->queryMathButton->Size = System::Drawing::Size(135, 37);
			this->queryMathButton->TabIndex = 1;
			this->queryMathButton->Text = L"Вопросы по математике";
			this->queryMathButton->UseVisualStyleBackColor = true;
			this->queryMathButton->Click += gcnew System::EventHandler(this, &MyFormTeacher::queryMathButton_Click);
			// 
			// queryProgButton
			// 
			this->queryProgButton->Location = System::Drawing::Point(872, 55);
			this->queryProgButton->Name = L"queryProgButton";
			this->queryProgButton->Size = System::Drawing::Size(135, 37);
			this->queryProgButton->TabIndex = 2;
			this->queryProgButton->Text = L"Вопросы по программированию";
			this->queryProgButton->UseVisualStyleBackColor = true;
			this->queryProgButton->Click += gcnew System::EventHandler(this, &MyFormTeacher::queryProgButton_Click);
			// 
			// queryEconButton
			// 
			this->queryEconButton->Location = System::Drawing::Point(872, 98);
			this->queryEconButton->Name = L"queryEconButton";
			this->queryEconButton->Size = System::Drawing::Size(135, 37);
			this->queryEconButton->TabIndex = 3;
			this->queryEconButton->Text = L"Вопросы по экономике";
			this->queryEconButton->UseVisualStyleBackColor = true;
			this->queryEconButton->Click += gcnew System::EventHandler(this, &MyFormTeacher::queryEconButton_Click);
			// 
			// MyFormTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 434);
			this->Controls->Add(this->queryEconButton);
			this->Controls->Add(this->queryProgButton);
			this->Controls->Add(this->queryMathButton);
			this->Controls->Add(this->mainDataGridView);
			this->Name = L"MyFormTeacher";
			this->Text = L"MyFormTeacher";
			this->Load += gcnew System::EventHandler(this, &MyFormTeacher::MyFormTeacher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void fillDataGridView();
	private: void refreshDataGridView();
	private: void ExceptionMessage(Exception^ ex);
	private: System::Void MyFormTeacher_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void queryMathButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void queryProgButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void queryEconButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
