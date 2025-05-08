mixin Test{
	void demo(){
		print("In test demo");
	}
}
mixin Test2{
	void demo(){
		print("In test2 demo");
	}
}
class Test3 with Test,Test2{
	void demo(){
		print("Id test3 demo");
		super.demo();
	}void fun2(){
	print("In fun2");	
	}
}
void main(){
	Test3 obj = Test3();
	obj.demo();
}
