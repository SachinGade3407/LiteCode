void main(){
	int x=10;
	int ans = ++x + ++x;
	print(ans);
	
	ans = --x + --x;
	print(ans);
	
	ans = ++x + x++;
	print(ans);
	
	ans = --x + x--;
	print(ans);
}
