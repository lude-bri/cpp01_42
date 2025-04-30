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

		//pointer para a funcao membro
		typedef void (Harl::*MemFun)(void);

		//array de funcoes
		static const MemFun functions[4];

		//Getter para ver os Enums
		int getLevel(const std::string &levelStr);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
