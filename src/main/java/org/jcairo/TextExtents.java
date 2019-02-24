package org.jcairo; 

import java.util.List;
import java.util.ArrayList; 

public class TextExtents{

     
      
 
  private double [] extents = new double[6];
 
   public double [] getExtents() {
         extents[0] = x_bearing();
         extents[1] = y_bearing();
	 extents[2] = width();
	 extents[3] = height();
         extents[4] = x_advance();
         extents[5] = y_advance();
          return extents;
    }

   public double value(int indexNumber){

          return this.extents[indexNumber];
   }

   
 
    public static native double x_bearing();

    public native double y_bearing();

    public native double  width();

    public native  double  height();

    public native double x_advance();

    public native double y_advance();

  
}
