enum ProLang{
	C,CPP,JAVA,PYTHON
}
class EnumDemo{
	public static void main(String[]args){
		ProLang lang = ProLang.JAVA;
		System.out.println(ProLang.C);
		System.out.println(ProLang.CPP);
		System.out.println(lang.ordinal());
	}
}

