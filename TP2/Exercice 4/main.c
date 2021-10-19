




void dessineCarre(int x, int y, int c){
	line(x+(c/2),y,x+c,y+(c/2));
	line(x+(c/2),y+c,x,y+(c/2));
	
	line(x+(c/2),y,x,y+(c/2));
	line(x+(c/2),y+c,x+c,y+(c/2));
}

void dessineCarreDiag(int x, int y, int c){
	line(x+(c/2),y,x+c,y+(c/2));
	line(x+(c/2),y+c,x,y+(c/2));
	
	line(x+(c/2),y,x,y+(c/2));
	line(x+(c/2),y+c,x+c,y+(c/2));
	
	line(x,y+(c/2),x+c,y+(c/2));
	line(x+(c/2),y,x+(c/2),y+c);
}

void dessineMosaique(int posx, int posy ,int x, int y, int c){
	int i,j;
	for (i=0; i<x; i++){
		for (j=0; j<y; j++){
			dessineCarre(posx + i*c, posy + j*c,c);
		}
	}
}

void dessineMosaiqueAvecSouris(int x, int y, int c){
	int posx[1], posy[1];
	cliquer_xy(posx,posy);
	dessineMosaique(posx[0], posy[0] ,x,y,c);
}


int main(){

	gr_inits_w(200,200,"test");
	set_blue();
	dessineMosaiqueAvecSouris(5,5,20);
	cliquer();

	return 0;
}
