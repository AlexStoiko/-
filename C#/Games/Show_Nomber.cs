using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Games
{
    class Show_Nomber
    {
		private Normal_Nomber N_Nomber;
		private Moved_Nomber M_Nomber;
		private Colored_Nomber C_Nomber;
		private int Delay;
		private int Difficulty;

		public void Set_Max(int max)
        {
			switch (Difficulty)
			{
				case 1:
					N_Nomber.Set_Max(max);
					break;
				case 2:
					M_Nomber.Set_Max(max);
					break;
				case 3:
					C_Nomber.Set_Max(max);
					break;
				default:
					break;
			}
		}

		public void Set_Min(int min)
        {
			switch (Difficulty)
			{
				case 1:
					N_Nomber.Set_Min(min);
					break;
				case 2:
					M_Nomber.Set_Min(min);
					break;
				case 3:
					C_Nomber.Set_Min(min);
					break;
				default:
					break;
			}
		}

		public void Set_Difficulty(int dif)
        {
			Difficulty = dif;
		}

		public int Get_Difficulty()
        {
			return Difficulty;
		}

		public int Out_Nomber()
        {
			int Nomber = 0;
			switch (Difficulty)
			{
				case 1:
					Nomber = N_Nomber.Out_Nomber();
					break;
				case 2:
					Nomber = M_Nomber.Out_Nomber();
					break;
				case 3:
					Nomber = C_Nomber.Out_Nomber();
					break;
				default:
					break;
			}
			return Nomber;
		}

		public int Get_Delay()
        {
			return Delay;
		}

		public void Set_Delay(int delay)
        {
			Delay = delay;
		}

		public int Down_Delay(int down)
        {
			if (Delay >= down)
			{
				Delay = Delay - down;
			}
			return Delay;
		}

		public String Get_Color()
        {
			String Color = "Black";
			switch (Difficulty)
			{
				case 1:
					Color = N_Nomber.Get_Color();
					break;
				case 2:
					Color = M_Nomber.Get_Color();
					break;
				case 3:
					Color = C_Nomber.Get_Color();
					break;
				default:
					break;
			}
			return Color;
		}

		public int Get_Location()
        {
			int Location = 200;
			switch (Difficulty)
			{
				case 1:
					Location = N_Nomber.Get_Location();
					break;
				case 2:
					Location = M_Nomber.Get_Location();
					break;
				case 3:
					Location = C_Nomber.Get_Location();
					break;
				default:
					break;
			}
			return Location;
		}

		public Show_Nomber(int dif)
        {
			Difficulty = dif;
			N_Nomber = new Normal_Nomber();
			M_Nomber = new Moved_Nomber();
			C_Nomber = new Colored_Nomber();
		}

		~Show_Nomber() { }
	}
}
