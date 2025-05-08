import java.io.*;
class Demo{
	int mystrlen(String str1){
		char arrlen1[] = str1.toCharArray();
		int count1 = 0;
		for(int i=0;i<arrlen1.length;i++,count1++){
			return count1;
		}
	}
	int cmpstr(String str1,String str2){
		char arr1[] = str1.toCharArray();
		char arr2[] = str2.toCharArray();

		int asciidiff = 0;
		for(int i=0;i<arr1.length;i++){
			if(arr1[i]!=arr2[i]){
				asciidiff = arr1[i]-arr2[i];
			}
		}
		return asciidiff;
	}
	void chardiff(int len1,int len2){
		if(len1>len2){
			int diff = len1-len2;
			System.out.println("You have less Character in string 2 by" + diff);
		}else{
			int diff = len2-len1;
			System.out.println("You have less Character in string 2 by" + diff);
		}
	}
	public static void main(String[]args)throws IOException{
		BufferedReader br = new  BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter String1:");
		String str1 = br.readLine();
		
		System.out.println("Enter String2:");
		String str2 = br.readLine();
		
		Demo obj = new Demo();
		int len1 = obj.myLen(str1);
		int len2 = obj.myLen(str2);

		if(len1 == len2){
			int diff = obj.cmpstr(str1,str2);
			System.out.println("Ascii value diff"+diff);
		}else{
			obj.chardiff(len1,len2);
		}
	}
}
		

