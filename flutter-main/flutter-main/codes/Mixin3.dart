mixin class Parent{
	Parent(){
		
	}
	int x = 10;
	static int y = 199;
	void fun(){
		print(x);
		print(y);
	}
}
class child extends Parent{
	int x = 38;
	void gun(){
		super.fun();
	}
}
void main(){
	Child obj = new Child();
	obj.gun();
}
