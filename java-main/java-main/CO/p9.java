class Demo{
	String ProjName = "OnlineEdu";
	int NoofEmployee = 20;
	void fun(){
		String ClientName = "C2W";
		System.out.println(ClientName);
		System.out.println(ProjName);
		System.out.println(NoofEmployee);
	}
}
class C2W{
	public static void main(String[]args){
		Demo obj = new Demo();
		obj.fun();
	}
}

