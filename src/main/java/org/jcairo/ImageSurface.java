package org.jcairo;

import org.jcairo.CairoSurface;

public class ImageSurface extends CairoSurface{

	protected ImageSurface(int id) {
		super(id);
	}
     
        public ImageSurface(int format, double width, double height){
                     super(format, width, height);  
                         createSurfaceImage(format, width, height);    
              
             }
        public native void createSurfaceImage(int format, double width, double height);

       
}
