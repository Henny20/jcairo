package org.jcairo;

import java.io.OutputStream;
import java.io.IOException;

public class CairoSurface {

      static {
        System.loadLibrary("jcairo");
          }              

      protected long pointer;

      public CairoSurface(long id) {
		this.pointer = id;
           }

      public CairoSurface(String filename, double width, double height){
          }

       public CairoSurface(int format, double width, double height){
          }

      public CairoException.Type getStatus(){
		return CairoException.Type.values()[status()];
          }
	
      public void checkStatus() throws CairoException {
		int status = status();
		if (status > 0){
			throw new CairoException(status);
		}
         }
		
		
                private native int status();

                public native void release();

		public native void finish();

		public native void flush();

		//public native void getFontOptions(FontOptions options);

		public native Content getContent();

		//public native Device getDevice();

		public native int getReferenceCount();

		public native boolean hasShowTextGlyphs();

		public native void markDirty();

		public native void markDirtyRectangle(int x, int y, int width, int height);

		public native void setDeviceOffsett(double xOffset, double yOffset);

		public native void setFallbackResolution(double x_pixels_per_inch, double y_pixels_per_inch);

                public native void copyPage();

		public native void showPage();

		//public native Status status();

	        public native SurfaceType getType();

                //public void writeToPNG(String filename) throws IOException {
                 //  }

                 public native void writeToPNG(String filename);

                 public void writeToPNG (OutputStream stream) throws IOException{
                }
                 

           


                public enum SurfaceType {
		IMAGE,
		PDF,
		PS,
		XLIB,
		XCB,
		GLITZ,
		QUARTZ,
		WIN32,
		BEOS,
		DIRECTFB,
		SVG
	              }

                public enum Content {
		COLOR,
		ALPHA,
		COLOR_ALPHA
	}

               
}
