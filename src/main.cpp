#include "WebServer.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	WebServer server;
	return server.run();
}
