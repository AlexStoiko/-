using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Games
{
    public partial class Main_menu : Form
    {
        public Main_menu()
        {
            InitializeComponent();
        }

        private void button_test_Click(object sender, EventArgs e)
        {
            Brain_test newForm = new Brain_test();
            newForm.Show();
        }

        private void button_C_Z_Click(object sender, EventArgs e)
        {
            Crosses_Zeros newForm = new Crosses_Zeros();
            newForm.Show();
        }

       
        private void button_exit_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void list_Click(object sender, EventArgs e)
        {
            About_Games newForm = new About_Games();
            newForm.Show();
        }
    }
}
