using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

namespace Games
{
    class Field
    {
        private Button[] grid;          //массив кнопок
		private ImageList background;   //коллекция изображений Image
		private int user_marker;        //метка пользователя
		private int comp_marker;        //метка компьютера
		public int[,] massive;          //вспомогательный массив меток на поле
		private Cell cell;			

		public Field()
		{
			grid = new Button[9];
			massive = new int[3,3];
			background = new ImageList();
			cell = new Cell();
			background.ImageSize = new System.Drawing.Size(cell.Get_lenght(), cell.Get_height());
			background.Images.Add(Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\noliki.jpg")); // 1
			background.Images.Add(Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\krestiki.jpg")); // 2
			background.Images.Add(Image.FromFile(@"D:\ПИ-11\3_семестр\Программирование\Курсовой проект\C#\Games\nonefone.jpg")); // 2
			user_marker = 1;
			comp_marker = 2;
		}


		public int Get_nolick()
		{
			return cell.Get_nolick();
		}


		public int Get_krestic()
		{
			return cell.Get_krestic();
		}


		public void Set_grid(Button[] Grid)
        {
			grid = Grid;
		} 

		public int someone_win(int[,] massive)
		{
			for (int i = 0; i < 3; i++)
			{
				// по столбцам
				if (massive[0,i] == comp_marker && massive[1,i] == comp_marker && massive[2,i] == comp_marker)
				{
					return 1; 
					break;
				}

				if (massive[0,i] == user_marker && massive[1,i] == user_marker && massive[2,i] == user_marker)
				{
					return 2; 
					break;
				}

				// по строкам
				if (massive[i,0] == comp_marker && massive[i,1] == comp_marker && massive[i,2] == comp_marker)
				{
					return 1; 
					break;
				}

				if (massive[i,0] == user_marker && massive[i,1] == user_marker && massive[i,2] == user_marker)
				{
					return 2; 
					break;
				}
			}

			if (massive[0,0] == comp_marker && massive[1,1] == comp_marker && massive[2,2] == comp_marker)
			{
				return 1;
			}

			if (massive[0,0] == user_marker && massive[1,1] == user_marker && massive[2,2] == user_marker)
			{
				return 2;
			}

			if (massive[2,0] == comp_marker && massive[1,1] == comp_marker && massive[0,2] == comp_marker)
			{
				return 1;
			}

			if (massive[2,0] == user_marker && massive[1,1] == user_marker && massive[0,2] == user_marker)
			{
				return 2;
			}

			int mul = 1;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					mul *= massive[i,j];
				}
			}

			if (mul > 0) return 3;
			return 0;
		}

		public void tap_button(int jmg)
		{
			bool k = true;
			
			Random rand = new Random();
			try
			{
				int[,] future_mass = new int[3,3];

				for (int i = 0; i < 3; i++)
					for (int j = 0; j < 3; j++)
						future_mass[i,j] = massive[i,j];

				for (int i = 0; i < 3; i++)
					for (int j = 0; j < 3; j++)
						if (massive[i,j] == 0)
						{
							future_mass[i,j] = comp_marker;
							if (someone_win(future_mass) == 1)
							{ //если победил комп
								massive[i,j] = comp_marker;
								grid[3 * i + j].BackgroundImage = background.Images[jmg - 1];
								grid[3 * i + j].Enabled = false;
								goto exit;
							}
							else
							{
								future_mass[i,j] = user_marker;
								if (someone_win(future_mass) == 2)
								{ // если победил пользователь
									massive[i,j] = comp_marker;
									grid[3 * i + j].BackgroundImage = background.Images[jmg - 1];
									grid[3 * i + j].Enabled = false;
									goto exit;
								}
							}
							future_mass[i,j] = 0;
						}
				do
				{
					int ran = rand.Next(0, 8); 

					if (massive[ran / 3,ran % 3] == 0)
					{
						grid[ran].BackgroundImage = background.Images[jmg - 1];
						grid[ran].Enabled = false;
						massive[ran / 3,ran % 3] = jmg;
						k = false;
					}
				} while (k);
			}
			catch
            {
				MessageBox.Show("Что-то пошло не так");
			}
		exit:;
		}

		public void Set_Cell(int i, int j, int value)
		{
			massive[i,j] = value;
		}

		
		public void Set_grid_Image(int i, int img)
		{
			grid[i].BackgroundImage = background.Images[img];
		}


		public void grid_Enabled(int i, bool enab)
		{
			grid[i].Enabled = enab;
		}
		

		public void Set_user_marker(int user_mark)
		{
			this.user_marker = user_mark;
		}


		public void Set_comp_marker(int comp_marker)
		{
			this.comp_marker = comp_marker;
		}


		public int Get_user_marker()
		{
			return user_marker;
		}


		public int Get_comp_marker()
		{
			return comp_marker;
		}


		public ImageList Get_background()
		{
			return background;
		}


		~Field() { }
    }
}
