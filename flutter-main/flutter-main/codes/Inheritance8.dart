class Parent{
	Parent(){
		print("In Parent constructor");	
	}
}
class Child extends Parent{
	Child(){
		super();
		print("In Child constructor");
	}
}
void main(){
	Child obj = new Child();
}
