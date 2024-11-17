
#ifndef __SCENE__BASE_H
#define __SCENE__BASE_H

#include <iostream>
#include <deque>
#include <sstream>

namespace MAIEV{
    namespace SCENE{
        class Base{
        public:
            //进入场景
            Base(std::string name): _name(name){}

            virtual bool quit()
            {
                std::cout << "quit::[bye bye]" << std::endl;
                return false;
            }

            virtual void parseData(std::string const& data)
            {
                _parseData(data);
            }

        private:
            void _parseData(std::string data)
            {
                _act_data = {};
                std::stringstream ss(data);
                std::string tmp;
                while(ss >> tmp){
                   _act_data.push_back(tmp);
                }
            }

            virtual void enter() = 0;

            virtual bool search() = 0;

            virtual bool action() = 0;

            virtual bool view() = 0;

            virtual bool help() = 0;

        protected:

            std::string _name;

            std::deque<std::string> _act_data;
        };
    }
}

#endif
