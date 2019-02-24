package org.jcairo;


public enum FormatTest {
	ARGB32(0),
	RGB24(1),
	A8(2),
	A1(3),
	RGB16_565(4);  
        
        private int value;

      FormatTest(int value) {
         this.value = value;
      }

      public int waarde() {
       return value;
     }
   
  public int nummer(){
     switch(this) {
    case ARGB32:return 0;
    case RGB24: return 1;
    case A8: return 2;
    case A1: return 3;
    case RGB16_565: return 4;
    default: return 0;
    }
    
   } 
}


















/*public class Format
{
        public static final int ARGB32 = 0;
        public static final int RGB24 = 1;
        public static final int A8 = 2;
         public static final int A1 = 3;
         public static final int RGB16_565 = 4; 
}*/
