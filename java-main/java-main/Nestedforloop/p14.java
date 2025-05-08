/*   1
     1 2
     1 2 3 
     1 2 3 4
    */

class Demo{

        public static void main(String[]args){

                int N=5;

                for(int i=1;i<=N;i++){
			int num=1;
                        for(int j=1;j<=i;j++){
                                System.out.print(num++ + " ");
                        }
                        System.out.println();
                }
        }
}

