#include <iostream>
#include "src/Map.cpp"
void print(char** c, short height, short width){
    for(int i=0;i<height;i++){
        for(int t=0;t<width;t++){
            std::cout<<c[i][t];
        }
        std::cout<<std::endl;
    }
}
int main(){
    Map m;
    char **c=m.getPtrMap();
    size s=m.getSize();
    print(c,s.height,s.width);
    return 0;
}