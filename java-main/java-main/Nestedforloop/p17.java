/*   
    A B C D 
    A B C
    A B 
    A
    */

 class Demo{

        public static void main(String[]args){

                int N=5;

                for(int i=1;i<=N;i++){
			char ch='A';
                        for(int j=1;j<=N-i+1;j++){
                                System.out.print(ch++ +"  ");
                        }
                System.out.println();
                }
        }
}

