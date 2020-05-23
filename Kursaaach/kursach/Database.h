#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace kursach
{
	public ref class Database
	{
		String^ connectionString = "Data Source=.\\SQLEXPRESS;Initial Catalog=kursach;Integrated Security=True";

		DataSet^ loadData(String^ query, String^ tableName);
		Object^ loadValue(String^ query);
		void ExceptionMessage(Exception^ ex);

	public:
		DataSet^ loadPerson();
		DataSet^ loadPerson(String^ condition);
		DataSet^ loadTeacher();
		DataSet^ loadQuestionEcon();
		DataSet^ loadQuestionProg();
		DataSet^ loadQuestionMath();

		void	 executeQuery(String^ query);
	};
}