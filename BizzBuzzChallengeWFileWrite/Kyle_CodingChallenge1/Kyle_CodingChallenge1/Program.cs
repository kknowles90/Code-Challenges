using System;

class BizzBuzzGame
{
    static void Main()
    {
        Console.WriteLine("Enter the upper bound: ");
        int upperBound = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter the Bizz divisor: ");
        int bizz = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter the Buzz divisor: ");
        int buzz = Convert.ToInt32(Console.ReadLine());

        //Sets the variables in order to keep track of the total count
        int bizzCount = 0;
        int buzzCount = 0;
        int bizzBuzzCount = 0;

        //Creates loop to interate the console output and adds count to each catagory
        for (int i = 1; i <= upperBound; i++)
        {
            if (i % bizz == 0 && i % buzz == 0)
            {
                Console.WriteLine("Bizz Buzz");
                bizzBuzzCount++;
            }
            else if (i % bizz == 0)
            {
                Console.WriteLine("Bizz");
                bizzCount++;
            }
            else if (i % buzz == 0)
            {
                Console.WriteLine("Buzz");
                buzzCount++;
            }
            else
            {
                Console.WriteLine(i);
            }
        }

        //Shows total number of times Bizz, Buzz, and Bizz Buzz occured 
        Console.WriteLine("\nBizz Count: " + bizzCount);
        Console.WriteLine("Buzz Count: " + buzzCount);
        Console.WriteLine("Bizz Buzz Count: " + bizzBuzzCount);
    }
}



