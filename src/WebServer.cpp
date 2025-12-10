#include "WebServer.hpp"
#include <iostream>

WebServer::WebServer(void)
{
	std::cout << "WebServer starting..." << std::endl;
}

WebServer::~WebServer(void)
{
	std::cout << "WebServer shutting down..." << std::endl;
}

int WebServer::run(void)
{
	// Temporary placeholder: will be replaced by poll() loop later.
	std::cout << "WebServer::run() - nothing implemented yet." << std::endl;
	return 0;
}
