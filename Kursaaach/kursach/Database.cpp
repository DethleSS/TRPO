#include "Database.h"

namespace kursach
{
	// вернёт загруженную по запросу query таблицу с инменем tableName
	DataSet^ Database::loadData(String^ query, String^ tableName)
	{
		// сюда буду записаны загруженные из бд данные
		DataSet^ res = gcnew DataSet();

		// объект подключения к бд
		SqlConnection^ connection;

		try
		{
			// инициализация подключения строкой подключения
			connection = gcnew SqlConnection(connectionString);

			// открытие подключения
			connection->Open();

			// адаптер данных позволяет преобразовать данные из бд в валидные для работы данные для C++
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, connection);

			// загрузка данных из таблицы в бд
			adapter->FillSchema(res, SchemaType::Source);
			adapter->Fill(res, tableName);

			// закрытие подключения
			connection->Close();
		}
		catch (System::Exception^ ex)
		{
			// сделано для того, чтобы даже при возникновении исключения при работе с бд
			// подключение было всё равно закрыто
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
			ExceptionMessage(ex);
		}

		return res;
	}

	// возвращает значение, загруженное по запросу
	Object^ Database::loadValue(String^ query)
	{
		// значение, которое загрузится по переданному запросу
		Object^ res;

		// объект подключения
		SqlConnection^ connection;

		try
		{
			// инициализация подключения
			connection = gcnew SqlConnection(connectionString);

			// открытие подключения
			connection->Open();

			// объект команды
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// функция ExecuteScalar выполнит запрос и вернёт возвращённое базой данных значение
			res = command->ExecuteScalar();

			// закрытие подключения
			connection->Close();
		}
		catch (System::Exception^ ex)
		{
			// при возникновении исключения подключение всё равно закроется
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
			ExceptionMessage(ex);
		}

		return res;
	}

	void Database::ExceptionMessage(Exception^ ex)
	{
		using namespace System::Windows::Forms;
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// загружает все ученики
	DataSet^ Database::loadPerson()
	{
		String^ query = "SELECT name_, surname, patronymic, group_number FROM Person";

		String^ tableName = "Person";

		return loadData(query, tableName);
	}

	// загружает все ученики по определённому условию
	DataSet^ Database::loadPerson(String^ condition)
	{
		String^ query = "SELECT name_, surname, patronymic, group_number FROM Person";

		String^ tableName = "Person";

		return loadData(query, tableName);
	}
	
	// загрузит всю таблицу Teacher
	DataSet^ Database::loadTeacher()
	{
		return loadData("SELECT name_t, surname_t, lim_time, col_question, min_assessment, subject_ FROM Teacher", "Teacher");
	}

	// загрузит всю таблицу loadQuestionEcon
	DataSet^ Database::loadQuestionEcon()
	{
		return loadData("SELECT * FROM QuestionEcon", "QuestionEcon");
	}


	// загрузит всю таблицу loadQuestionProg
	DataSet^ Database::loadQuestionProg()
	{
		return loadData("SELECT * FROM QuestionProg", "QuestionProg");
	}

	// загрузит всю таблицу loadQuestionMath
	DataSet^ Database::loadQuestionMath()
	{
		return loadData("SELECT * FROM QuestionMath", "QuestionMath");
	}

	// выполняет запрос
	void Database::executeQuery(String^ query)
	{
		// объект подключения
		SqlConnection^ connection;

		try
		{
			// инициализация объекта подключения
			connection = gcnew SqlConnection(connectionString);

			// открытие подключения
			connection->Open();

			// создание объекта команды
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// ExecuteNonQuery выполнит запрос, лежащий в объекте SqlCommand
			command->ExecuteNonQuery();

			// закрытие подключения
			connection->Close();
		}
		catch (System::Exception^ ex)
		{
			// при возникновении исключения поделючения закроется всё равно
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
			throw ex;
		}
	}
}