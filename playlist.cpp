#include<iostream>

#include<string>

class SongArtist{

    private:
    std::string Title;

    std::string Artist;

    public:

    SongArtist(){

    }

    ~SongArtist(){
    }

    void set(std::string stitle, std::string sartist){

        Title = stitle;
        Artist = sartist;
    }
    
    std::string get_t (){

        return Title;
    }

    std::string get_a(){

        return Artist;
    }

};

class Playlist{

private:

int index = 0;

int size;


public:

SongArtist * list;


Playlist(){
   list = new SongArtist[0];
} 

~Playlist(){
    // delete the array
    delete [] list;
}

void set_max(int N){
 //command m
    list = new SongArtist[N];
    size = N;
    std::cout << "success" << std::endl;
}


void Insert(std::string s , std::string a){

    bool sinsert = true;

    if(index == size){

        std::cout << "can not insert " << s << ";"<< a << std::endl;
        sinsert = false;

    }else if(s == "My Heart Will Go On"){

        std::cout << "can not insert " << s << ";"<< a << std::endl;
        sinsert = false;

    }else if((s == "Muskrat Love") && (a == "Captain and Tennille")){

        std::cout << "can not insert " << s << ";"<< a << std::endl;
        sinsert = false;

    }else{
    
    for (int i = 0 ; i <= index ; ++i){

        if((s == list[i].get_t()) && (a == list[i].get_a())){

            std::cout << "can not insert " << s << ";"<< a << std::endl;

            sinsert = false;
            
            break;

        }

    }

    }

    if(sinsert == true){

    list[index].set(s,a);

    ++index;

    std::cout << "success" << std::endl;

    
    }
    
   
}

void Play(int n){

    if (n >= index){

        std::cout << "can not play " << n << std::endl;

    }else{

        std::cout << "played " << n << " " << list[n].get_t() << ";" << list[n].get_a() << std::endl;

    }
}

void Erase(int n){

    int m = (index-1);

    if(n >= index){
        
        std::cout << "can not erase " << n << std::endl;
    
    }else{

       list[n].set("" , "");

        for(int i = n; i < m ; ++i){

            list [i] = list[i+1];


        }

        index -= 1;
        list[index].set("" , "");
       
        std::cout << "success" <<  std::endl; 

    }

}
};