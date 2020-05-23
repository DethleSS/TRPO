#include "MyForm.h"
#include "MyFormTeacher.h"
#include "QuestionMath.h"

using namespace System;
using namespace System::Windows::Forms;



namespace kursach
{
	void QuestionMath::ExceptionMessage(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// заполняет mainDataGridView данными из бд
	void QuestionMath::fillDataGridView()
	{
		// задавая DataSource dataGridView выберет колонки с данными сам
		DataTable^ dt = db->loadQuestionMath()->Tables["QuestionMath"];
		mainDataGridView->DataSource = db->loadQuestionMath()->Tables["QuestionMath"];
		mainDataGridView->DataSource = dt;
	}

	// обновляет информацию в mainDataGridView
	void QuestionMath::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// вызовется перед отображением формы
	void QuestionMath::QuestionMath_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}