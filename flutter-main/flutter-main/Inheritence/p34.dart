class Backend{
	String? lang;
	Backend._code(String lang){
		if(lang == 'JavaScript')
			this.lang = 'NodeJS';
		else if(lang == 'Java')
			this.lang = 'Springboot';
		else 
			this.lang = 'NodeJS/Springboot';
	}
	factory Backend(String lang){
		return Backend._code(lang);
	}
}

