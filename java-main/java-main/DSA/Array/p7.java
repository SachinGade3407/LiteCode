import java.util.*;
class Prefixsum{
	public static void main(String[]args){
	int arr[] = new int[]{-3,6,2,4,5,2,8,-9,3,1};
	int N = 10;
	int Q = 3;
	int psArr[] = new int[N];
	ps[0] = Arr[0];
	for(int i=0;i<N;i++){
		psArr[i]=psArr[i-1]+arr[i];
	}
	Scanner sc = new Scanner(System.in);
	int sum  = 0;
	for(int i=0;i<Q;i++){
		int SI = sc.nextInt();
		int EI = sc.nextInt();
		if(SI ==0 )
			sum = psArr[EI];
		else
			sum = psArr[EI]-psArr[SI-1];
	}
	System.out.println(sum);
	}

}

	

