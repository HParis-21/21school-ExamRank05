#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
    private:
        std::vector<ATarget *> arr_target;

        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &other);
        
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target_ptr);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);
};

#endif //TARGETGENERATOR_HPP