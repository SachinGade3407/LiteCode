class ICC{
	ICC(){
		print("ICC Constructor");
	}
}
class BCCI extends ICC{
	BCCI(){
		print("BCCI Construcotr");
	}
}
class IPL extends BCCI{
	IPL(){
		print("IPL Constructor");
	}
}
void main(){
	IPL obj = new IPL();
}

