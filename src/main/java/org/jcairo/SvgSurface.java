package org.jcairo;

import org.jcairo.CairoSurface;

public class SvgSurface extends CairoSurface{

    // protected SvgSurface(CairoSurface other, Content content, int width, int height){ 
           //  super(other, content, width, height);
      

	protected SvgSurface(int id) {
		super(id);
	}
     
        public SvgSurface(String filename, double width, double height){
                     super(filename, width, height);  
                         createSurfaceSvg(filename, width, height);                  
            }
   
       public native void createSurfaceSvg(String filename, double width, double height);
}
