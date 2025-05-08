import java.util.*;
class StackDemo{
	public static void main(String[]args){
		Stack S=new Stack();
		S.push(10);
		S.push(20);
		S.push(30);
		S.push(40);
		System.out.println(S);
//		S.pop(20);
//		System.out.println(S);
//		S.peek(10);
//		System.out.println(S);
		S.push(60);
		System.out.println(S);
		S.search(40);
		System.out.println(S);
	}
}

