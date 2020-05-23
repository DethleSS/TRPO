#pragma once

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для QuestionProg
	/// </summary>
	public ref class QuestionProg : public System::Windows::Forms::Form
	{
		Database^ db = gcnew Database();
	public:
		QuestionProg(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			mainDataGridView->AutoGenerateColumns = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QuestionProg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ mainDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuestionMColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnswerProgColumn;












	protected:
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
			this->mainDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->IdColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuestionMColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AnswerProgColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// mainDataGridView
			// 
			this->mainDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->mainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mainDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdColumn,
					this->QuestionMColumn, this->AnswerProgColumn
			});
			this->mainDataGridView->Location = System::Drawing::Point(1, 1);
			this->mainDataGridView->Name = L"mainDataGridView";
			this->mainDataGridView->Size = System::Drawing::Size(971, 414);
			this->mainDataGridView->TabIndex = 1;
			// 
			// IdColumn
			// 
			this->IdColumn->DataPropertyName = L"Id";
			this->IdColumn->HeaderText = L"Номер";
			this->IdColumn->Name = L"IdColumn";
			this->IdColumn->Width = 50;
			// 
			// QuestionMColumn
			// 
			this->QuestionMColumn->DataPropertyName = L"questionp";
			this->QuestionMColumn->HeaderText = L"Вопрос";
			this->QuestionMColumn->Name = L"QuestionMColumn";
			this->QuestionMColumn->Width = 150;
			// 
			// AnswerProgColumn
			// 
			this->AnswerProgColumn->DataPropertyName = L"answerp";
			this->AnswerProgColumn->HeaderText = L"Ответ";
			this->AnswerProgColumn->Name = L"AnswerProgColumn";
			this->AnswerProgColumn->Width = 700;
			// 
			// QuestionProg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->mainDataGridView);
			this->Name = L"QuestionProg";
			this->Text = L"QuestionProg";
			this->Load += gcnew System::EventHandler(this, &QuestionProg::QuestionProg_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void fillDataGridView();
	private: void refreshDataGridView();
	private: void ExceptionMessage(Exception^ ex);
	private: System::Void QuestionProg_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
