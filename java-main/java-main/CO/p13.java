class Demo{
	int empId = 111;
	String str = "Kanha";
	void EmpInfo(){
		System.out.println("Id = "+ empId);
		System.out.println("Name = "+ str);
		}
}
class MainDemo{
	public static void main(String[]args){
		Demo emp1 = new Demo();
		emp1.EmpInfo();
		
		System.out.println("Id = "+ emp1.EmpId);
		System.out.println("Name = "+ emp1.str);
	}
}

		




