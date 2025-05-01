#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		typedef void (Harl::*MemFun)(void);
		static const MemFun functions[4];

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		int		getLevel(const std::string &levelStr);
};

#endif
