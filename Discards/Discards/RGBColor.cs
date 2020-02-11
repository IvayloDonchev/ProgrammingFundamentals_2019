using System;
using System.Collections.Generic;
using System.Text;

namespace Discards
{
    public class RGBColor
    {
        private int red, green, blue; 
        public RGBColor()
        {
            red = green = blue = 0;
        }
        public RGBColor(int r, int g, int b)
        {
            red = r;
            green = g;
            blue = b;
        }
        public override string ToString()
        {
            return $"({red},{green},{blue})";
        }
    }
}
