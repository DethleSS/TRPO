using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace WpfApp24
{
    /// <summary>
    /// Логика взаимодействия для Task_22.xaml
    /// </summary>
    public partial class Task_22 : Window
    {
        private void ButtonClickFixLine(object sender, RoutedEventArgs e)
        {
            MyLabel.Content = new String(MyTextBox.Text.Distinct().OrderBy(c => c).ToArray());
        }


        public Task_22()
        {
            InitializeComponent();
        }
    }
}
