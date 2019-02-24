/**
 * 
 */
package org.jcairo;

public class Color {

	public static final Color BLACK = new Color();
	public static final Color WHITE = new Color(255, 255, 255);
	public static final Color BLUE = new Color(0, 0, 255);
	public static final Color RED = new Color(255, 0, 0);
	public static final Color GREEN = new Color(0, 255, 0);
	public static final Color YELLOW = new Color(255, 255, 0);
	public static final Color CYAN = new Color(0, 255, 255);
	public static final Color MAGENTA = new Color(255, 0, 255);
        public static final Color SMART_ORANGE = new Color(255, 179, 0);

        public int red;
	public int green;
	public int blue;
        public int alpha = 255;

        public double R;
	public double G;
	public double B;


        public Color() {
	}

	public Color(int r, int g, int b) {
		this.red = r;
		this.green = g;
		this.blue = b;
	}

       public Color(double r, double g, double b) {
		this.R = r;
		this.G = g;
		this.B = b;
	}

        public Color(int r, int g, int b, int a) {
		this.red = r;
		this.green = g;
		this.blue = b;
		this.alpha = a;
	}
}
