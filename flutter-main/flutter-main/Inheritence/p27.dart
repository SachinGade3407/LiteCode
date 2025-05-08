class Demo{
	static Demo obj = new Demo();
	static int x = 10;
	Demo(){
		print("constructor");
	}
}
void main(){
	print(Demo.obj);
	print(Demo.x);
}

