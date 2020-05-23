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

	// ��������� mainDataGridView ������� �� ��
	void QuestionProg::fillDataGridView()
	{
		// ������� DataSource dataGridView ������� ������� � ������� ���
		DataTable^ dt = db->loadQuestionProg()->Tables["QuestionProg"];
		mainDataGridView->DataSource = db->loadQuestionProg()->Tables["QuestionProg"];
		mainDataGridView->DataSource = dt;
	}

	// ��������� ���������� � mainDataGridView
	void QuestionProg::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// ��������� ����� ������������ �����
	void QuestionProg::QuestionProg_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}