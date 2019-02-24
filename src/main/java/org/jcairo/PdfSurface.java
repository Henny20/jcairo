package org.jcairo;

import org.jcairo.CairoSurface;

public class PdfSurface extends CairoSurface{

    // protected PdfSurface(CairoSurface other, Content content, int width, int height){ 
           //  super(other, content, width, height);
      

	protected PdfSurface(int id) {
		super(id);
	}
     
        public PdfSurface(String filename, double width, double height){
                     super(filename, width, height);  
                         createSurfacePdf(filename, width, height);                  
            }
   
       public native void createSurfacePdf(String filename, double width, double height);
}
