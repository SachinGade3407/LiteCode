class Demo{
	final int? x;
	final String? str;
	const Demo(this.x,this.str);
}
void main(){
	Demo obj1 = const Demo(10,"ghefge");
	print(obj1.hashCode);
	Demo obj2 = const Demo(155,"ghefge");
	print(obj2.hashCode);
}

