#include "MyForm.h"
#include "MyFormTeacher.h"
#include "QuestionProg.h"

using namespace System;
using namespace System::Windows::Forms;



namespace kursach
{
	void QuestionProg::ExceptionMessage(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// заполняет mainDataGridView данными из бд
	void QuestionProg::fillDataGridView()
	{
		// задавая DataSource dataGridView выберет колонки с данными сам
		DataTable^ dt = db->loadQuestionProg()->Tables["QuestionProg"];
		mainDataGridView->DataSource = db->loadQuestionProg()->Tables["QuestionProg"];
		mainDataGridView->DataSource = dt;
	}

	// обновляет информацию в mainDataGridView
	void QuestionProg::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// вызовется перед отображением формы
	void QuestionProg::QuestionProg_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}