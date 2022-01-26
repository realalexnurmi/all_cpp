//
// Created by Drahff Karthus on 11/24/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): \
	Form("ShrubberyCreationForm", 25, 5), _target(target) {}

void ShrubberyCreationForm::action() const
{
	std::ofstream outFile((_target + "_shrubbery").c_str());

	outFile << "                                   .         ; " << std::endl;
	outFile << "      .              .              ;%     ;;" << std::endl;
	outFile << "        ,           ,                :;%  %;" << std::endl;
	outFile << "         :         ;                   :;%;'     .," << std::endl;
	outFile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	outFile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
	outFile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outFile << "    ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
	outFile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outFile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outFile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	outFile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	outFile << "             `@%.  `;@%.      ;@@%;" << std::endl;
	outFile << "               `@%%. `@%%    ;@@%;" << std::endl;
	outFile << "                 ;@%. :@%%  %@@%;" << std::endl;
	outFile << "                   %@bd%%%bd%%:;" << std::endl;
	outFile << "                     #@%%%%%:;;" << std::endl;
	outFile << "                     %@@%%%::;" << std::endl;
	outFile << "                     %@@@%(o);  . '" << std::endl;
	outFile << "                     %@@@o%;:(.,'" << std::endl;
	outFile << "                 `.. %@@@o%::;" << std::endl;
	outFile << "                    `)@@@o%::;" << std::endl;
	outFile << "                     %@@(o)::;" << std::endl;
	outFile << "                    .%@@@@%::;" << std::endl;
	outFile << "                    ;%@@@@%::;." << std::endl;
	outFile << "                   ;%@@@@%%:;;;." << std::endl;
	outFile << "               ...;%@@@@@%%:;;;;,..    " << std::endl;
	outFile.close();

}