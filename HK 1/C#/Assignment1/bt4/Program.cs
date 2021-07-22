using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bt4
{
    class Program
    {
        static void Main(string[] args)
        {
            int radius = 4;
            const double PI = 3.14159;
            double circum, area;
            area = PI * radius * radius;
            circum = 2 * PI * radius;

            Console.WriteLine("Ban kinh = {0} , PI = {1}", radius, PI);
            Console.WriteLine("Dien tich = {0}", area);
            Console.WriteLine("Chu vi = {0}", circum);
            Console.ReadKey();
        }
    }
}
