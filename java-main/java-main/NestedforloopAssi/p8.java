/*write a program to print the following pattern

d d d d
c c c c
b b b b
a a a a*/

class Demo{

        public static void main(String[]args){

		int rows=4;

		 for(int i=rows; i>=1; i--) {
			 for(int j=1; j<=4; j++) {
				 System.out.print((char)(i+96) + " ");
                        }
                        System.out.println( );
                }
        }
}

