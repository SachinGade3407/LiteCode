class Parent{
	int x=10;
	String str="hjffdhjh";
	void parentDemo(){
		print("In disp method");
	}
}
class child extends Parent{
}
void main(){
	child obj = new child();
	print(obj.x);
	print(obj.str);
	obj.parentDemo();

}

