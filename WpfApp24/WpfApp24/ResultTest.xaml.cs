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
    /// Логика взаимодействия для ResultTest.xaml
    /// </summary>
    public partial class ResultTest : Window
    {
        public string Result
        {
            set
            {
                resultTextBox.Text = value;
            }
        }

        public void ButtonClick(object sender, RoutedEventArgs e)
        {

        }
        public ResultTest()
        {
            InitializeComponent();
        }
    }
}
