class Core2Web{
	public static void main(String[] args) {
		String svar = "Core2Web";
		StringBuffer sbvar = new StringBuffer("Core2Web");
		if(svar.equals(sbvar))
			System.out.println("Equal");
		else
			System.out.println("Not equal");
	}
}
