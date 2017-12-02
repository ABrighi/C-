using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;
using System.Threading;

namespace project
{
    class Program
    {
        static SerialPort arduino;
        static void Main(string[] args)
        {
            arduino = new SerialPort("COM3", 9600);
            arduino.Open();
            while (true)
            {
                arduino.Write("1");
                Console.WriteLine(arduino.ReadLine());
                Thread.Sleep(10000);
            }
        }
    }
}
