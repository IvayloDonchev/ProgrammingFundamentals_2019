using System;

namespace Discards
{
    public enum Rainbow { Red, Orange, Yellow, Green, Blue, Indigo,Violet }
    class Program
    {
        public static int MaxValue(int[] intArray, out int maxIndex)
        {
            int max = int.MinValue; //най-малката стойност, допустима за типа
            maxIndex = 0;
            for (int i = 0; i < intArray.Length; i++)
            {
                if (intArray[i] > max)
                {
                    max = intArray[i];
                    maxIndex = i;
                }
            }
            return max;
        }
        public static RGBColor FromRainbowClassic(Rainbow colorBand)
        {
            switch (colorBand)
            {
                case Rainbow.Red:
                    return new RGBColor(0xFF, 0x00, 0x00);
                case Rainbow.Orange:
                    return new RGBColor(0xFF, 0x7F, 0x00);
                case Rainbow.Yellow:
                    return new RGBColor(0xFF, 0xFF, 0x00);
                case Rainbow.Green:
                    return new RGBColor(0x00, 0xFF, 0x00);
                case Rainbow.Blue:
                    return new RGBColor(0x00, 0x00, 0xFF);
                case Rainbow.Indigo:
                    return new RGBColor(0x4B, 0x00, 0x82);
                case Rainbow.Violet:
                    return new RGBColor(0x94, 0x00, 0xD3);
                default:
                    throw new ArgumentException(message: "invalid enum value", paramName: nameof(colorBand));
            }
        }
        public static RGBColor FromRainbow(Rainbow colorBand) =>
            colorBand switch
            {
                Rainbow.Red => new RGBColor(0xFF, 0x00, 0x00),
                Rainbow.Orange => new RGBColor(0xFF, 0x7F, 0x00),
                Rainbow.Yellow => new RGBColor(0xFF, 0xFF, 0x00),
                Rainbow.Green => new RGBColor(0x00, 0xFF, 0x00),
                Rainbow.Blue => new RGBColor(0x00, 0x00, 0xFF),
                Rainbow.Indigo => new RGBColor(0x4B, 0x00, 0x82),
                Rainbow.Violet => new RGBColor(0x94, 0x00, 0xD3),
                _ => throw new ArgumentException(message: "invalid enum value", paramName: nameof(colorBand)),
            };
        public static void Main(string[] args)
        {
            int[] myArray = { 1, 8, 3, 6, 2, 5, 9, 3, 0, 2 };
            Console.WriteLine($"The maximum is {MaxValue(myArray, out int maxIndex)}");
            Console.WriteLine($"The first occurrence of this value is at pos {maxIndex + 1}");
            var max = MaxValue(myArray, out _);
            RGBColor color = FromRainbow(Rainbow.Indigo);
            Console.WriteLine(color);

            // Indices and ranges
            int[] mas = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            for(int i=1; i<=mas.Length; i++)
                Console.Write($"{ mas[^i]} ");  //  index from end operator ^
            Console.WriteLine();
           
            var words = new string[]
            {
                            // index from start    index from end
                "The",      // 0                   ^9
                "quick",    // 1                   ^8
                "brown",    // 2                   ^7
                "fox",      // 3                   ^6
                "jumped",   // 4                   ^5
                "over",     // 5                   ^4
                "the",      // 6                   ^3
                "lazy",     // 7                   ^2
                "dog"       // 8                   ^1
            };              // 9 (or words.Length) ^0

            Console.WriteLine($"The last word is {words[^1]}"); // writes "dog"
            var quickBrownFox = words[1..4];
            var lazyDog = words[^2..^0];
            var allWords = words[..];       // contains "The" through "dog".
            var firstPhrase = words[..4];   // contains "The" through "fox"
            var lastPhrase = words[6..];    // contains "the", "lazy" and "dog"
            Range phrase = 1..4;
            var text = words[phrase];
      
        }
    }
}
