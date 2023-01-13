using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Games
{
    class Moved_Nomber : Normal_Nomber
    {
        public new int Get_Location()
        {
            Random rand = new Random();
            Location = rand.Next(10, 420);
            return Location;
        }

        public Moved_Nomber()
        {
            Nomber = 0;
            Min_Nomber = 0;
            Max_Nomber = 9;
            Location = 200;
            Color = "Black";
        }

        ~Moved_Nomber() { }
    }
}
