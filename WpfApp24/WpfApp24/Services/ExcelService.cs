using Microsoft.Office.Interop.Excel;
using System.Collections.Generic;
using System.IO;

namespace WpfApp24.Services
{
    public static class ExcelService
    {
        public static void CreateTicketReport(IEnumerable<Ticket> tickets, string path)
        {
            if (string.IsNullOrEmpty(path) && File.Exists(path))
            {
                System.Windows.MessageBox.Show("Неверный путь");
                return;
            }

            var excel = new Application();

            excel.Visible = false;
            excel.DisplayAlerts = false;

            _Workbook workBook = excel.Workbooks.Open(path);
            _Worksheet workSheet = (_Worksheet)workBook.ActiveSheet;
            workSheet.Name = "Tickets";

            workSheet.Cells.ClearContents();

            workSheet.Cells[1, 1] = "Id";
            workSheet.Cells[1, 2] = "Number";
            workSheet.Cells[1, 3] = "Name";
            workSheet.Cells[1, 4] = "Surname";
            workSheet.Cells[1, 5] = "Departure_time";
            workSheet.Cells[1, 6] = "Arrival_time";
            workSheet.Cells[1, 7] = "Flight_number";
            workSheet.Cells[1, 8] = "Departure_places";
            workSheet.Cells[1, 9] = "Arrivals_places";

            int index = 2;
            foreach (var ticket in tickets)
            {
                workSheet.Cells[index, 1] = ticket.Id.ToString();
                workSheet.Cells[index, 3] = ticket.Name;
                workSheet.Cells[index, 5] = ticket.DepartureTime.ToString();
                workSheet.Cells[index, 6] = ticket.ArrivalTime.ToString();
                workSheet.Cells[index, 7] = ticket.FlightNumber.ToString();
                workSheet.Cells[index, 8] = ticket.DeparturePlaces;
                workSheet.Cells[index, 9] = ticket.ArrivalsPlaces;

                ++index;
            }

            workSheet.Columns.AutoFit();

            workBook.Save();

            workBook?.Close();
        }
    }
}
