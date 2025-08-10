#include<iostream>
#include<string>
using namespace std;

string PremLMaj(string P);

string PremLMaj(string P){
	string motRecup,nouvP,finalP;
    int j,f,n=nouvP.length()-1;
    string mi="abcdefghijklmnopqrstuvwxyz";
    string ma="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    //Transformer toute la phrase en minuscule 
    for(f=0;f<P.length();f++){
    	for(j=0;j<ma.length();j++){
        	if(P[f]==ma[j]){
            	P[f]=mi[j];
            }
        }
    }
    
    P+=' ';//capter le dernier mot
    
     for(f=0; f<P.length();f++){
     	if(P[f]!=' '){
         motRecup+=P[f];
         }else if(P[f]==' '){
         		if(!motRecup.empty()){
                 	nouvP+=motRecup+" ";
                     motRecup="";
                     while(P[f+1]==' '){
                	 f++;
                	 }
                 }
         }
     }
     
    n=nouvP.length()-1;
    if(nouvP[n]==' '){
    	for(f=0;f<n;f++){
        	finalP+=nouvP[f];
        }
    }
    
    //Transformer la première lettre de la phrase en majuscule
     for(f=0;f<finalP.length();f++){
    	for(j=0;j<mi.length();j++){
        	if(finalP[0]==mi[j]){
            	finalP[0]=ma[j];
            }
        }
    }
    
    //Transformer les premières.   lettres des autres phrases en majuscules
    for(f=0;f<finalP.length();f++){
    		for(j=0;j<mi.length();j++){
         	  if(finalP[f]=='!'||finalP[f]=='?'||finalP[f]=='.'){
               	if(finalP[f+2]==' '){
               		while(finalP[f+2]==' '&& f<finalP.length()){
                    	 f++;
                   	}
                   }
               	if(finalP[f+2]==mi[j]){
            		finalP[f+2]=ma[j];
            	   }
           } 
        }
        
    }
    
    
    cout<<"La phrase finale est : "<<endl<<finalP<<endl<<" et sa longueur est : "<<finalP.length();
    return P;
}



int main(){
    string P;
    string mi="abcdefghijklmnopqrstuvwxyz";
    string ma="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    do{
    cout <<"Insérez une ou plusieurs phrase !"<< endl;
    getline(cin,P);
    }while(P.empty());//insertion de phrase(s) NON vide(s)
    
    //Appel du FONCTION 
    PremLMaj(P);
    return 0;
}