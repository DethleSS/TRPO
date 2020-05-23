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
    /// Логика взаимодействия для Payment.xaml
    /// </summary>
    
    
    public partial class Payment : Window
    {
        public string Namez { get; set; }

        public Payment()
        {
            InitializeComponent();
        }

        void ClickButtonPay(object sender, RoutedEventArgs e)
        {
            Help.AddTicket();
            
            MessageBox.Show("Билет куплен");
        }

    }
}
