using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace _01_My_First_Demo
{
    class program
    {
        static void Main(string[] args)
        {
            string s, b;
            int a, c;
            s = Console.ReadLine();
            string[] d = s.Split(' ');
            a = Convert.ToInt32(d[0]);
            b = (d[1]);
            c = Convert.ToInt32(d[2]);
            switch (b)
            {
                case "/":
                    Console.WriteLine(a / c);
                    break;
                case "*":
                    Console.WriteLine(a * c);
                    break;
                case "+":
                    Console.WriteLine(a + c);
                    break;
                case "-":
                    Console.WriteLine(a - c);
                    break;
                case "%":
                    Console.WriteLine(a % c);
                    break;
                default:
                    Console.WriteLine("ERROR");
                    break;
            }
            Console.ReadLine();
        }
    }
}