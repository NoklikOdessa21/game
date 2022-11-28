struct size{
    short height;//visota
    short width;//shirina
};

class Map{
    char **mas;
    size _s;
    short field;
public:
    Map() : field(6) {
        _s.height=22;
        _s.width=50;
        mas=new char*[_s.height];
        for(int i=0;i<_s.height;i++){
            mas[i]=new char[_s.width];
            for(int t=0;t<_s.width;t++){
                if(i % 2 == 0 && t < _s.width-1-field || i % 2 == 0 && t+field > _s.width-1 || i == _s.height-1  && t < _s.width-1-field || i == _s.height-1  && t+field > _s.width-1 )
                    mas[i][t]='-';
                else if(t % 2 == 0 || t == _s.width-1 || t < _s.width-field-1 && t+field > _s.width-1)
                    mas[i][t]='|';
                else
                    mas[i][t]=' ';
            }
        }
    }
    char** getPtrMap(){
        return mas;
    }
    size getSize(){
        return _s;
    }
};