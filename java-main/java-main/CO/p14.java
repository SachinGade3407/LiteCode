class Demo{
	int empId = 112;
	String str = "Kanha";
	static int y = 222;

	void empInfo(){
		System.out.println("Employee Id = " +empId);
		System.out.println("Employee Name = "+str);
		System.out.println("Y ="+empId);
	}
}
class MainDemo{
	public static void main(String[]args){
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		obj1.empInfo();
		obj2.empInfo();

		System.out.println("------------------x-----------------");
		obj2.empId = 333;
		obj2.str = "Rahul";
		obj2.y= 444;

		obj1.empInfo();
		obj2.empInfo();
	}
}




