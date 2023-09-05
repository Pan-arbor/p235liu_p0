#include<iostream>


#include<string>

#include "playlist.cpp"

    /// @brief 
    /// @return 
    int main(){

        std::string a;
        getline(std::cin, a);
        Playlist list1;
        

        while(!(std::cin.eof())){
        

       
        if(a.substr(0,1) == "m"){
            
            int smax = stoi(a.substr(2, std::string::npos));
            list1.set_max(smax);

        }
        
            while(getline(std::cin ,a)){

            if(a.substr(0,1) == "i"){
            
                std::string title = a.substr(2, a.find(";")-2);

                std::string artist = a.substr(a.find(";") + 1, std::string::npos);

                list1.Insert(title , artist);
            }
            if(a.substr(0,1) == "p"){

                int splay = stoi(a.substr(2 , std::string::npos));

                list1.Play(splay);

            }
            if(a.substr(0,1) == "e"){

                int serase = stoi(a.substr(2 , std::string::npos));

                list1.Erase(serase);
            }
           }
       }

  
    return 0;
    
}
