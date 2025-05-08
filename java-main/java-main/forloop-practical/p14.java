// Fibonacci series  N=20==0,1,3,5,8,13


class Demo{

	public static void main(String[]args){

		int N=20;

		int N1=0;
		int N2=1;

		System.out.println("Fibonacci Series: ");
		for(int i=1;i<=N;i++){
			System.out.println(N1);
			int sum=N1+N2;
			N1=N2;
			N2=sum;
		}
	}
}
/*
		N3=N1+N2;
		while(N3<N){
			System.out.println(N3);
		}
		N1=N2;
		N2=N3;
		N3=N1+N2;
	}
}*/
