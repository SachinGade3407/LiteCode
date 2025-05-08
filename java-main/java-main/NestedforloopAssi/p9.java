/*write a program to print the following pattern
C B A
C B A
C B A*/

class Demo{

        public static void main(String[]args){

                 for(int i=1;i<=3; i++) {
                         for(int j=3; j>=1; j--) {
                                 System.out.print((char)(j+64) + " ");
                        }
                        System.out.println( );
                }
        }
}

