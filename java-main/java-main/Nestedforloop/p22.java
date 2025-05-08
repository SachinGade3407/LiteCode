/*
    
   1 
   2 c 
   4 e 6
   7 h 9 j
   */

class Demo{

        public static void main(String[]args){

                int N=4;
                int num=1;
		char ch='a';

                for(int i=1;i<=N;i++){
                        for(int j=1;j<=i;j++){
                                if(j%2!=0){
                                System.out.print(num + " ");
                                }else{
                                        System.out.print(ch + " ");

                                }

				ch++;
				num++;
			}
                       System.out.println();
                }
        }
}

