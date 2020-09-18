using System;
using System.Diagnostics; 

namespace teste_cs
{

    class TestModel
    {
        TestModel myTestModel;
        public TestModel(int count)
        {
            count--;
            if (count > 0)
            {
                myTestModel = new TestModel(count);
            }
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch gcTimer = new Stopwatch();
            Console.WriteLine("Current memory: " + GC.GetTotalMemory(false));
            Console.WriteLine("Press any key to create objs");
            Console.ReadLine();
            TimeSpan totalTime = TimeSpan.Zero;
            long totalTicks = 0;
            for (int i = 0; i < 10; i++)
            {
                GC.Collect();
                Console.WriteLine("beginning cycle " + i);
                Console.WriteLine("Current memory: " + GC.GetTotalMemory(false));
                TestModel tm = new TestModel(10000);
                tm = null;
                gcTimer.Restart();
                GC.Collect(2, GCCollectionMode.Forced, true);
                gcTimer.Stop();
                Console.WriteLine("Current memory: " + GC.GetTotalMemory(false));
                totalTime += gcTimer.Elapsed;
                Console.WriteLine("Garbage collection took {0} secs", gcTimer.Elapsed);
                totalTicks += gcTimer.ElapsedTicks;
                Console.WriteLine("Garbage collection took {0} ticks",
                gcTimer.ElapsedTicks);
                Console.WriteLine("--");
            }
            Console.WriteLine("GC took " + totalTime + " seconds");
            Console.WriteLine("GC took " + (totalTime.Seconds / 10) + " seconds");
            Console.WriteLine("GC took " + totalTicks + " ticks");
            Console.ReadLine();
        }
    }
}
