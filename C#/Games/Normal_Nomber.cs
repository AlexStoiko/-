using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Games
{
    class Normal_Nomber
    {
		protected int Nomber;
		protected int Max_Nomber;
		protected int Min_Nomber;
        protected int Location;
        protected String Color;

        public void Set_Max(int max)
        {
            Max_Nomber = max;
        }

		public void Set_Min(int min)
        {
            Min_Nomber = min;
        }

		public int Out_Nomber()
        {
            Random rand = new Random();
            Nomber = rand.Next(Min_Nomber, Max_Nomber);
            return Nomber;
        }

        public int Get_Location()
        {
            return Location;
        }

        public String Get_Color()
        {
            return Color;
        }

        public Normal_Nomber()
        {
            Nomber = 0;
            Min_Nomber = 0;
            Max_Nomber = 9;
            Location = 200;
            Color = "Black";
        }

        ~Normal_Nomber() { }
	}
}
