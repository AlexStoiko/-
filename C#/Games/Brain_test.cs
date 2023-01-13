using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace Games
{
    public partial class Brain_test : Form
    {
        int all_q = 5, nomber, rezult, nomber_question, rightquestions = 0, wrongquestions = 0;
		string strrezult = "";

        Show_Nomber show_nomber = new Show_Nomber(1);

		public Brain_test()
        {
            InitializeComponent();
        }

		String Random_qestion()
		{
			int paramerer = 0, min = 0, max = 9;
			rezult = 0;
			strrezult = "";
			Random rand = new Random();
			nomber_question = rand.Next(1, all_q);

			if (nomber_question == 1)
			{
				do
				{
					min = show_nomber.Out_Nomber();
					max = show_nomber.Out_Nomber();
				} while (min >= max);
			}
			else
			{
				paramerer = rand.Next(0, 9);
			}

			for (int i = 0; i < 7; i++)
			{
				label_nomber.ForeColor = ColorTranslator.FromHtml(show_nomber.Get_Color());
				label_nomber.Location = new Point(show_nomber.Get_Location(), 165);
				Update();
				nomber = show_nomber.Out_Nomber();
				Thread.Sleep(show_nomber.Get_Delay());
				label_nomber.Text = Convert.ToString(nomber);
				Update();
				Thread.Sleep(show_nomber.Get_Delay());
				label_nomber.Text = "";
				label_nomber.BackColor = ColorTranslator.FromHtml("Transparent");
				Update();
				switch (nomber_question)
				{
					case 1:
						if (nomber >= min && nomber <= max)
							rezult++;
						break;
					case 2:
						strrezult += Convert.ToString(nomber);
						break;
					case 3:
						if (nomber > paramerer)
							rezult++;
						break;
					case 4:
						if (nomber < paramerer)
							rezult++;
						break;
					case 5:
						if (nomber % paramerer == 0)
							rezult++;
						break;
					default:
						break;
				}
			}
			String question = "";

			switch (nomber_question)
			{
				case 1:
					question = "Сколько чисел находится в промежутке от " + Convert.ToString(min) + " до " + Convert.ToString(max) + "?";
					break;
				case 2:
					question = "Запишите всю последовательность чисел без пробелов";
					break;
				case 3:
					question = "Сколько чисел больше " + Convert.ToString(paramerer) + "?";
					break;
				case 4:
					question = "Сколько чисел меньше " + Convert.ToString(paramerer) + "?";
					break;
				case 5:
					question = "Сколько чисел делится на " + Convert.ToString(paramerer) + " без остатка?";
					break;
				default:
					break;
			}
			return question;
		}

        private void Brain_test_Load(object sender, EventArgs e)
        {
			label_answerr.Text = "0";
            label_answerw.Text = "0";
			show_nomber.Set_Difficulty(1);
			show_nomber.Set_Delay(1000);
		}

        private void button_start_Click(object sender, EventArgs e)
        {
			switch (show_nomber.Get_Difficulty())
			{
				case 1:
					show_nomber.Set_Delay(1000);
					break;
				case 2:
					show_nomber.Set_Delay(700);
					break;
				case 3:
					show_nomber.Set_Delay(500);
					break;
				default:
					break;
			}
			button_start.Enabled = false;
			show_nomber.Set_Min(Convert.ToInt32(mtextBox_Min.Text));
			show_nomber.Set_Max(Convert.ToInt32(mtextBox_Max.Text));
			label_question.Text = "";
			label_question.Text = Random_qestion();
			mtextBox_answer.Enabled = true;
		}

        private void button_ok_Click(object sender, EventArgs e)
        {
			mtextBox_answer.Enabled = false;
			button_ok.Enabled = false;
			string answer;
			bool exit = true;
			answer = mtextBox_answer.Text;
			if (nomber_question != 2)
			{
				if (answer == Convert.ToString(rezult))
				{
					rightquestions++;
					label_answerr.Text = Convert.ToString(rightquestions);
					exit = true;
				}
				else
				{
					wrongquestions++;
					label_answerw.Text = Convert.ToString(wrongquestions);
					exit = false;
				}
			}
			else
			{
				if (answer == strrezult)
				{
					rightquestions++;
					label_answerr.Text = Convert.ToString(rightquestions);
					exit = true;
				}
				else
				{
					wrongquestions++;
					label_answerw.Text = Convert.ToString(wrongquestions);
					button_start.Enabled = true;
					exit = false;
				}
			}
			mtextBox_answer.Text = "";
			label_question.Text = "";
			if (exit)
			{
				label_question.Text = Random_qestion();
				mtextBox_answer.Enabled = true;
				button_ok.Enabled = false;
				show_nomber.Down_Delay(100);
			}
			else
			{
				mtextBox_answer.Enabled = false;
				button_ok.Enabled = false;
				button_start.Enabled = true;
			}
		}

        private void mtextBox_answer_TextChanged(object sender, EventArgs e)
        {
			button_ok.Enabled = true;
		}

		private void легкийToolStripMenuItem_Click(object sender, EventArgs e)
        {
			show_nomber.Set_Difficulty(1);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background1.jpg");
			Update();
		}

        private void среднийToolStripMenuItem_Click(object sender, EventArgs e)
        {
			show_nomber.Set_Difficulty(2);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background2.jpg");
			Update();
		}

        private void сложныйToolStripMenuItem_Click(object sender, EventArgs e)
        {
			show_nomber.Set_Difficulty(3);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background3.jpg");
			Update();
		}

        private void mtextBox_Min_TextChanged(object sender, EventArgs e)
        {

        }

        private void mtextBox_Max_TextChanged(object sender, EventArgs e)
        {

        }

        private void меняетсяСкоростьПоявленияТекстаToolStripMenuItem_Click(object sender, EventArgs e)
		{
			show_nomber.Set_Difficulty(1);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background1.jpg");
			Update();
		}

		private void меняетсяСкоростьИРасположениеToolStripMenuItem_Click(object sender, EventArgs e)
		{
			show_nomber.Set_Difficulty(2);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background2.jpg");
			Update();
		}

		private void меняетсяЦветСкоростьИРасположениеToolStripMenuItem_Click(object sender, EventArgs e)
		{
			show_nomber.Set_Difficulty(3);
			BackgroundImage = Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\Brain_Test_Background3.jpg");
			Update();
		}

		private void справкаToolStripMenuItem_Click(object sender, EventArgs e)
        {
			About_Game_Brain_test newForm = new About_Game_Brain_test();
			newForm.Show();
		}

        private void выходToolStripMenuItem_Click(object sender, EventArgs e)
        {
			Close();
		}

    }
}
