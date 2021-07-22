using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bt3
{
    class Program
    {
        static void Main(string[] args)
        {
            const int a = 100;
            float toan, tienganh, vatli, percent;
            string name;
            percent = 0;

            Console.WriteLine("Nhap ten hoc sinh : ");
            name = Console.ReadLine();

            do
            {
                Console.WriteLine("Nhap diem mon toan :");
            } while (float.TryParse(Console.ReadLine(), out toan) == false);

            do
            {
                Console.WriteLine("Nhap diem mon tienganh :");
            } while (float.TryParse(Console.ReadLine(), out tienganh) == false);

            do
            {
                Console.WriteLine("Nhap diem mon vatli :");
            } while (float.TryParse(Console.ReadLine(), out vatli) == false);

            percent = (toan + tienganh + vatli) / 3;
            Console.WriteLine("Student Name : " + name);
            Console.WriteLine("Diem mon toan = {0} " , toan);
            Console.WriteLine("Diem mon tieng anh : " + tienganh);
            Console.WriteLine("Diem mon vat li : " + vatli);
            Console.WriteLine("Diem trung binh : " + percent);

            Console.ReadKey();









        }
    }
}
