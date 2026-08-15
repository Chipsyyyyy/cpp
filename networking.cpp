#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

int main(){
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1){
        std::cerr << "Failed to create socket." << std::endl;
        return 1;
    }

    sockaddr_in address;
    memset(&address, 0, sizeof(address));

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    int bindResult = bind(serverSocket, (sockaddr*)&address, sizeof(address));
    if (bindResult == -1){
        std::cerr << "Bind failed." << std::endl;
        return 1;
    }

    int listenResult = listen(serverSocket, 5);
    if (listenResult == -1){
        std::cerr << "Listen failed." << std::endl;
        return 1;
    }
    std::cout << "Server listening on port 8080..." << std::endl;

    int clientSocket = accept(serverSocket, nullptr, nullptr);
    if (clientSocket == -1){
        std::cerr << "Accept failed." << std::endl;
        return 1;
    }
    std::cout << "Client connected!" << std::endl;
    close(clientSocket);
    close(serverSocket);
    return 0;
}