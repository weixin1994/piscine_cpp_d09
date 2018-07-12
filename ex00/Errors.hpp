#ifndef _ERRORS_HPP_
#define _ERRORS_HPP_

#include <string>

class NasaError
{
	public:
		NasaError(std::string const &message, std::string const &component = "Unknown");
		virtual ~NasaError();
		virtual std::string const &getComponent() const;
		virtual char const *what() const;
		
	private:
		std::string _message;
		std::string _component;
};

class MissionCriticalError : public NasaError 
{
	public:
		MissionCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class LifeCriticalError : public NasaError 
{
	public:
		LifeCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class UserError : public NasaError 
{
	public:
		UserError(std::string const &message, std::string const &component = "Unknown");
};

class CommunicationError : public NasaError 
{
	public:
		CommunicationError(std::string const &message);
};

#endif
