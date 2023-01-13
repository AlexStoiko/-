using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Games
{
    class Cell
    {
        private int nolick;
        private int krestik;
        private int height;
        private int lenght;


        public Cell()
        {
            nolick = 1;
            krestik = 2;
            height = 200;
            lenght = 200;
        }


        public int Get_nolick()
        {
            return nolick;
        }


        public int Get_krestic()
        {
            return krestik;
        }


        public int Get_height()
        {
            return height;
        }


        public int Get_lenght()
        {
            return lenght;
        }


        public void Set_nolick(int n)
        {
            nolick = n;
        }


        public void Set_krestic(int n)
        {
            krestik = n;
        }


        public void Set_height(int n)
        {
            height = n;
        }


        public void Set_lenght(int n)
        {
            lenght = n;
        }
    }
}
