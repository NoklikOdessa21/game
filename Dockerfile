FROM gcc:latest

COPY . /usr/src/app/

WORKDIR /usr/src/app/

RUN g++ main.cpp src/Map.cpp -o Test

CMD ["./Test"]