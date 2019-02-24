package org.jcairo;

public final class Operator {
       	 public final static Operator CLEAR = new Operator(0);
	  public final static Operator SOURCE = new Operator(1);
	  public final static Operator OVER = new Operator(2);
	  public final static Operator IN = new Operator(3);
	  public final static Operator OUT = new Operator(4);
	  public final static Operator ATOP = new Operator(5);
	  public final static Operator DEST = new Operator(6);
	  public final static Operator DEST_OVER = new Operator(7);
	  public final static Operator DEST_IN = new Operator(8);
	  public final static Operator DEST_OUT = new Operator(9);
	  public final static Operator DEST_ATOP = new Operator(10);
	  public final static Operator XOR = new Operator(11);
	  public final static Operator ADD = new Operator(12);
	  public final static Operator SATURATE = new Operator(13);
          public final static Operator MULTIPLY = new Operator(14);
	  public final static Operator SCREEN = new Operator(15);
	  public final static Operator OVERLAY = new Operator(16);
	  public final static Operator DARKEN = new Operator(17);
	  public final static Operator LIGHTEN = new Operator(18);
	  public final static Operator COLOR_DODGE = new Operator(19);
	  public final static Operator COLOR_BURN = new Operator(20);
	  public final static Operator HARD_LIGHT = new Operator(21);
	  public final static Operator SOFT_LIGHT = new Operator(22);
	  public final static Operator DIFFERENCE = new Operator(23);
	  public final static Operator EXCLUSION = new Operator(24);
	  public final static Operator HSL_HUE = new Operator(25);
	  public final static Operator HSL_SATURATION = new Operator(26);
	  public final static Operator HSL_COLOR = new Operator(27);
	  public final static Operator HSL_LUMINOSITY = new Operator(28);


           private final int index;

           public Operator(int i) {
		this.index = i;
          }
           public int index(){
              return this.index;
           }
}
