using Microsoft.Office.Interop.Excel;
using System.Collections.Generic;
using System.IO;

namespace WpfApp24.Services
{
    public static class ExcelService
    {
        public static void CreatePlayerReport(IEnumerable<Player> players, string path)
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
            workSheet.Name = "Players";

            workSheet.Cells.ClearContents();

            workSheet.Cells[1, 1] = "Id";
            workSheet.Cells[1, 2] = "Age";
            workSheet.Cells[1, 3] = "Name";
            workSheet.Cells[1, 4] = "Rank";
            workSheet.Cells[1, 5] = "Club";
            workSheet.Cells[1, 6] = "PowerPlay";

            int index = 2;
            foreach (var player in players)
            {
                workSheet.Cells[index, 1] = player.Id.ToString();
                workSheet.Cells[index, 2] = player.Age.ToString();
                workSheet.Cells[index, 3] = player.Name;
                workSheet.Cells[index, 6] = player.PowerPlay;

                ++index;
            }

            workSheet.Columns.AutoFit();

            workBook.Save();

            workBook?.Close();
        }
    }
}
