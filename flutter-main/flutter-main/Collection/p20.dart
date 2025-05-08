void main(){
	var player = ["MSD","VK","RS","KL"];	
	var itr = player.iterator;
	while(itr.moveNext())
		print(itr.current);
}

