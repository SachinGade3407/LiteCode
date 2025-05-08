class Parent{
	int x =10;
	String str1 = "name";
	void parentMethod(){
		print(x);
		print(str1);
	}		
}
class Child extends Parent{
	int x = 20;
	String str2 = "Data";
	void childmethod(){
		print(x);
		print(str2);
	}
}
void main(){
	Child obj = new Child();
	print(obj.x);
	print(obj.str1);
//	obj.parentMothed();

	print(obj.x);
	print(obj.str1);
//	obj.childMethod();
}
