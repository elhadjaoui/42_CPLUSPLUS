#include "ShrubberyCreationForm.hpp"

// 0  ----> grade signing error
// 1  ----> grade execetion error
// 2  ----> file  error



ShrubberyCreationForm::ShrubberyCreationForm() : Form(137, 145, "ShrubberyCreationForm")
{
   this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)  : Form(145, 137, "ShrubberyCreationForm")
{
    this->target = target;
}
  
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &shrubberyCreationForm)
{
    this->target = shrubberyCreationForm.target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm) 
{
    this->target = shrubberyCreationForm.target;
}



  
ShrubberyCreationForm::Error::Error(int i)
{
    this->code = i;
}

const char *ShrubberyCreationForm::Error::what() const throw()
{
    switch (this->code)
    {
    case 0:
        return "Form isn't signed yet";
        break;
    case 1:
        return "Form cannot executed owing to bureaucrat execution grade";
        break; 
    case 2:
        return "Form cannot executed owing to bureaucrat execution grade";
        break;
    default:
        return "Something went wrong.";
        break;
    }
}


void ShrubberyCreationForm::execute(Bureaucrat  const & executor) const
{
    std::string file_name = this->target + "_shrubbery";
    std::ofstream outfile(file_name);
    if (!outfile.is_open())
        throw ShrubberyCreationForm::Error(2);
    (void)executor;

    outfile << "          .     .  .      +     .      .          ." << std::endl;
    outfile << "    .       .      .     #       .           ." << std::endl;
    outfile << "       .      .         ###            .      .      ." << std::endl;
    outfile << "     .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
    outfile << "         .      . \"####\"###\"####\"  ." << std::endl;
    outfile << "      .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
    outfile << " .             \"#########\"#########\"        .        ." << std::endl;
    outfile << "       .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
    outfile << "    .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
    outfile << "               .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    outfile << "   .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    outfile << "     .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
    outfile << "   .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    outfile << "           .     \"      000      \"    .     ." << std::endl;
    outfile << "      .         .   .   000     .        .       ." << std::endl;
    outfile << ". .. ..................O000O........................ ...... ..." << std::endl;
    outfile.close();
}
