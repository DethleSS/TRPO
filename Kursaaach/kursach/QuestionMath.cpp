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

	// ��������� mainDataGridView ������� �� ��
	void QuestionMath::fillDataGridView()
	{
		// ������� DataSource dataGridView ������� ������� � ������� ���
		DataTable^ dt = db->loadQuestionMath()->Tables["QuestionMath"];
		mainDataGridView->DataSource = db->loadQuestionMath()->Tables["QuestionMath"];
		mainDataGridView->DataSource = dt;
	}

	// ��������� ���������� � mainDataGridView
	void QuestionMath::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// ��������� ����� ������������ �����
	void QuestionMath::QuestionMath_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}