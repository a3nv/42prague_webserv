#ifndef WEBSERVER_HPP
# define WEBSERVER_HPP

class WebServer
{
private:
	WebServer(const WebServer &other);
	WebServer &operator=(const WebServer &other);

public:
	WebServer(void);
	~WebServer(void);

	int run(void);
};

#endif
