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
	public partial class Crosses_Zeros : Form
	{
		public Crosses_Zeros()
		{
			InitializeComponent();
			this.KeyDown += new KeyEventHandler(Crosses_Zeros_KeyDown);
		}

		Field field = new Field();
		bool flag_of_enter = false;

		Button[] Get_Grid()
		{
			Button[] grid = new Button[9];
			grid[0] = button00;
			grid[1] = button01;
			grid[2] = button02;
			grid[3] = button10;
			grid[4] = button11;
			grid[5] = button12;
			grid[6] = button20;
			grid[7] = button21;
			grid[8] = button22;
			return grid;
		}

		private void Играть_Click(object sender, EventArgs e)
		{
			field.Set_grid(Get_Grid());

			bool flag_of_not_finish_game = true;

			if (Играть.Enabled || crosscheckBox.Enabled)
			{

				flag_of_enter = true;
				crosscheckBox.Enabled = false;
				Играть.Enabled = false;

				for (int i = 0; i < 3; i++)
					for (int j = 0; j < 3; j++)
					{
						field.Set_Cell(i, j, 0);
					}

				for (int i = 0; i < 9; i++)
				{
					field.grid_Enabled(i, true);

					field.Set_grid_Image(i, 2);
				}

				if (crosscheckBox.Checked)
				{
					field.Set_user_marker(field.Get_krestic());

					field.Set_comp_marker(field.Get_nolick());
				}
				else
				{
					field.Set_user_marker(field.Get_nolick());

					field.Set_comp_marker(field.Get_krestic());
				}
			}

			switch (field.someone_win(field.massive))
			{
				case 1:
					MessageBox.Show("Вы проиграли");
					for (int i = 0; i < 9; i++)
					{
						field.grid_Enabled(i, false);
					}

					crosscheckBox.Enabled = true;
					Играть.Enabled = true;
					flag_of_not_finish_game = false;
					break;
				case 2:
					MessageBox.Show("Вы победили");
					for (int i = 0; i < 9; i++)
					{
						field.grid_Enabled(i, false);
					}

					crosscheckBox.Enabled = true;
					Играть.Enabled = true;
					flag_of_not_finish_game = false;
					break;
				case 3:
					MessageBox.Show("Ничья");
					for (int i = 0; i < 9; i++)
					{
						field.grid_Enabled(i, false);
					}

					crosscheckBox.Enabled = true;
					Играть.Enabled = true;
					flag_of_not_finish_game = false;
					break;
			}

			if (flag_of_not_finish_game && !(crosscheckBox.Checked && flag_of_enter))
			{
				field.tap_button(field.Get_comp_marker());

				switch (field.someone_win(field.massive))
				{
					case 1:
						MessageBox.Show("Вы проиграли");
						for (int i = 0; i < 9; i++)
						{
							field.grid_Enabled(i, false);
						}

						crosscheckBox.Enabled = true;
						Играть.Enabled = true;
						flag_of_not_finish_game = false;
						break;
					case 2:
						MessageBox.Show("Вы победили");
						for (int i = 0; i < 9; i++)
						{
							field.grid_Enabled(i, false);
						}

						crosscheckBox.Enabled = true;
						Играть.Enabled = true;
						flag_of_not_finish_game = false;
						break;
					case 3:
						MessageBox.Show("Ничья");
						for (int i = 0; i < 9; i++)
						{
							field.grid_Enabled(i, false);
						}

						crosscheckBox.Enabled = true;
						Играть.Enabled = true;
						flag_of_not_finish_game = false;
						break;
				}
			}
			flag_of_enter = false;
		}


		private void button00_Click(object sender, EventArgs e)
		{
			button00.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button00.Enabled = false;
			field.Set_Cell(0, 0, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button01_Click(object sender, EventArgs e)
		{
			button01.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button01.Enabled = false;
			field.Set_Cell(0, 1, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button02_Click(object sender, EventArgs e)
		{
			button02.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button02.Enabled = false;
			field.Set_Cell(0, 2, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button10_Click(object sender, EventArgs e)
		{
			button10.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button10.Enabled = false;
			field.Set_Cell(1, 0, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button11_Click(object sender, EventArgs e)
		{
			button11.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button11.Enabled = false;
			field.Set_Cell(1, 1, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button12_Click(object sender, EventArgs e)
		{
			button12.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button12.Enabled = false;
			field.Set_Cell(1, 2, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button20_Click(object sender, EventArgs e)
		{
			button20.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button20.Enabled = false;
			field.Set_Cell(2, 0, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button21_Click(object sender, EventArgs e)
		{
			button21.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button21.Enabled = false;
			field.Set_Cell(2, 1, field.Get_user_marker());

			Играть_Click(sender, e);
		}


		private void button22_Click(object sender, EventArgs e)
		{
			button22.BackgroundImage = field.Get_background().Images[field.Get_user_marker() - 1];
			button22.Enabled = false;
			field.Set_Cell(2, 2, field.Get_user_marker());

			Играть_Click(sender, e);
		}



        private void Crosses_Zeros_KeyDown(object sender, KeyEventArgs e)
        {

			if (e.KeyCode == Keys.NumPad7)
			{
				if (this.button00.Enabled == true)
				{
					button00_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad8)
			{
				if (this.button01.Enabled == true)
				{
					button01_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad9)
			{
				if (this.button02.Enabled == true)
				{
					button02_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad4)
			{
				if (this.button10.Enabled == true)
				{
					button10_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad5)
			{
				if (this.button11.Enabled == true)
				{
					button11_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad6)
			{
				if (this.button12.Enabled == true)
				{
					button12_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad1)
			{
				if (this.button20.Enabled == true)
				{
					button20_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad2)
			{
				if (this.button21.Enabled == true)
				{
					button21_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad3)
			{
				if (this.button22.Enabled == true)
				{
					button22_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.Enter)
			{
				if (this.Играть.Enabled == true)
				{
					Играть_Click(sender, e);
				}
			}

			if (e.KeyCode == Keys.NumPad0)
			{
				if (crosscheckBox.Checked)
				{
					crosscheckBox.CheckState = CheckState.Unchecked;
				}
				else
				{
					crosscheckBox.CheckState = CheckState.Checked;
				}
			}

			if (e.KeyCode == Keys.Subtract)
			{
				Close();
			}
		}

        private void button_about_game_Click(object sender, EventArgs e)
        {
			About_Game_Crosses_Zeros newForm = new About_Game_Crosses_Zeros();
			newForm.Show();
		}
    }
}
