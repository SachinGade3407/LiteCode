//Cpomparing string..


import java.util.*;
class Demo{
	static int mystrlen(String str){
		char arr[] = str.toCharArray();
		int count = 0;
		for(int i=0;i<arr.length;i++){
			count++;
		}
		return count;
	}

	public static void main(String[]args){

		Scanner sc = new Scanner(System.in);
		String str1 = sc.next();
		String str2 = sc.next();

		if(mystrlen(str1)==mystrlen(str2)){
			System.out.println("String are Equal");
		}else{
			System.out.println("String are NotEqual");
		}
	}
}

