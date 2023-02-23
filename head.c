#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "head.h"

int animation(int i,SDL_Surface * screen, SDL_Surface *logo, SDL_Rect Sprite[2],SDL_Rect logopos){
       int s=i;
        int elapsed=SDL_GetTicks();
	int wait=SDL_GetTicks()-elapsed;
 	
        
        logopos.x = 675;
	logopos.y = 25;
        Sprite[0].x=1;
	Sprite[0].y = 1;
	Sprite[0].h =250;
	Sprite[0].w = 250;
	Sprite[1].x=261;
	Sprite[1].y = 1;
	Sprite[1].h =250;
	Sprite[1].w = 250;
	Sprite[2].x=521;
	Sprite[2].y = 1;
	Sprite[2].h =250;
	Sprite[2].w = 250;
	s++;
	if(s>2){
		s=0;
	}
	switch(s){
	case 0:
	SDL_Delay(25);
	break;
	case 1:
	SDL_Delay(250);
	break;
	case 2:
	SDL_Delay(250);
	break;
	}
	
	SDL_BlitSurface(logo,&Sprite[s],screen,&logopos);
	return s;
	

}
void text1(SDL_Surface * screen, TTF_Font * police, TTF_Font *policeset,SDL_Surface * start,SDL_Surface * settings, SDL_Rect startpos, SDL_Rect setpos,char * message1,char* message2){

	
	

	
	
	
	start= IMG_Load(message1);
	settings = IMG_Load(message2);
	
	
	SDL_BlitSurface(settings,NULL,screen,&setpos);
	SDL_BlitSurface(start,NULL,screen,&startpos);
}



int backg(SDL_Surface *background, SDL_Surface * screen, int i){
	int elapsed=SDL_GetTicks();
	int wait=SDL_GetTicks()-elapsed;
	SDL_Rect backpos;
	int s = i;
	
	switch(s){
	case 1:
	background = IMG_Load("frame1.png");
	SDL_Delay(25);
	break;
	case 2:
	background = IMG_Load("frame2.png");
	SDL_Delay(25);
	break;
	case 3:
	background = IMG_Load("frame3.png");
	SDL_Delay(25);
	break;
	case 4:
	background = IMG_Load("frame4.png");
	SDL_Delay(25);
	break;
	case 5:
	background = IMG_Load("frame5.png");
	SDL_Delay(25);
	break;
	case 6:
	background = IMG_Load("frame6.png");
	SDL_Delay(25);
	break;
	case 7:
	background = IMG_Load("frame7.png");
	SDL_Delay(25);
	break;
	case 8:
	background = IMG_Load("frame8.png");
	SDL_Delay(25);
	break;
	case 9:
	background = IMG_Load("frame9.png");
	SDL_Delay(25);
	break;
	case 10:
	background = IMG_Load("frame10.png");
	SDL_Delay(25);
	break;
	case 11:
	background = IMG_Load("frame11.png");
	SDL_Delay(25);
	break;
	case 12:
	background = IMG_Load("frame12.png");
	SDL_Delay(25);
	break;
	case 13:
	background = IMG_Load("frame13.png");
	SDL_Delay(25);
	break;
	case 14:
	background = IMG_Load("frame14.png");SDL_Delay(25);
	break;
	case 15:
	background = IMG_Load("frame15.png");SDL_Delay(25);
	break;
	case 16:
	background = IMG_Load("frame16.png");SDL_Delay(25);
	break;
	case 17:
	background = IMG_Load("frame17.png");SDL_Delay(25);
	break;
	case 18:
	background = IMG_Load("frame18.png");SDL_Delay(25);
	break;
	case 19:
	background = IMG_Load("frame19.png");SDL_Delay(25);
	break;
	case 20:
	background = IMG_Load("frame20.png");SDL_Delay(25);
	break;
	case 21:
	background = IMG_Load("frame21.png");SDL_Delay(25);
	break;
	case 22:
	background = IMG_Load("frame22.png");SDL_Delay(25);
	break;
	case 23:
	background = IMG_Load("frame23.png");SDL_Delay(25);
	break;
	case 24:
	background = IMG_Load("frame24.png");SDL_Delay(25);
	break;
	case 25:
	background = IMG_Load("frame25.png");SDL_Delay(25);
	break;
	case 26:
	background = IMG_Load("frame26.png");SDL_Delay(25);
	break;
	case 27:
	background = IMG_Load("frame27.png");SDL_Delay(25);
	break;
	case 28:
	background = IMG_Load("frame28.png");SDL_Delay(25);
	break;
	case 29:
	background = IMG_Load("frame29.png");SDL_Delay(25);
	break;
	case 30:
	background = IMG_Load("frame30.png");SDL_Delay(25);
	break;
	case 31:
	background = IMG_Load("frame31.png");SDL_Delay(25);
	break;
	case 32:
	background = IMG_Load("frame32.png");SDL_Delay(25);
	break;
	case 33:
	background = IMG_Load("frame33.png");SDL_Delay(25);
	break;
	case 34:
	background = IMG_Load("frame34.png");SDL_Delay(25);
	break;
	case 35:
	background = IMG_Load("frame35.png");SDL_Delay(25);
	break;
	case 36:
	background = IMG_Load("frame36.png");SDL_Delay(25);
	break;
	case 37:
	background = IMG_Load("frame37.png");SDL_Delay(25);
	break;
	case 38:
	background = IMG_Load("frame38.png");SDL_Delay(25);
	break;
	case 39:
	background = IMG_Load("frame39.png");SDL_Delay(25);
	break;
	case 40:
	background = IMG_Load("frame40.png");SDL_Delay(25);
	break;
	case 41:
	background = IMG_Load("frame41.png");SDL_Delay(25);
	break;
	case 42:
	background = IMG_Load("frame42.png");SDL_Delay(25);
	break;
	case 43:
	background = IMG_Load("frame43.png");SDL_Delay(25);
	break;
	case 44:
	background = IMG_Load("frame44.png");SDL_Delay(25);
	break;
	case 45:
	background = IMG_Load("frame45.png");SDL_Delay(25);
	break;
	case 46:
	background = IMG_Load("frame46.png");SDL_Delay(25);
	break;
	case 47:
	background = IMG_Load("frame47.png");SDL_Delay(25);
	break;
	case 48:
	background = IMG_Load("frame48.png");SDL_Delay(25);
	break;
	
	
	}
	backpos.x = 325;
	backpos.y = 50;
	backpos.h = 900;
	backpos.w= 700;
	
	SDL_BlitSurface(background,NULL,screen,&backpos);
	s++;
	if(s>48){
	s = 1;}
	return s;

}
void volume(SDL_Surface * screen, SDL_Surface * volumebarf, SDL_Rect soundfp[11]){

	soundfp[0].x = 720;
	soundfp[0].y = 235;
	
	soundfp[1].x = 750;
	soundfp[1].y = 235;
	
	soundfp[2].x = 780;
	soundfp[2].y = 235;
	
	soundfp[3].x = 810;
	soundfp[3].y = 235;
	
	soundfp[4].x =840;
	soundfp[4].y = 235;
	
	soundfp[5].x = 870;
	soundfp[5].y = 235;
	
	soundfp[6].x = 900;
	soundfp[6].y = 235;
	
	soundfp[7].x = 930;
	soundfp[7].y = 235;
	
	soundfp[8].x = 960;
	soundfp[8].y = 235;
	
	soundfp[9].x = 990;
	soundfp[9].y = 235;
	
	soundfp[10].x = 1020;
	soundfp[10].y = 235;
	
	soundfp[11].x = 1050;
	soundfp[11].y = 235;


		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[0]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[1]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[2]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[3]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[4]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[5]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[6]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[7]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[8]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[9]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[10]);
		SDL_BlitSurface(volumebarf, NULL, screen, &soundfp[11]);
		


}

void optionmenu(SDL_Surface *screen,SDL_Surface * settingsback, SDL_Surface *volumebarf,SDL_Surface *volumebarff,SDL_Surface * soundchar,SDL_Surface *exitset,SDL_Rect soundfp[11],SDL_Rect settingsbackr, SDL_Rect exitsetp, SDL_Rect soundcharp ,SDL_Event event, TTF_Font * police, TTF_Font * policeset, int ic, int vc,int cont,int curscre, int change, int * screenh, int * screenw){
	
	int x,y;
	int ex =0;
	SDL_Rect backbackp;
	backbackp.x = 20;
	backbackp.y= 0;
	SDL_Surface * backback = IMG_Load("backg.png");
	int backo = 1;
	SDL_Surface * buttonfull;
	
	buttonfull = IMG_Load("full.png");
	SDL_Rect full;
	full.x = 600;
	full.y = 300;	
	full.w =25;
	full.h = 50;
	
	if(curscre ==1){
		if(change ==1 ){
		
		change = 0;	
		}
		
		
		SDL_BlitSurface(backback,NULL,screen,&backbackp);
		volume(screen,volumebarf,soundfp);
		
		while(cont==0){
		if(backo ==0){
		SDL_BlitSurface(settingsback, NULL, screen, &settingsbackr);
		backo = 1;}
		if(ex == 0){
		text1(screen,police,policeset,soundchar,exitset,exitsetp,soundcharp,"exit.png","volume.png");}
		else if(ex ==1){text1(screen,police,policeset,soundchar,exitset,exitsetp,soundcharp,"button3.png","volume.png");}
		SDL_BlitSurface(buttonfull, NULL, screen, &full);
		
		
			
	
			SDL_WaitEvent(&event);
			
			
				
				if(event.motion.x>=exitsetp.x && event.motion.x<=exitsetp.x+exitsetp.w+25 && event.motion.y>=exitsetp.y && event.motion.y<=exitsetp.y+exitsetp.h){
						ex = 1;
						if(event.type == SDL_MOUSEBUTTONDOWN){
       					 {
       					

        				 	
        				 	cont = 1;
        				 	break;
        				

       				
       					}
           					 
       					}
       					}
       			else if(event.motion.x>=full.x && event.motion.x<=full.x+full.w+25 && event.motion.y>=full.y && event.motion.y<=full.y+full.h){
						
						if(event.type == SDL_MOUSEBUTTONDOWN){
       					 {
       					
							if( *screenh == 800){
								*screenh = 700;
								*screenw = 1350;
								printf("Screen 700\n");
								screen = SDL_SetVideoMode(*screenw,*screenh,32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_RESIZABLE);
								SDL_BlitSurface(backback,NULL,screen,&backbackp);
							
							}
							else{ *screenh = 800;
								*screenw = 1650;
								printf("Screen 800\n");
								screen = SDL_SetVideoMode(*screenw,*screenh,32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_RESIZABLE );}
								SDL_BlitSurface(backback,NULL,screen,&backbackp);
        				 	
        				 	
        				

       				
       					}
           					 
       					}
       					}
       					
       			else if(!(event.motion.x>=exitsetp.x && event.motion.x<=exitsetp.x+exitsetp.w+25 && event.motion.y>=exitsetp.y && event.motion.y<=exitsetp.y+exitsetp.h)){ex = 0;}
       			
       		
       			
       					
				if (event.type == SDL_QUIT){
				cont=1;
				break;
				
				}
				
	
				
			
                    	
                    		else if (event.key.keysym.sym == SDLK_RIGHT){
                    		vc+=1;}
                    		if(vc>11){vc=11;}
                    		
                    		
                    		else if (event.key.keysym.sym ==SDLK_LEFT){
                    		vc-=1;
                    		if(vc<-2){vc=-2;}}
                    		else if( event.key.keysym.sym == SDLK_ESCAPE){
                    		cont = 1;
                    	}
                    		
                    		
				
				
				
				
                	
                	if(vc<=11){
                	for(ic=0; vc+1>ic;ic++){
                			
					SDL_BlitSurface(volumebarff,NULL,screen,&soundfp[ic]);
					
				
				}
			
			}
			for(ic=10; vc<ic;ic--){
			
					SDL_BlitSurface(volumebarf,NULL,screen,&soundfp[ic+1]);
					
				
				}
			
                	Mix_VolumeMusic(vc*11);
			
			SDL_Flip(screen);
			
			backo = 0;
			
			}

		}
		
		}
		
		
		
		
		int mainmenuf(int curscre, int change, SDL_Surface* screen, TTF_Font * police, TTF_Font * policeset, SDL_Surface * start, SDL_Surface * settings, SDL_Rect startpos, SDL_Rect setpos, int i, SDL_Surface* logo, SDL_Rect Sprite[3],SDL_Rect logopos,  SDL_Surface * background, SDL_Event event, int cont, SDL_Surface *mainmexit, SDL_Rect mainmexitp, Mix_Chunk* bref, int screenh, int screenw){
		
		
		int l =0;
		int isc = 1;
		int x;
		int y;
		int backgc = 1;
		int set= 0;
		int strt = 1;
		int ex = 0;
		SDL_Color white = {255,255,255};
		
		background = IMG_Load("frame1.png");
		logo = IMG_Load("logo.png");
		SDL_Rect logop;
		logop.x = 10;
		logop.y = 550;
		SDL_Rect backbackp;
		backbackp.x = 20;
		backbackp.y= 0;
		SDL_Surface * backback = IMG_Load("backg.png");
		SDL_Surface *black = IMG_Load("brain.png");
		Mix_Chunk * effect = Mix_LoadWAV("button.wav");
		SDL_Surface * optionsf = IMG_Load("option.png");
		SDL_Rect blackp1;
		blackp1.x =600;
		blackp1.y = 250;
		blackp1.w = 25;
		blackp1.h =25;
		SDL_Rect blackp;
		SDL_Surface * exita = IMG_Load("button3.png");
		SDL_Surface * starta = IMG_Load("button1.png");
		TTF_Font * policec = TTF_OpenFont("fonty.ttf",10);
		SDL_Surface * copy = TTF_RenderText_Blended(policec,"Made by S.H.A.P.E", white);
		SDL_Rect copyp;
		copyp.x = 75;
		copyp.y = 765;
		blackp.w = 25;
		blackp.h =25;
		blackp.x =600;
		blackp.y = 250;
		if(change ==1){
		
		change = 0;	
		}


		
		
		while(cont==0){
		
		SDL_BlitSurface(backback,NULL,screen, &backbackp);
		isc =backg(background,screen,isc);
		SDL_BlitSurface(logo,NULL,screen,&logop);
		if(set == 1){text1(screen,police,policeset,start,optionsf,startpos,setpos,"start.png","button2.png");}
		else{text1(screen,police,policeset,start,settings,startpos,setpos,"start.png","option.png");}
		
		if(ex ==0){
		SDL_BlitSurface(mainmexit,NULL,screen,&mainmexitp);
		}
		else{SDL_BlitSurface(exita,NULL,screen,&mainmexitp);}
		if(strt ==1){
		SDL_BlitSurface(starta,NULL,screen,&startpos);
		
		
		}
		else if(strt ==0){
		SDL_BlitSurface(start,NULL,screen,&startpos);
		
		
		}
		
		
		
		
			
	
				
				
	
			
				SDL_BlitSurface(copy,NULL,screen,&copyp);
				
				
				while(SDL_PollEvent(&event) ){
				l = 0;
				
				if(event.type == SDL_KEYDOWN){
				if(event.key.keysym.sym == SDLK_DOWN){
					
					printf("execution key\n");
					if(l ==0){
					if(set == 1){strt = 0; set =0; ex =1;printf("Transition1 \n");l = 1;break;}}
					if(l ==0){
					 if(strt == 1){strt = 0; set = 1; ex =0;printf("Transition2 \n");l =1;break;}}
	
					if(ex == 0 && set == 0 && strt ==0) {printf("Transition\n 3");strt = 1;l =1;break;}
					
					
					
					
					}
					}
					if(event.type == SDL_KEYDOWN){
					if(event.key.keysym.sym == SDLK_UP){
					
					
					if(set == 1){strt =1; set =0; ex =0;}
					else if(ex == 1){strt = 0; set = 1; ex =0;}
					else if(ex == 0 && set == 0 && strt ==0){strt =1;}}
					
					}
					
					if(event.key.keysym.sym== SDLK_RETURN){
					if(strt == 1){printf("Starting game\n");}
					 else if(set == 1){cont = 1;}	
					else if(ex ==1) {return 0;}
					
					}
					if(event.key.keysym.sym== SDLK_o){
						curscre =1;
        				 	cont = 1;
        				 	break;
					
					}
					if(event.key.keysym.sym== SDLK_ESCAPE){if(event.type == SDL_KEYDOWN){printf("return was 0 line 580 \n");return 0;}}
				switch(event.type){
					case SDL_QUIT:
				
					cont=1;
					
					return 0;
					break; 
					
					
					
					
					
					case SDL_MOUSEBUTTONDOWN:
					x = event.motion.x;
       				y = event.motion.y;
       				if(event.motion.x>=setpos.x && event.motion.x<=setpos.x+setpos.w+25 && event.motion.y>=setpos.y && event.motion.y<=setpos.y+setpos.h)

       					 {
       					
       					
           					 curscre = 1;
           					 if( event.button.button == SDL_BUTTON_LEFT )
        					{
        				 	
        				 	Mix_PlayChannel( -1, effect, 0 );
        				 	curscre =1;
        				 	cont = 1;
        				 	break;
        				

       				
       					}
           					 
       					}
       				else if(event.motion.x>=mainmexitp.x && event.motion.x<=mainmexitp.x+mainmexitp.w && event.motion.y>=mainmexitp.y && event.motion.y<=mainmexitp.y+mainmexitp.h)

       					 {
       					
       					
           					 curscre = 1;
           					 if( event.button.button == SDL_BUTTON_LEFT )
        					{
        					Mix_PlayChannel( -1, effect, 0 );
        				 	
        				 	printf("Return was 0\n");
        				 	return 0;
        				 	
        				

       				
       					}
           					 
       					}
       					else if(event.motion.x>=startpos.x && event.motion.x<=startpos.x+startpos.w && event.motion.y>=startpos.y && event.motion.y<=startpos.y+startpos.h)

       					 {
       					
       					
           					 curscre = 1;
           					 if( event.button.button == SDL_BUTTON_LEFT )
        					{
        					Mix_PlayChannel( -1, effect, 0 );
        				 	
        				 	printf("Return was 0\n");
        				 	return 2;
        				 	
        				

       				
       					}
           					 
       					}
				
					
       				break;
       				
       				
				case SDL_MOUSEMOTION:
         	  
              	  
             
 		
              if (event.motion.x > setpos.x && event.motion.y > setpos.y-50 && event.motion.x < setpos.x + setpos.w +25&& event.motion.y < setpos.y + setpos.h)
                {
                    set= 1;
                   
                    Mix_PlayChannel(0,bref,1);
                   
                  
                    
                    
                }
                else if(!((event.motion.x > setpos.x && event.motion.y > setpos.y-50 && event.motion.x < setpos.x + setpos.w+25 && event.motion.y < setpos.y + setpos.h))){
                
                set =0;
                 }
                 if(event.motion.x>=mainmexitp.x && event.motion.x<=mainmexitp.x+mainmexitp.w && event.motion.y>=mainmexitp.y && event.motion.y<=mainmexitp.y+mainmexitp.h){
                 
                 ex = 1;
                 }
                 else{
                 ex = 0;}
                 if(event.motion.x>=startpos.x && event.motion.x<=startpos.x+startpos.w && event.motion.y>=startpos.y && event.motion.y<=startpos.y+startpos.h){
                 
                 strt = 1;
                 
                 }
                 else if (!(event.motion.x>=startpos.x && event.motion.x<=startpos.x+startpos.w && event.motion.y>=startpos.y && event.motion.y<=startpos.y+startpos.h)){strt = 0; }
                 
               
				
		}
		}
				
			
			SDL_Flip(screen);
			screen = SDL_SetVideoMode(screenw,screenh,32, SDL_DOUBLEBUF | SDL_HWSURFACE );
			
		}
		printf("Return was 1");
		return 1;
	
	
	
	
		
		
		}
