using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Games
{
    class Colored_Nomber : Moved_Nomber
    {
        public new String Get_Color()
        {
            Random rand = new Random();
            int rand_color = rand.Next(1, 9);
			switch (rand_color)
			{
				case 1:
					Color = "Red";
					break;
				case 2:
					Color = "DarkOrange";
					break;
				case 3:
					Color = "Green";
					break;
				case 4:
					Color = "Lime";
					break;
				case 5:
					Color = "Blue";
					break;
				case 6:
					Color = "Aqua";
					break;
				case 7:
					Color = "Purple";
					break;
				case 8:
					Color = "Navy";
					break;
				case 9:
					Color = "Black";
					break;
				default:
					break;
			}
			return Color;
        }

        public Colored_Nomber()
        {
			Nomber = 0;
			Min_Nomber = 0;
			Max_Nomber = 9;
			Location = 200;
			Color = "Black";
		}

        ~Colored_Nomber() { }
    }
}
