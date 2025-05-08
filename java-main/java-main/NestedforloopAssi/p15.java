/*
10 10 10 10
11 11 11
12 12
13
*/
class Demo{

        public static void main(String[]args){

                int N=4;
                int num=10;

                for(int i=1;i<=N;i++){
                        for(int j=1;j<=N-i+1;j++){
                                System.out.print(num + " ");
			}
		
			num++;
			System.out.println();
		}

	}
}
            

