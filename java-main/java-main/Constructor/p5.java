class Company{
	private int id=0;
	private String name=null;
	Company(int id,String name){
		this.id=id;
		this.name=name;
		System.out.println("In Constructor");
	}
	void EmpInfo(){
		System.out.println(id + "= " + name);
	}
}
class Client{
	public static void main(String[]args){
		Company obj1 = new Company(10,"BackEnd");
		obj1.EmpInfo();

		Company obj2 = new Company(20,"FrontEnd");
		obj2.EmpInfo();

		Company obj3 = new Company(30,"S/W Developer");
		obj3.EmpInfo();
	}
}



